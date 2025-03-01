async function Test(){
    console.log("2: message");
    
    return "hello";

}
Test().then((result)=>{
console.log(result);
})