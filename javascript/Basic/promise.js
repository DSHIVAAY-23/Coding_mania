 let prom = new Promise(function(resolve, reject) {
let me = true;
if (!me) {
  resolve("I'm happy");
} else {
  reject("I'm sad");
}

 });
 function promiseFulfilled() {
    console.log("promise fulfilled");
 }
 function promiseRejected() {
    console.log("promise rejected");
 }
 prom.then(promiseFulfilled).catch(promiseRejected);
 
 console.log(prom);