import matplotlib.pyplot as plt

# To do frequency analysis, we do the following:
# 1. Count relative frequency of letter
# 2. Get the letter with most frequency (or 2nd most due to whitespace may occupy most frequency)
# 3. Retrieve key by formula --> key = integer(MostFrequentLetter) - integer(LetterE)
# Note: integer() means in integer of index representation & reason we substract with E is because letter E is the most frequently used letter in an English sentence
LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

def frequency_analysis(text):
    text = text.upper()

    # Use dictionary to store frequency of letters
    letter_frequencies = {}

    for letter in LETTERS:
        letter_frequencies[letter] = 0
    
    for letter in text:
        if letter in LETTERS:
            letter_frequencies[letter] += 1

    return letter_frequencies

def plot_distribution(frequencies):
    plt.bar(frequencies.keys(), frequencies.values())
    plt.show()

def crack(cipher_text):
    freq = frequency_analysis(cipher_text)
    plot_distribution(freq)
    freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)
    print(freq)
    print("Possible key for caesar's cipher: " + str((LETTERS.find(freq[0][0]) - LETTERS.find('E'))))
    print("Possible key for caesar's cipher: " + str((LETTERS.find(freq[1][0]) - LETTERS.find('E'))))
    print("Possible key for caesar's cipher: " + str((LETTERS.find(freq[2][0]) - LETTERS.find('E'))))

if __name__ == '__main__':
    cipher = "HFQYJWWFENXEFEKWJXMEYFPJETSEHFQHZQFYNSLEHFWGTSEKTTYUWNSYEINLNYFQQCEYMWTZLMEFSEFUUEGFXJIEFUUWTFHMEYTEXZUUTWYELWJJSEJS NWTSRJSYENSECTZWETASEAFC"
    # original = 'CALTERRA IS A FRESH TAKE ON CALCULATING CARBON FOOTPRINT DIGITALLY THROUGH AN APP BASED APPROACH TO SUPPORT GREEN ENVIRONMENT IN YOUR OWN WAY'
    crack(cipher)