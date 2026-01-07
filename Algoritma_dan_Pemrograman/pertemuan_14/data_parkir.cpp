#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Parkir {
    string no_plat;
    string jenis_kendaraan;
    int biaya;
};

int main() {
    vector<Parkir> p;

    int n, kode_kendaraan, lama;
    cout << "Masukkan jumlah kendaraan yang akan diinput: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Parkir parkir;
        cout << "\nMasukkan nomor plat kendaraan ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, parkir.no_plat);
        cout << "[1] Motor\n[2] Mobil\n[3] Truk\nMasukkan jenis kendaraan ke-" << i + 1 << ": ";
        cin >> kode_kendaraan;
        cout << "Masukkan lama parkir ke-" << i + 1 << ": ";
        cin >> lama;

        if (kode_kendaraan == 1) {
            parkir.jenis_kendaraan = "Motor";
            if (lama > 1) parkir.biaya = 2000 + 1000*(lama - 1);
            else parkir.biaya = 2000;
        } else if (kode_kendaraan == 2) {
            parkir.jenis_kendaraan = "Mobil";
            if (lama > 1) parkir.biaya = 5000 + 3000*(lama - 1);
            else parkir.biaya = 5000;
        } else if (kode_kendaraan == 3) {
            parkir.jenis_kendaraan = "Truk";
            if (lama > 1) parkir.biaya = 10000 + 5000*(lama - 1);
            else parkir.biaya = 10000;
        } else {
            parkir.jenis_kendaraan = "Tidak diketahui";
            parkir.biaya = 0;
        }

        p.push_back(parkir);
    }

    cout << "\n\nData Parkir:\n";
    cout << left << setw(4) << "No"
        << setw(14) << "Nomor Plat"
        << setw(17) << "Jenis Kendaraan"
        << setw(15) << "Lama Parkir"
        << setw(15) << "Biaya"
        << endl;

    int total = 0;
    for (int i = 0; i < p.size(); i++) {
        cout << left << setw(4) << i + 1
            << setw(14) << p[i].no_plat
            << setw(17) << p[i].jenis_kendaraan
            << setw(15) << lama
            << setw(15) << p[i].biaya
            << endl;

        total += p[i].biaya;
    }

    cout << "\nTotal biaya parkir: " << total << endl;

    return 0;
}
