require("@nomicfoundation/hardhat-toolbox");

/** @type import('hardhat/config').HardhatUserConfig */
const ALCHEMY_API_KEY = "sYxv9ot_V8-uB8KoIYlBMEhGBE_kPy2W";
const SEPOLIA_PRIVATE_KEY = "25f67815e7072641c8aa55d81f0b8de61f1f3466b721a401e57c3002638e51c8";

module.exports = {
  solidity: "0.8.24",
  networks:{
    sepolia:{
      url: `https://eth-sepolia.g.alchemy.com/v2/${ALCHEMY_API_KEY}`,
      accounts: [`0x${SEPOLIA_PRIVATE_KEY}`]
    }
  }
};
