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
    
// Fungsi menambahkan kegiatan
void tambahKegiatan() {
    tampilkanJudul("TAMBAH KEGIATAN");

    if (jumlahKegiatan >= MAX_KEGIATAN) {
        cout << "Kapasitas kegiatan sudah penuh!" << endl;
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nama Kegiatan   : ";
    getline(cin, namaKegiatan[jumlahKegiatan]);

    cout << "Waktu Kegiatan  : ";
    getline(cin, waktuKegiatan[jumlahKegiatan]);

    cout << "Hari            : ";
    getline(cin, HariKegiatan[jumlahKegiatan]);

    statusKegiatan[jumlahKegiatan] = 0;

    jumlahKegiatan++;

    cout << "\nKegiatan berhasil ditambahkan!" << endl;
}
}
// Fungsi melihat daftar kegiatan
void lihatKegiatan() {
    tampilkanJudul("DAFTAR KEGIATAN");

    if (jumlahKegiatan == 0) {
        cout << "Belum ada kegiatan yang ditambahkan." << endl;
        return;
    }

    for (int i = 0; i < jumlahKegiatan; i++) {
        cout << "\nKegiatan ke-" << i + 1 << endl;
        cout << "Nama       : " << namaKegiatan[i] << endl;
        cout << "Waktu      : " << waktuKegiatan[i] << endl;
        cout << "Hari       : " << HariKegiatan[i] << endl;

        if (statusKegiatan[i] == 0) {
            cout << "Status     : Belum Selesai" << endl;
        }
        else {
            cout << "Status     : Selesai" << endl;
        }

        cout << "------------------------------------------" << endl;
    }
}

// Fungsi menghitung jumlah kegiatan
void cekJumlahKegiatan() {
    tampilkanJudul("JUMLAH KEGIATAN");

    int selesai = 0;
    int belumSelesai = 0;

    for (int i = 0; i < jumlahKegiatan; i++) {
        if (statusKegiatan[i] == 1) {
            selesai++;
        }
        else {
            belumSelesai++;
        }
    }

    cout << "Total Kegiatan       : " << jumlahKegiatan << endl;
    cout << "Kegiatan Selesai     : " << selesai << endl;
    cout << "Belum Selesai        : " << belumSelesai << endl;
}
// Program utama
int main() {
    int pilihan;

    tampilkanJudul("DAILY ACTIVITY PLANNER - C++");

    cout << "Selamat datang di Daily Activity Planner!" << endl;
    cout << "Kelola kegiatan harianmu dengan lebih teratur.\n";

    while (true) {
        tampilkanMenu();
        cin >> pilihan;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInput harus berupa angka!" << endl;
            continue;
        }

        if (pilihan == 1) {
            tambahKegiatan();
        }
        else if (pilihan == 2) {
            lihatKegiatan();
        }
        else if (pilihan == 3) {
            cekJumlahKegiatan();
        }
        else if (pilihan == 4) {
            updateStatus();
        }
        else if (pilihan == 5) {
            hapusKegiatan();
        }
        else if (pilihan == 6) {
            tampilkanJudul("TERIMA KASIH");
            cout << "Program Daily Activity Planner ditutup." << endl;
            cout << "Semoga harimu lebih produktif!" << endl;
            break;
        }
        else {
            cout << "\nPilihan tidak tersedia. Silakan pilih menu 1-6." << endl;
        }
    }

    return 0;
}
