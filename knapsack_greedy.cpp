#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

struct Item {
    int id;
    int weight;
    int profit;
    double ratio;
};

bool compareItems(const Item& a, const Item& b) {
    if (a.ratio == b.ratio) {
        return a.id < b.id;
    }
    return a.ratio > b.ratio;
}

void knapsackGreedy(int capacity, std::vector<Item>& items) {
    std::cout << "\n--- Knapsack Problem dengan Algoritma Greedy ---" << std::endl;
    std::cout << "Nama: Eva Dwi Yanti" << std::endl;
    std::cout << "NIM: 23533794" << std::endl;
    std::cout << "Kelas: 4D TI" << std::endl;
    std::cout << "Mata Kuliah: Algoritma Strategis" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    std::cout << "Kapasitas Knapsack Maksimal: " << capacity << std::endl;
    std::cout << "\nDetail Item (sebelum diurutkan):" << std::endl;
    std::cout << "ID\tBobot\tProfit\tRasio (P/W)" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    for (auto& item : items) {
        if (item.weight > 0) {
            item.ratio = static_cast<double>(item.profit) / item.weight;
        } else {
            item.ratio = 0;
        }
        std::cout << item.id << "\t" << item.weight << "\t" << item.profit << "\t"
                  << std::fixed << std::setprecision(2) << item.ratio << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;

    std::sort(items.begin(), items.end(), compareItems);

    std::cout << "\nItem setelah diurutkan berdasarkan Rasio P/W (Tertinggi ke Terendah):" << std::endl;
    std::cout << "ID\tBobot\tProfit\tRasio (P/W)" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    for (const auto& item : items) {
        std::cout << item.id << "\t" << item.weight << "\t" << item.profit << "\t"
                  << std::fixed << std::setprecision(2) << item.ratio << std::endl;
    }
    std::cout << "------------------------------------------" << std::endl;

    double totalProfit = 0.0;
    int currentWeight = 0;
    std::vector<int> selectedItems;

    for (const auto& item : items) {
        if (currentWeight + item.weight <= capacity) {
            selectedItems.push_back(item.id);
            totalProfit += item.profit;
            currentWeight += item.weight;
        }
    }

    std::cout << "\nHasil Knapsack Greedy:" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Item yang dipilih: ";
    if (selectedItems.empty()) {
        std::cout << "Tidak ada item yang dipilih.";
    } else {
        for (size_t i = 0; i < selectedItems.size(); ++i) {
            std::cout << "Objek ke-" << selectedItems[i];
            if (i < selectedItems.size() - 1) {
                std::cout << ", ";
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Total Bobot yang Digunakan: " << currentWeight << std::endl;
    std::cout << "Total Profit Maksimal: " << std::fixed << std::setprecision(2) << totalProfit << std::endl;
    std::cout << "Kapasitas Tersisa: " << (capacity - currentWeight) << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}

int main() {
    std::vector<Item> items = {
        {1, 2, 21, 0.0},
        {2, 3, 35, 0.0},
        {3, 5, 70, 0.0},
        {4, 3, 42, 0.0},
        {5, 3, 80, 0.0},
        {6, 7, 20, 0.0},
        {7, 9, 10, 0.0},
        {8, 4, 5, 0.0}
    };

    const int KNAPSACK_CAPACITY = 15;

    knapsackGreedy(KNAPSACK_CAPACITY, items);

    std::cout << "Press any key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
