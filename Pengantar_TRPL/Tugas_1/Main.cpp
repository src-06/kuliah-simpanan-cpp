#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    int id;
    string nama;
    string no_telepon;
    string prodi;
    string kelas;
    string alamat;
};

vector<Mahasiswa> dataMhs;
int idCounter = 1;

// Simpan ke file
void simpanKeFile() {
    ofstream file("data_mahasiswa.txt");
    for (auto &mhs : dataMhs) {
        file << mhs.id << ";" 
             << mhs.nama << ";" 
             << mhs.no_telepon << ";" 
             << mhs.prodi << ";" 
             << mhs.kelas << ";" 
             << mhs.alamat << "\n";
    }
    file.close();
}

// Muat dari file
void muatDariFile() {
    ifstream file("data_mahasiswa.txt");
    if (!file.is_open()) return;

    dataMhs.clear();
    string line;
    while (getline(file, line)) {
        Mahasiswa mhs;
        size_t pos = 0;
        vector<string> bagian;
        while ((pos = line.find(';')) != string::npos) {
            bagian.push_back(line.substr(0, pos));
            line.erase(0, pos + 1);
        }
        bagian.push_back(line);

        if (bagian.size() == 6) {
            mhs.id = stoi(bagian[0]);
            mhs.nama = bagian[1];
            mhs.no_telepon = bagian[2];
            mhs.prodi = bagian[3];
            mhs.kelas = bagian[4];
            mhs.alamat = bagian[5];
            dataMhs.push_back(mhs);
            if (mhs.id >= idCounter) idCounter = mhs.id + 1;
        }
    }
    file.close();
}

// CREATE
void tambahData() {
    Mahasiswa mhs;
    mhs.id = idCounter++;
    cout << "Masukkan nama: ";
    cin.ignore();
    getline(cin, mhs.nama);
    cout << "Masukkan no. telepon: ";
    getline(cin, mhs.no_telepon);
    cout << "Masukkan prodi: ";
    getline(cin, mhs.prodi);
    cout << "Masukkan kelas: ";
    getline(cin, mhs.kelas);
    cout << "Masukkan alamat: ";
    getline(cin, mhs.alamat);

    dataMhs.push_back(mhs);
    simpanKeFile();
    cout << "Data berhasil ditambahkan!\n";
}

// READ
void tampilData() {
    cout << "\n=== Data Mahasiswa ===\n";
    if (dataMhs.empty()) {
        cout << "Belum ada data.\n";
        return;
    }
    for (auto &mhs : dataMhs) {
        cout << "ID: " << mhs.id << endl;
        cout << "Nama: " << mhs.nama << endl;
        cout << "No Telepon: " << mhs.no_telepon << endl;
        cout << "Prodi: " << mhs.prodi << endl;
        cout << "Kelas: " << mhs.kelas << endl;
        cout << "Alamat: " << mhs.alamat << endl;
        cout << "-----------------------------\n";
    }
}

// UPDATE
void ubahData() {
    int id;
    cout << "Masukkan ID yang ingin diubah: ";
    cin >> id;

    for (auto &mhs : dataMhs) {
        if (mhs.id == id) {
            cout << "Masukkan nama baru: ";
            cin.ignore();
            getline(cin, mhs.nama);
            cout << "Masukkan no telepon baru: ";
            getline(cin, mhs.no_telepon);
            cout << "Masukkan prodi baru: ";
            getline(cin, mhs.prodi);
            cout << "Masukkan kelas baru: ";
            getline(cin, mhs.kelas);
            cout << "Masukkan alamat baru: ";
            getline(cin, mhs.alamat);

            simpanKeFile();
            cout << "Data berhasil diubah!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan.\n";
}

// DELETE
void hapusData() {
    int id;
    cout << "Masukkan ID yang ingin dihapus: ";
    cin >> id;

    for (int i = 0; i < dataMhs.size(); ++i) {
        if (dataMhs[i].id == id) {
            dataMhs.erase(dataMhs.begin() + i);
            simpanKeFile();
            cout << "Data berhasil dihapus!\n";
            return;
        }
    }
    cout << "Data tidak ditemukan.\n";
}

// MENU UTAMA
int main() {
		muatDariFile();
		int pilih;
		do {
				cout << "\n=== MENU CRUD MAHASISWA (Lengkap) ===\n";
				cout << "1. Tambah Data\n";
				cout << "2. Tampilkan Data\n";
				cout << "3. Ubah Data\n";
				cout << "4. Hapus Data\n";
				cout << "5. Keluar\n";
				cout << "Pilih menu: ";
				cin >> pilih;

				switch (pilih) {
						case 1: tambahData(); break;
						case 2: tampilData(); break;
						case 3: ubahData(); break;
						case 4: hapusData(); break;
						case 5: cout << "Keluar dari program.\n"; break;
						default: cout << "Pilihan tidak valid!\n";
				}
		} while (pilih != 5);

    return 0;
}
