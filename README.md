# ☕ SISTEM ANALISIS KONSUMSI KOPI MAHASISWA

Program analisis pola konsumsi kopi berbasis data 7 hari menggunakan C++

## 📊 Status Progres: 70%

**Progres Saat Ini:**
- ✅ 5 Fungsi Modular Selesai
- ✅ Bubble Sort Descending Selesai
- ⏳ 3 Fitur Dalam Pengembangan (Status, Rekomendasi, Mengulang)

## 📌 Fitur yang Sudah Selesai

✅ **Array 1 Dimensi** - Penyimpanan data konsumsi 7 hari  
✅ **Input & Validasi** - Input nama dan konsumsi dengan validasi negatif  
✅ **Fungsi Modular** - 5 fungsi terpisah untuk kemudahan maintenance  
✅ **Perhitungan Matematis** - Total dan rata-rata konsumsi  
✅ **Bubble Sort** - Pengurutan data dari tertinggi ke terendah  
✅ **Tampilan Terstruktur** - Output hasil analisis yang rapi  
✅ **Edge Case Handling** - Validasi input negatif dengan perulangan  

## ⏳ Fitur Dalam Pengembangan

🔧 **Logika Status** - Penentuan Normal/Berlebihan (target: minggu depan)  
🔧 **Rekomendasi Kesehatan** - Saran bertingkat berdasarkan kategori konsumsi (target: minggu depan)  
🔧 **Fitur Mengulang** - Do-while loop untuk analisis berulang (target: minggu depan)  

## 🎯 Ketentuan PBL

Program ini dibuat sesuai ketentuan pembelajaran dengan kriteria:
- ✅ Alur Input → Proses → Output
- ✅ Percabangan (if-else untuk validasi)
- ✅ Perulangan (while, for, nested loop)
- ✅ Minimal 2 fungsi/prosedur (sudah ada 5 fungsi)
- ✅ Array 1D dengan operasi lengkap (input, baca, copy, swap, tampil)
- ✅ Algoritma Bubble Sort dengan implementasi lengkap
- ⏳ Logika status konsumsi (dalam pengembangan)
- ⏳ Rekomendasi kesehatan (dalam pengembangan)
- ⏳ Fitur mengulang program (dalam pengembangan)

## 📦 Struktur Data

```cpp
string nama;                    // Nama mahasiswa
int konsumsi[7];               // Data konsumsi 7 hari
int konsumsiAsli[7];           // Backup data sebelum sorting
int total;                     // Total konsumsi
float rataRata;                // Rata-rata per hari
```

## 🔧 Fungsi-Fungsi Utama

| No | Fungsi | Status | Deskripsi |
|----|--------|--------|-----------|
| 1 | `inputData()` | ✅ Selesai | Input nama & konsumsi 7 hari dengan validasi |
| 2 | `hitungTotal()` | ✅ Selesai | Menghitung total konsumsi (return int) |
| 3 | `hitungRataRata()` | ✅ Selesai | Menghitung rata-rata (return float) |
| 4 | `bubbleSort()` | ✅ Selesai | Bubble Sort descending (tertinggi ke terendah) |
| 5 | `tampilkanHasil()` | ✅ Selesai | Menampilkan hasil analisis lengkap |
| 6 | `tentukanStatus()` | ⏳ Dalam Pengembangan | Logika Normal/Berlebihan |
| 7 | `rekomendasiKesehatan()` | ⏳ Dalam Pengembangan | Saran kesehatan bertingkat |

## 🚀 Cara Kompilasi & Menjalankan

### **Windows (MinGW/g++)**
```bash
g++ -std=c++17 sistem_konsumsi_kopi.cpp -o sistem_konsumsi_kopi.exe
sistem_konsumsi_kopi.exe
```

### **Linux/Mac**
```bash
g++ -std=c++17 sistem_konsumsi_kopi.cpp -o sistem_konsumsi_kopi
./sistem_konsumsi_kopi
```

### **VS Code (dengan task)**
```bash
Tekan Ctrl+Shift+B → pilih "build and run"
```

## 📖 Alur Program

```
1. Input Nama Mahasiswa           ✅ Berfungsi penuh
2. Input Konsumsi 7 Hari          ✅ Berfungsi penuh (dengan validasi)
3. Hitung Total & Rata-rata       ✅ Berfungsi penuh
4. Bubble Sort (Descending)       ✅ Berfungsi penuh
5. Tampilkan Hasil Analisis       ✅ Berfungsi penuh
6. Tentukan Status                ⏳ Dalam pengembangan
7. Rekomendasi Kesehatan          ⏳ Dalam pengembangan
8. Mengulang Program              ⏳ Dalam pengembangan
```

## 💡 Contoh Penggunaan

### **1. Input Data & Analisis**
```
========================================
  SISTEM ANALISIS KONSUMSI KOPI MAHASISWA
========================================

Masukkan nama mahasiswa: Budi Santoso

Masukkan konsumsi kopi (cangkir) per hari:
Hari ke-1: 2
Hari ke-2: 4
Hari ke-3: 1
Hari ke-4: 5
Hari ke-5: 3
Hari ke-6: 2
Hari ke-7: 3

========================================
          HASIL ANALISIS
========================================
Nama Mahasiswa    : Budi Santoso
Total Konsumsi    : 20 cangkir
Rata-rata/Hari    : 2.86 cangkir
========================================

Konsumsi per hari (terurut tertinggi ke terendah):
1. 5 cangkir
2. 4 cangkir
3. 3 cangkir
4. 3 cangkir
5. 2 cangkir
6. 2 cangkir
7. 1 cangkir

========================================
     FITUR DALAM PENGEMBANGAN
========================================
[ ] Analisis status konsumsi
[ ] Rekomendasi kesehatan
[ ] Fitur mengulang program
========================================

Tekan Enter untuk keluar...
```

