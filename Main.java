/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tugaspbo;

/**
 *
 * @author evadw
 */


import java.util.Scanner;

/**
 * Main class untuk menjalankan program.
 */
public class main {

    public static void main(String[] args) {
        // Buat scanner untuk input.
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Halo, Mari menghitung berapa zakat yang perlu kita bayar bersama Eva Dwi Yanti^^");
            
            // Mengajak pengguna untuk input jumlah harta dalam format desimal.
            System.out.print("Masukkan total harta Anda (desimal): ");
            double totalHarta = input.nextDouble();

            // Membuat objek Muzzaki dengan jumlah harta yang diinput pengguna.
            muzzaki muzzaki = new muzzaki(totalHarta);

            // Menampilkan jumlah zakat yang harus dibayarkan.
            System.out.printf("Zakat yang harus dibayar: Rp %.2f\n", muzzaki.hitungZakat());
        }
    }
}
