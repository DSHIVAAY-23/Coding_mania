const { expect } = require("chai");
const{isCallTrace} = require("hardhat/internal/hardhat-network/stack-traces/message-trace");

describe("tokens contract", function(){
    it("deployment",async function(){
        const [owner] = await ethers.getSigners();
        const Token = await ethers.getContractFactory("Token"); //instance

        const hardhattoken = await Token.deploy(); //deploy contract
        const ownerbalance = await hardhattoken.balanceOf(owner.address);

        expect(await hardhattoken.totalsupply()).to.equal(ownerbalance )
        return {ownerbalance};

    });
    it("transfer",async function(){
        const [owner,addr1,addr2] = await ethers.getSigners();
        const Token = await ethers.getContractFactory("Token"); //instance

        const hardhattoken = await Token.deploy(); //deploy contract
        await hardhattoken.transfer(addr1.address,10);

        expect(await hardhattoken.balanceOf(addr1.address)).to.equal(10);
        await hardhattoken.connect(addr1).transfer(addr2.address,5);
        expect(await hardhattoken.balanceOf(addr2.address)).to.equal(5);



    });
});