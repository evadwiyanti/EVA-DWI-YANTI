#include <iostream>
#include <vector>
#include <algorithm>

struct Tugas {
    int id;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

bool compareTasks(const Tugas& a, const Tugas& b) {
    return a.burstTime < b.burstTime;
}

void minimasiWaktuSistemGreedy(std::vector<Tugas>& daftarTugas) {
    std::cout << "\n--- Minimasi Waktu dalam Sistem dengan Algoritma Greedy (SJF) ---" << std::endl;
    std::cout << "Nama: Eva Dwi Yanti" << std::endl;
    std::cout << "NIM: 23533794" << std::endl;
    std::cout << "Kelas: 4D TI" << std::endl;
    std::cout << "Mata Kuliah: Algoritma Strategis" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;

    std::sort(daftarTugas.begin(), daftarTugas.end(), compareTasks);

    int currentTime = 0;
    float totalWaitingTime = 0;
    float totalTurnaroundTime = 0;

    for (size_t i = 0; i < daftarTugas.size(); ++i) {
        daftarTugas[i].waitingTime = currentTime;
        daftarTugas[i].turnaroundTime = daftarTugas[i].waitingTime + daftarTugas[i].burstTime;
        currentTime += daftarTugas[i].burstTime;
        totalWaitingTime += daftarTugas[i].waitingTime;
        totalTurnaroundTime += daftarTugas[i].turnaroundTime;
    }

    std::cout << "Tugas Terurut Berdasarkan Burst Time Terpendek:" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "ID Tugas\tBurst Time\tWaktu Tunggu\tWaktu Penyelesaian" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    for (const auto& tugas : daftarTugas) {
        std::cout << tugas.id << "\t\t" << tugas.burstTime << "\t\t"
                  << tugas.waitingTime << "\t\t" << tugas.turnaroundTime << std::endl;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "Waktu Tunggu Rata-rata: " << totalWaitingTime / daftarTugas.size() << std::endl;
    std::cout << "Waktu Penyelesaian Rata-rata: " << totalTurnaroundTime / daftarTugas.size() << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
}

int main() {
    int numTugas;
    std::cout << "Masukan jumlah tugas: ";
    std::cin >> numTugas;

    std::vector<Tugas> daftarTugas(numTugas);
    std::cout << "Masukan burst time untuk setiap tugas:" << std::endl;
    for (int i = 0; i < numTugas; ++i) {
        daftarTugas[i].id = i + 1;
        std::cout << "Burst time untuk Tugas " << i + 1 << ": ";
        std::cin >> daftarTugas[i].burstTime;
    }

    minimasiWaktuSistemGreedy(daftarTugas);

    std::cout << "Press any key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
