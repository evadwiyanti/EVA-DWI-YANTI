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

public class ZakatMal {

    public static void main(String[] args) {
        // Minta pengguna memasukkan total harta dalam desimal.
        try ( // Buat scanner untuk input.
                Scanner input = new Scanner(System.in)) // Membaca input dari konsol, akses ke fitur sistem, aliran input standar
        {
            System.out.println("Halo,Mari menghitung berapa zakat yang perlu kita bayar bersama Eva Dwi Yanti^^");
            // Mengajak pengguna untuk input jumlah harta dalam format desimal.
            System.out.print("Masukkan total harta Anda (desimal): ");
            double harta = input.nextDouble(); // Mengambil input dan konversi.
            // Hitung zakat maal (2.5% dari harta).
            double zakat = harta * 2.5 / 100;
            // Menampilkan jumlah zakat yang harus dibayarkan
            System.out.printf("Zakat yang harus dibayar: Rp %.2f\n", zakat);
            // Tutup scanner.
        }
    }
}
