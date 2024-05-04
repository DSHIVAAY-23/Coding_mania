const { ethers } = require("ethers");
const provider = new ethers.providers.JsonRpcProvider('https://sepolia.infura.io/v3/f9a354be30b44243b9ee3642c50603d3');

const queryblockchain = async()=>{
    const block = await provider.getBlockNumber();
    console.log(block);
}
queryblockchain();