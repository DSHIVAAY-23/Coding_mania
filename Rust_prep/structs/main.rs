struct Shooters {
    name: String,
    id: u32,
}

impl Shooters {
    fn run(&self) {
        println!("{} is running", self.name);
    }
    fn jump(&self) {
        println!("{} is jumping", self.name);
    }
}

struct Gun {
    name: String,
    gun_type: i32,
    ammo:i32,
    max_ammo:i32,
}

impl Gun {
    fn load(&self) {
        println!("{} is loading", self.name);
    }
   fn fire(&mut self) {
        if self.ammo > 0 {
            println!("{} is firing", self.name);
            self.ammo -= 1;
        } else {
            println!("{} is out of ammo! Reload needed.", self.name);
        }
        
        println!("{} ammo count",self.ammo);
    }

    fn reload(&mut self) {
        self.ammo = self.max_ammo;
        println!("{} is reloaded to max ammo: {}", self.name, self.max_ammo);
                println!("{} ammo count",self.ammo);

    }
}

enum Feature {
    SingleShot,
    Automatic,
    SemiAutomatic,
}

fn main() {
    // Create a Shooter instance
    let shootout = Shooters {
        name: String::from("John Wick"),
        id: 1,
    };

    // Create a Gun instance
    let mut pistol = Gun {
        name: String::from("Desert Eagle"),
        gun_type: 1,
        ammo:18,
        max_ammo:18,
    };

    // Call methods on Shooter
    shootout.run();
    shootout.jump();
    

    // Call methods on Gun
    pistol.load();
    pistol.fire();
    pistol.reload();

    // Using the Feature enum
    let gun_feature = Feature::Automatic;

    match gun_feature {
        Feature::SingleShot => println!("The gun is in single-shot mode"),
        Feature::Automatic => println!("The gun is in automatic mode"),
        Feature::SemiAutomatic => println!("The gun is in semi-automatic mode"),
    }
}
