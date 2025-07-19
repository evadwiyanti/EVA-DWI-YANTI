#include <iostream>
#include <vector>
#include <algorithm>

void penukaranKoinGreedy(int jumlahUang, std::vector<int>& denominasi) {
    std::sort(denominasi.begin(), denominasi.end(), std::greater<int>());

    std::cout << "\n--- Penukaran Koin dengan Algoritma Greedy ---\n";
    std::cout << "Nama       : Eva Dwi Yanti\n";
    std::cout << "NIM        : 23533794\n";
    std::cout << "Kelas      : 4D TI\n";
    std::cout << "Mata Kuliah: Algoritma Strategis\n";
    std::cout << "----------------------------------------------\n";

    std::cout << "Jumlah uang yang ditukarkan: " << jumlahUang << "\n\n";

    std::cout << "Koin yang digunakan:\n";
    for (int koin : denominasi) {
        int count = jumlahUang / koin;
        std::cout << "Jumlah Keping " << koin << "-an sebanyak: " << count << "\n";
        jumlahUang -= count * koin;
    }

    if (jumlahUang > 0) {
        std::cout << "\nSisa uang yang tidak dapat ditukarkan: " << jumlahUang << "\n";
    }

    std::cout << "----------------------------------------------\n";
}

int main() {
    int banyakKoin, nilaiDitukarkan;
    std::vector<int> jenisKoin;

    std::cout << "Tuliskan Banyaknya Jenis Koin: ";
    std::cin >> banyakKoin;

    std::cout << "Masukan Jenis Koin (pisahkan dengan spasi atau enter):\n";
    for (int i = 0; i < banyakKoin; ++i) {
        int koin;
        std::cin >> koin;
        jenisKoin.push_back(koin);
    }

    std::cout << "Masukan Nilai yang ditukarkan: ";
    std::cin >> nilaiDitukarkan;

    penukaranKoinGreedy(nilaiDitukarkan, jenisKoin);

    return 0;
}
