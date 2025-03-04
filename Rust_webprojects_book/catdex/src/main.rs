#[macro_use]
extern crate diesel;
use actix_files::Files;
// ...
use actix_web::{http, web, App, Error, HttpResponse, HttpServer, Responder};
use diesel::pg::PgConnection;
use diesel::prelude::*;
use diesel::r2d2::{self, ConnectionManager};
use std::env;
mod models;
mod schema;
use self::models::*;
use self::schema::cats::dsl::*;
type DbPool = r2d2::Pool<ConnectionManager<PgConnection>>;

async fn cats_endpoint(
    pool: web::Data<DbPool>,
   ) -> Result<HttpResponse, Error> {
    let connection = pool.get()
    .expect("Can't get db connection from pool");
    let cats_data = web::block(move || {
    cats.limit(100).load::<Cat>(&connection)
    })
    .await
    .map_err(|_| HttpResponse::InternalServerError().finish())?;
    return Ok(HttpResponse::Ok().json(cats_data));
   }

   fn setup_database() -> DbPool {
    let database_url = env::var("DATABASE_URL")
        .expect("DATABASE_URL must be set");
    let manager = ConnectionManager::<PgConnection>::new(&database_url);
    r2d2::Pool::builder()
        .build(manager)
        .expect("Failed to create DB connection pool.")
}

#[actix_web::main]
async fn main() -> std::io::Result<()> {
 let database_url = env::var("DATABASE_URL")
 .expect("DATABASE_URL must be set");
 let manager =
 ConnectionManager::<PgConnection>::new(&database_url);
 let pool = r2d2::Pool::builder()
 .build(manager)
 .expect("Failed to create DB connection pool.");
println!("Listening on port 8080");
 HttpServer::new(move || {
 App::new()
 .data(pool.clone())
 .service(
 web::scope("/api").route(
 "/cats",
 web::get().to(cats_endpoint),
 ),
 )
 .service(
 Files::new("/", "static").show_files_listing(),
 )
 })
 .bind("127.0.0.1:8080")?
 .run()
 .await
}

#[cfg(test)]
mod tests {
    use super::*;
    use actix_web::{test, App};

    #[actix_rt::test]
    async fn test_cats_endpoint_get() {
        let pool = setup_database();
            let mut app = test::init_service(
            App::new()
                .data(pool.clone())
                .route("/api/cats", web::get().to(cats_endpoint))
        ).await;
        let req = test::TestRequest::get().uri("/api/cats").to_request();
        let resp = test::call_service(&mut app, req).await;
        assert!(resp.status().is_success());
    }
}