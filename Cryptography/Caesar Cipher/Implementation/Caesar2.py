# Caesar's Cipher Implementation 2 (Upper Case Plaintext Encrypt & Decrypt)

# Lookup alphabet reference
ALPHABET = ' ABCDEFGHIJKLMNOPQRSTUVWXYZ'

# Key to shift by 5
KEY = 5

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
        ciphertext += ALPHABET[index]
    return ciphertext

def decrypt_caesar(ciphertext):
    plaintext = ''
    for c in ciphertext:
        index = ALPHABET.find(c)
        index = (index-KEY) % len(ALPHABET)
        plaintext += ALPHABET[index]
    return plaintext

if __name__ == '__main__':
    original_message = 'This is original haha'

    ciphered = encrypt_caesar(original_message)
    deciphered = decrypt_caesar(ciphered)

    print('Encryption result: ' + ciphered)
    print('Decryption result: ' + deciphered)