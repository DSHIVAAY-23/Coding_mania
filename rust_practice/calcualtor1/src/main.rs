
use ark_std::rand::SeedableRng;
use fastcrypto::ed25519::Ed25519KeyPair;
use fastcrypto::traits::KeyPair;
use blake2::{Blake2b512,Digest};
 use ark_std::rand::rngs::StdRng;

use bs58::encode;
fn main() {
// Generate a keypair using Ed25519 algorithm

let keypair = Ed25519KeyPair::generate(&mut StdRng::from_seed([0; 32]));

 let public_key = keypair.public();
//  let mut eph_pubkey = vec![0x00];
//  eph_pubkey.extend(keypair.public().as_ref());

// Concatenate signature scheme flag (0x00 for Ed25519) with public key bytes
let mut data: Vec<u8> = Vec::with_capacity(1 + public_key.as_ref().len());
data.push(0x00); // Signature scheme flag for Ed25519
data.extend_from_slice(public_key.as_ref());
println!("data: {:?}", data);

let address1 = bs58::encode(data.clone())
         .with_alphabet(bs58::Alphabet::RIPPLE)
         .into_string();
println!("Address1: {:?}", address1);

// Hash the data using BLAKE2b
let mut hasher = Blake2b512::new();
hasher.update(&data);
let hash = hasher.finalize();
println!("hash:{:?}",hash);

// Encode the hash into base58 string
let address = bs58::encode(hash)
         .with_alphabet(bs58::Alphabet::RIPPLE)
         .into_string();
println!("Address: {:?}", address);
}