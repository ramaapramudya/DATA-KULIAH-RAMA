import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan nilai sisi kubus: ");
        double sisi = input.nextDouble();

        double volume = sisi * sisi * sisi;

        System.out.println("Volume kubus adalah : " + volume + " cm kubik");
        
        input.close();
    }
}
