/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package tugaspbo;

/**
 *
 * @author evadw
 */
import java.util.Scanner;

public class RataRata {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double total = 0;
        int count = 0;
        
        System.out.println("Masukkan angka (ketik 'selesai' untuk menghentikan):");
        
        while (true) {
            String input = scanner.nextLine();
            
            // Memeriksa apakah pengguna ingin keluar
            if (input.equalsIgnoreCase("selesai")) {
                break;
            }
            
            try {
                // Mengonversi input ke double
                double angka = Double.parseDouble(input);
                total += angka; // Menambahkan angka ke total
                count++; // Menambah jumlah angka yang dimasukkan
            } catch (NumberFormatException e) {
                System.out.println("Input tidak valid, silakan masukkan angka atau ketik 'selesai' untuk keluar.");
            }
        }
        
        // Menghitung rata-rata jika ada angka yang dimasukkan
        if (count > 0) {
            double rataRata = total / count;
            System.out.printf("Rata-rata: %.2f\n", rataRata);
        } else {
            System.out.println("Tidak ada angka yang dimasukkan.");
        }
        
        scanner.close();
    }
}