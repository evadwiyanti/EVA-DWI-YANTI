#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void printArray(const std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "--- Merge Sort dengan Algoritma Divide and Conquer ---" << std::endl;
    std::cout << "Nama: Eva Dwi Yanti" << std::endl;
    std::cout << "NIM: 23533794" << std::endl;
    std::cout << "Kelas: 4D TI" << std::endl;
    std::cout << "Mata Kuliah: Algoritma Strategis" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;

    int size;
    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> size;

    std::vector<int> arr(size);
    std::cout << "Masukkan " << size << " elemen (pisahkan dengan spasi atau enter):" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "\nArray sebelum diurutkan: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Array setelah diurutkan (Merge Sort): ";
    printArray(arr);
    std::cout << "----------------------------------------------------" << std::endl;

    std::cout << "Press any key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
