from py_ecc import optimized_bn128 as bn128
from hashlib import sha256

# Generate a private key from a secret seed
secret_seed = b"your-secret-seed"
private_key = int.from_bytes(sha256(secret_seed).digest(), "big") % bn128.curve_order

# Generate the corresponding public key
public_key = bn128.multiply(bn128.G1, private_key)

# Message
message = b"Hello, BLS!"

# Hash the message
hashed_message = int.from_bytes(sha256(message).digest(), "big")

# Sign
signature = bn128.multiply(hashed_message, private_key)

# Verification
verification_result = bn128.eq(
    bn128.multiply(bn128.G1, signature), 
    bn128.add(
        bn128.multiply(public_key, hashed_message),
        bn128.neg(bn128.multiply(bn128.G1, hashed_message))
    )
)

# Display results
print("Private Key:", private_key)
print("Public Key:", public_key)
print("Message:", message)
print("Hashed Message:", hashed_message)
print("Signature:", signature)
print("Verification Result:", verification_result)