### **2. Validasi Error (Edge Case)**
```
Masukkan nama mahasiswa: Andi Wijaya

Masukkan konsumsi kopi (cangkir) per hari:
Hari ke-1: 3
Hari ke-2: -2
Error: Data tidak valid, ulangi input!
Hari ke-2: 4
Hari ke-3: 2
Hari ke-4: 0
Hari ke-5: -5
Error: Data tidak valid, ulangi input!
Hari ke-5: 3
Hari ke-6: 5
Hari ke-7: 1

✓ Input berhasil! Validasi berfungsi dengan baik.
```

### **3. Status & Rekomendasi - Dalam Pengembangan**
```
INFORMASI: Fitur analisis status dan rekomendasi kesehatan 
           sedang dalam tahap pengembangan.

Target minggu depan:
- Penentuan status Normal/Berlebihan
- Rekomendasi kesehatan 3 tingkat
```

## ⚠️ Edge Cases yang Ditangani

| Situasi | Respons Program | Status |
|---------|----------------|---------|
| Input negatif | ❌ ERROR: Data tidak valid, ulangi input! | ✅ Berfungsi |
| Input 0 | ✓ Diterima (valid) | ✅ Berfungsi |
| Input berulang kali negatif | Loop terus sampai input valid | ✅ Berfungsi |
| Nama kosong | Diterima (getline) | ✅ Berfungsi |

## 📊 Algoritma yang Sudah Diimplementasi

### **Bubble Sort** ✅
- **Kompleksitas:** O(n²)
- **Digunakan di:** Fungsi `bubbleSort()` (baris 39-50)
- **Cara Kerja:** Nested loop membandingkan elemen berdekatan dan swap jika salah urutan
- **Fungsi:** Mengurutkan data konsumsi dari tertinggi ke terendah (descending)

### **Validasi Input dengan While Loop** ✅
- **Kompleksitas:** O(n) - worst case jika semua input invalid
- **Digunakan di:** Fungsi `inputData()` (baris 15-24)
- **Cara Kerja:** Loop akan terus meminta input sampai data valid (>= 0)
- **Fungsi:** Mencegah input negatif masuk ke array

## 🔧 Algoritma Dalam Pengembangan

### **Logika Status (If-Else)** ⏳
- **Status:** Akan diimplementasikan minggu depan
- **Target:** Menentukan Normal/Berlebihan berdasarkan threshold
- **Threshold:** rata-rata > 3 cangkir = Berlebihan
- **Kompleksitas:** O(1)

### **Rekomendasi Kesehatan (Nested If)** ⏳
- **Status:** Akan diimplementasikan minggu depan
- **Target:** Saran kesehatan bertingkat (3 kategori)
- **Logika:** Nested if untuk kategori Sangat Berlebihan, Berlebihan, Normal
- **Kompleksitas:** O(1)

### **Fitur Mengulang (Do-While)** ⏳
- **Status:** Akan diimplementasikan minggu depan
- **Target:** Loop untuk analisis berulang tanpa restart program
- **Input:** Y/T untuk lanjut atau berhenti
- **Kompleksitas:** O(1) per iterasi

## 📊 Flowchart Program

![Flowchart Sistem Analisis Konsumsi Kopi](Flowchart/flowchart-konsumsi-kopi.png)

*Flowchart menunjukkan alur kerja sistem dari input hingga output hasil analisis dengan sorting.*

## 📁 File dalam Project

```
PBL-Alprog/
├── Flowchart/
│   └── flowchart-konsumsi-kopi.png    # Diagram alur program (jika ada)
├── sistem_konsumsi_kopi.cpp           # File program utama (70% selesai)
├── sistem_konsumsi_kopi.exe           # File executable hasil compile
└── README.md                          # File ini (overview project)
```

## 🎯 Rencana Penyelesaian

**Minggu Depan (Target 90-100%):**
1. ✅ Implementasi logika status (Normal/Berlebihan)
2. ✅ Implementasi rekomendasi kesehatan bertingkat
3. ✅ Implementasi fitur mengulang program
4. ✅ Testing menyeluruh untuk semua fitur
5. ✅ Finalisasi dokumentasi dan video presentasi

**Kendala yang Dihadapi:**
- Fokus pada fitur inti terlebih dahulu (input, hitung, sort) ✓
- Memastikan validasi input sempurna ✓
- Mempelajari nested loop untuk Bubble Sort ✓
- Tinggal menambahkan logika bisnis (30%)

## 👨‍💻 Informasi Developer

- **Proyek:** PBL - Sistem Analisis Konsumsi Kopi Mahasiswa
- **Bahasa:** C++
- **Standard:** C++17
- **IDE:** VS Code / Code::Blocks / Dev-C++
- **Institusi:** Universitas Negeri Yogyakarta (UNY)

## 📄 Lisensi

Program ini dibuat untuk keperluan pembelajaran PBL (Project Based Learning).

---
