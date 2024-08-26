public class BruteForce {
    private String alphabet = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    public void crack(String cipherText){
        for(int key = 0; key < alphabet.length(); key++){
            String plainText = "";
            for(int j = 0; j < cipherText.length(); j++){
                char character = cipherText.charAt(j);
                int index = alphabet.indexOf(character);
                index = (index - key + alphabet.length()) % alphabet.length(); // More intuitive approach
                // index = Math.floorMod(index-key, alphabet.length()); // More efficient approach
                plainText += Character.toString(alphabet.charAt(index));
            }
            System.out.println("Possible key #" + Integer.toString(key) + ": " + plainText);
        }
    }
}