ALPHABET = ' ABCDEFGHIJKLMNOPQRSTUVWXYZ'
KEY = 5

def encrypt_caesar(plaintext):
    ciphertext = ''
    plaintext = plaintext.upper()
    for c in plaintext:
        index = ALPHABET.find(c)
        index = (index+KEY) % len(ALPHABET)
        ciphertext += ALPHABET[index]
    return ciphertext

def crack(ciphertext):
    for pk in range(len(ALPHABET)):
        plaintext = ''
        for c in ciphertext:
            index = ALPHABET.find(c)
            index = (index-pk) % len(ALPHABET)
            plaintext += ALPHABET[index]
        print('Possible result #' + str(pk) + ": " + plaintext);

if __name__ == '__main__':
    original_message = 'This is hello world'
    cipher = encrypt_caesar(original_message) # Get encrypted message first

    print(cipher)
    crack(cipher)   # Crack the encrypted message with no knowledge of the key used