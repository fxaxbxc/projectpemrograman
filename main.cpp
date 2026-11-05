#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX_KEGIATAN = 100;

string namaKegiatan[MAX_KEGIATAN];
string waktuKegiatan[MAX_KEGIATAN];
string HariKegiatan[MAX_KEGIATAN];
int statusKegiatan[MAX_KEGIATAN];

int jumlahKegiatan = 0;

// Fungsi menampilkan judul
void tampilkanJudul(string judul) {
    cout << "\n==========================================" << endl;
    cout << "  " << judul << endl;
    cout << "==========================================" << endl;
}

// Fungsi menampilkan menu utama
void tampilkanMenu() {
    tampilkanJudul("DAILY ACTIVITY PLANNER");

    cout << "1. Tambah Kegiatan" << endl;
    cout << "2. Lihat Daftar Kegiatan" << endl;
    cout << "3. Cek Jumlah Kegiatan" << endl;
    cout << "4. Update Status Kegiatan" << endl;
    cout << "5. Hapus Kegiatan" << endl;
    cout << "6. Keluar" << endl;

    cout << "==========================================" << endl;
    cout << "Masukkan pilihan (1-6): ";
}