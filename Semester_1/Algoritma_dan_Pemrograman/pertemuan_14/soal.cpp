#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct TOKO {
    string nama;
    string barang;
    int harga;
};

void garis() {
    cout << "------------------------------------------------------------" << endl;
}

int main() {
    TOKO toko[5] = {
        {"Joko", "Buku", 10000},
        {"Firya", "Pensil", 5000},
        {"Delar", "Pulpen", 7000},
        {"Sulai", "Penghapus", 3000},
        {"Kerta", "Penggaris", 4000}
    };

    cout << "                 TOKO SEJAHTERA NUSANTARA\n";
    garis();

    cout << left
        << setw(4) << "No"
        << setw(15) << "Nama Pembeli"
        << setw(20) << "Barang"
        << setw(20) << "Harga Barang"
        << endl;

    garis();

    for (int i = 0; i < 5; i++) {
        cout << setw(4) << i + 1
            << setw(15) << toko[i].nama
            << setw(20) << toko[i].barang
            << setw(20) << toko[i].harga
            << endl;
    }

    garis();
    return 0;
}
