/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tugaspbo;

/**
 *
 * @author evadw
 */
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DaftarMataKuliah {

    public static void main(String[] args) {
        // Inisialisasi daftar mata kuliah sesuai gambar
        List<String> mataKuliah = new ArrayList<>();
        mataKuliah.add("Agama Islam");
        mataKuliah.add("Jaringan Komputer Dasar");
        mataKuliah.add("Pemrograman Berorientasi Objek");
        mataKuliah.add("Praktikum Pemrog. Berorientasi Obyek");
        mataKuliah.add("Pancasila");
        mataKuliah.add("Analisis dan Desain Sistem Informasi");
        mataKuliah.add("Praktikum Jaringan Komputer");
        mataKuliah.add("Sistem Operasi");
        mataKuliah.add("Manajemen Basis Data");

        Scanner scanner = new Scanner(System.in);
        int pilihan;

        do {
            System.out.println("\nMenu:");
            System.out.println("1. Cari Mata Kuliah");
            System.out.println("2. Tampilkan Jumlah Mata Kuliah");
            System.out.println("3. Tampilkan Semua Mata Kuliah");
            System.out.println("4. Keluar");
            System.out.print("Pilih menu: ");
            pilihan = scanner.nextInt();
            scanner.nextLine(); // Membuang newline dari input sebelumnya

            switch (pilihan) {
                case 1:
                    System.out.print("Masukkan nama mata kuliah yang ingin dicari: ");
                    String cari = scanner.nextLine();
                    if (mataKuliah.contains(cari)) {
                        System.out.println("Mata kuliah \"" + cari + "\" ditemukan dalam daftar.");
                    } else {
                        System.out.println("Mata kuliah \"" + cari + "\" tidak ditemukan.");
                    }
                    break;

                case 2:
                    System.out.println("Jumlah mata kuliah: " + mataKuliah.size());
                    break;

                case 3:
                    System.out.println("Daftar mata kuliah:");
                    for (String mk : mataKuliah) {
                        System.out.println("- " + mk);
                    }
                    break;

                case 4:
                    System.out.println("Terima kasih!");
                    break;

                default:
                    System.out.println("Pilihan tidak valid. Coba lagi.");
            }
        } while (pilihan != 4);

        scanner.close();
    }
}
