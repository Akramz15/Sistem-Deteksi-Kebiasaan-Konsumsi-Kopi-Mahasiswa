#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void inputData(string &nama, int konsumsi[]) {
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);

    cout << endl;
    cout << "Masukkan konsumsi kopi (cangkir) per hari:" << endl;

    int i = 0;
    while (i < 7) {
        cout << "Hari ke-" << (i + 1) << ": ";
        cin >> konsumsi[i];

        if (konsumsi[i] < 0) {
            cout << "Error: Data tidak valid, ulangi input!" << endl;
        } else {
            i++;
        }
    }
}

int hitungTotal(int konsumsi[]) {
    int total = 0;
    for (int i = 0; i < 7; i++) {
        total = total + konsumsi[i];
    }
    return total;
}

float hitungRataRata(int total) {
    return (float)total / 7;
}

void bubbleSort(int konsumsi[]) {
    int temp;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (konsumsi[j] < konsumsi[j + 1]) {
                temp = konsumsi[j];
                konsumsi[j] = konsumsi[j + 1];
                konsumsi[j + 1] = temp;
            }
        }
    }
}

void tampilkanHasil(string nama, int total, float rataRata, int konsumsi[]) {
    cout << endl;
    cout << "========================================" << endl;
    cout << "          HASIL ANALISIS" << endl;
    cout << "========================================" << endl;
    cout << "Nama Mahasiswa    : " << nama << endl;
    cout << "Total Konsumsi    : " << total << " cangkir" << endl;
    cout << "Rata-rata/Hari    : " << fixed << setprecision(2) << rataRata << " cangkir" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Konsumsi per hari (terurut tertinggi ke terendah):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << (i + 1) << ". " << konsumsi[i] << " cangkir" << endl;
    }
}

int main() {
    string nama;
    int konsumsi[7];
    int konsumsiAsli[7];
    int total;
    float rataRata;

    cout << "========================================" << endl;
    cout << "  SISTEM ANALISIS KONSUMSI KOPI MAHASISWA" << endl;
    cout << "========================================" << endl;
    cout << endl;

    inputData(nama, konsumsi);

    for (int i = 0; i < 7; i++) {
        konsumsiAsli[i] = konsumsi[i];
    }

    total = hitungTotal(konsumsi);

    rataRata = hitungRataRata(total);

    bubbleSort(konsumsi);

    tampilkanHasil(nama, total, rataRata, konsumsi);

    cout << endl;
    cout << "========================================" << endl;
    cout << "     FITUR DALAM PENGEMBANGAN" << endl;
    cout << "========================================" << endl;
    cout << "[ ] Analisis status konsumsi" << endl;
    cout << "[ ] Rekomendasi kesehatan" << endl;
    cout << "[ ] Fitur mengulang program" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Tekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}