public class App {
    public static void main(String[] args) throws Exception {
        CaesarCipher cipher = new CaesarCipher();
        String originalMessage = "This is original haha and gibberish why am I doing this but this is so much fun lmao okay yep";
        int key = 5;
        String encryptedMessage = cipher.encrypt(originalMessage, key);
        String decryptedMessage = cipher.decrypt(encryptedMessage, key);

        System.out.println("Encrypted message: " + encryptedMessage);
        System.out.println("Decrypted message: " + decryptedMessage);
    }
}
