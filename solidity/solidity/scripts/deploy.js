
async function main(){
    const[] = await ethers.getSigners();

    const Token = await ethers.getContractFactory("Token"); //instance
    // console.log(Token);
    const token = await Token.deploy();
    // console.log(token);
    console.log("Token addresses",token.address);
}

main()
.then(() => process.exit(0))
.catch((error) => {
console.error(error);
process.exit(1);
});