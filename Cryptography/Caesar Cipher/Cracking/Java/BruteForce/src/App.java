public class App {
    public static void main(String[] args) throws Exception {
        String cipherMessage = "YMNXENXEMJQQTEATWQI";

        BruteForce bf = new BruteForce();

        bf.crack(cipherMessage);
    }
}