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

string tentukanStatus(float rataRata) {
    if (rataRata > 3) {
        return "Berlebihan";
    } else {
        return "Normal";
    }
}

void tampilkanRekomendasi(float rataRata) {
    cout << "========================================" << endl;
    cout << "       REKOMENDASI KESEHATAN" << endl;
    cout << "========================================" << endl;
    
    if (rataRata > 5) {
        cout << "STATUS: SANGAT BERLEBIHAN!" << endl;
        cout << endl;
        cout << "PERINGATAN KERAS:" << endl;
        cout << "- Konsumsi kopi Anda sangat tinggi dan berbahaya!" << endl;
        cout << "- Segera kurangi konsumsi secara bertahap" << endl;
        cout << "- Risiko: insomnia, kecemasan, jantung berdebar" << endl;
        cout << "- Konsultasikan dengan dokter jika ada gejala" << endl;
        cout << endl;
        cout << "SARAN:" << endl;
        cout << "- Targetkan maksimal 3 cangkir per hari" << endl;
        cout << "- Ganti dengan air putih atau teh herbal" << endl;
        cout << "- Hindari kopi setelah jam 2 siang" << endl;
    } else if (rataRata > 3) {
        cout << "STATUS: BERLEBIHAN" << endl;
        cout << endl;
        cout << "PERHATIAN:" << endl;
        cout << "- Konsumsi kopi Anda melebihi batas aman" << endl;
        cout << "- Mulai kurangi konsumsi secara perlahan" << endl;
        cout << "- Risiko: gangguan tidur, ketergantungan kafein" << endl;
        cout << endl;
        cout << "SARAN:" << endl;
        cout << "- Batasi maksimal 3 cangkir per hari" << endl;
        cout << "- Perbanyak minum air putih" << endl;
        cout << "- Kurangi kopi di malam hari" << endl;
    } else {
        cout << "STATUS: NORMAL" << endl;
        cout << endl;
        cout << "INFORMASI:" << endl;
        cout << "- Konsumsi kopi Anda masih dalam batas wajar" << endl;
        cout << "- Tetap jaga pola konsumsi yang sehat" << endl;
        cout << "- Batas aman: maksimal 3 cangkir per hari" << endl;
        cout << endl;
        cout << "TIPS SEHAT:" << endl;
        cout << "- Hindari kopi saat perut kosong" << endl;
        cout << "- Imbangi dengan air putih yang cukup" << endl;
        cout << "- Jangan minum kopi menjelang tidur" << endl;
    }
    cout << "========================================" << endl;
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

void tampilkanHasil(string nama, int total, float rataRata, string status, int konsumsi[]) {
    cout << endl;
    cout << "========================================" << endl;
    cout << "          HASIL ANALISIS" << endl;
    cout << "========================================" << endl;
    cout << "Nama Mahasiswa    : " << nama << endl;
    cout << "Total Konsumsi    : " << total << " cangkir" << endl;
    cout << "Rata-rata/Hari    : " << fixed << setprecision(2) << rataRata << " cangkir" << endl;
    cout << "Status Konsumsi   : " << status << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Konsumsi per hari (terurut tertinggi ke terendah):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << (i + 1) << ". " << konsumsi[i] << " cangkir" << endl;
    }
    cout << endl;
}

int main() {
    string nama;
    int konsumsi[7];
    int konsumsiAsli[7];
    int total;
    float rataRata;
    string status;
    char ulang;

    do {
        cout << "===========================================" << endl;
        cout << "  SISTEM ANALISIS KONSUMSI KOPI MAHASISWA" << endl;
        cout << "===========================================" << endl;
        cout << endl;

        inputData(nama, konsumsi);

        for (int i = 0; i < 7; i++) {
            konsumsiAsli[i] = konsumsi[i];
        }

        total = hitungTotal(konsumsi);

        rataRata = hitungRataRata(total);

        status = tentukanStatus(rataRata);

        bubbleSort(konsumsi);

        tampilkanHasil(nama, total, rataRata, status, konsumsi);

        tampilkanRekomendasi(rataRata);

        cout << endl;
        cout << "Apakah ingin menganalisis data lain? (Y/T): ";
        cin >> ulang;
        cin.ignore();

        if (ulang == 'Y' || ulang == 'y') {
            cout << "\033[2J\033[1;1H";
            cout << endl;
        }

    } while (ulang == 'Y' || ulang == 'y');

    cout << endl;
    cout << "========================================" << endl;
    cout << "   Terima kasih telah menggunakan" << endl;
    cout << "   Sistem Analisis Konsumsi Kopi!" << endl;
    cout << "   Jaga kesehatan Anda!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Tekan Enter untuk keluar...";
    cin.get();

    return 0;
}