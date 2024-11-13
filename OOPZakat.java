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

// Kelas Donatur untuk menyimpan data donatur dan menghitung zakat
class Donatur {
    private String namaDonatur;
    private double harta;

    // Konstruktor berparameter
    public Donatur(String namaDonatur, double harta) {
        this.namaDonatur = namaDonatur;
        this.harta = harta;
    }

    // Metode getter dan setter
    public String getNamaDonatur() {
        return namaDonatur;
    }

    public void setNamaDonatur(String namaDonatur) {
        this.namaDonatur = namaDonatur;
    }

    public double getHarta() {
        return harta;
    }

    public void setHarta(double harta) {
        this.harta = harta;
    }

    // Metode untuk menghitung zakat (2.5% dari harta)
    public double hitungZakat() {
        return harta * 2.5 / 100;
    }
}

// Kelas Penerima untuk menyimpan data penerima zakat
class Penerima {
    private String namaPenerima;
    private double jumlahZakatDiterima;

    // Konstruktor berparameter
    public Penerima(String namaPenerima, double jumlahZakatDiterima) {
        this.namaPenerima = namaPenerima;
        this.jumlahZakatDiterima = jumlahZakatDiterima;
    }

    // Metode getter dan setter
    public String getNamaPenerima() {
        return namaPenerima;
    }

    public void setNamaPenerima(String namaPenerima) {
        this.namaPenerima = namaPenerima;
    }

    public double getJumlahZakatDiterima() {
        return jumlahZakatDiterima;
    }

    public void setJumlahZakatDiterima(double jumlahZakatDiterima) {
        this.jumlahZakatDiterima = jumlahZakatDiterima;
    }
}

// Kelas utama untuk menjalankan program
public class OOPZakat {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Mengajak pengguna untuk memasukkan data
        System.out.println("Halo, Mari menghitung berapa zakat yang perlu kita bayar bersama Eva Dwi Yanti^^");
        System.out.print("Masukkan nama Donatur: ");
        String namaDonatur = input.nextLine();

        System.out.print("Masukkan total harta Anda (desimal): ");
        double harta = input.nextDouble();

        // Membuat objek Donatur dengan data yang dimasukkan
        Donatur donatur = new Donatur(namaDonatur, harta);

        // Menghitung zakat yang harus dibayar
        double zakat = donatur.hitungZakat();
        System.out.printf("Zakat yang harus dibayar oleh %s: Rp %.2f\n", donatur.getNamaDonatur(), zakat);

        // Meminta nama penerima zakat
        input.nextLine(); // Clear buffer
        System.out.print("Masukkan nama Penerima Zakat: ");
        String namaPenerima = input.nextLine();

        // Membuat objek Penerima dengan zakat yang diterima
        Penerima penerima = new Penerima(namaPenerima, zakat);
        System.out.printf("Zakat sebesar Rp %.2f telah diberikan kepada %s.\n", penerima.getJumlahZakatDiterima(), penerima.getNamaPenerima());

        input.close(); // Menutup scanner
    }
}

