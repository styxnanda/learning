# Caesar's Cipher Implementation 1 (Upper Case Plaintext)

# Lookup alphabet reference
ALPHABET = ' ABCDEFGHIJKLMNOPQRSTUVWXYZ'

# Key to shift by 5
KEY = 1

# Function to cipher
def encrypt_caesar(plaintext):
    ciphertext = ''
    plaintext = plaintext.upper()
    for c in plaintext:
        # Find index associated with the character in alphabet lookup
        index = ALPHABET.find(c)

        # Formula caesar's cipher
        # E(x) = (x+n) mod 26
        index = (index+KEY) % len(ALPHABET)
        ciphertext = ciphertext + ALPHABET[index]
    return ciphertext

print(encrypt_caesar('ahoi'))