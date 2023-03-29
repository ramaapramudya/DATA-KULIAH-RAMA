import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Masukkan gaji per hari: ");
        double GajiPerHari = input.nextDouble();

        double GajiPerBulan = GajiPerHari * 20;
        double transport = 50000;
        double MakanSiang = 50000;
        double bpjs = GajiPerBulan * 5.7 / 100;

        double GajiTotal = GajiPerBulan + transport + MakanSiang + bpjs;

        System.out.println("===============================");
        System.out.println("\n\tPERHITUNGAN GAJI\n");
        System.out.println("===============================\n");
        System.out.println("Gaji Pokok : " + GajiPerBulan);
        System.out.println("Transportasi : " + transport);
        System.out.println("Makan Siang : " + MakanSiang);
        System.out.println("BPJS : " + bpjs);
        System.out.println("\nTOTAL GAJI : " + GajiTotal);
        System.out.println("\n===============================\n");
        
        input.close();
    }
}
