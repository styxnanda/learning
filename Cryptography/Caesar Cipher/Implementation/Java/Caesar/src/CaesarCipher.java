public class CaesarCipher {
    private String ALPHABET = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    public String encrypt(String plainText, int key){
        String cipherText = "";
        plainText = plainText.toUpperCase();
        for(int i = 0; i < plainText.length(); i++){
            char character = plainText.charAt(i);
            int index = ALPHABET.indexOf(character);
            index = Math.floorMod(index+key, ALPHABET.length());
            // index = Math.abs((index + key) % ALPHABET.length());
            // cipherText = cipherText.concat(Character.toString(ALPHABET.charAt(index)));
            cipherText += ALPHABET.charAt(index);
        }        
        return cipherText;
    }

    public String decrypt(String cipheredText, int key){
        String plainText = "";
        for(int i = 0; i < cipheredText.length(); i++){
            char character = cipheredText.charAt(i);
            int index = ALPHABET.indexOf(character);
            index = Math.floorMod(index-key, ALPHABET.length());
            // index = Math.abs((index - key) % ALPHABET.length());
            // plainText = plainText.concat(Character.toString(ALPHABET.charAt(index)));
            plainText += ALPHABET.charAt(index);
        }
        return plainText;
    }
}
