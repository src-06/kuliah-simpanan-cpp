#include <cctype>
#include <iostream>
#include <string>

using namespace std;

#ifdef _WIN32
    #define CLEAR system("cls");
#else
    #define CLEAR system("clear");
#endif

void garis() {
    cout << "----------------------------------------------------" << endl;
}

void judul() {
    cout << "              Penerimaan Mahasiswa Baru" << endl;
    cout << "                   Akademi FREEDOM" << endl;
    garis();
}

struct Kampus {
    string jurusan;
    string waktu_pagi;
    string waktu_malam;
    int biaya_pagi;
    int biaya_malam;
    int biaya_pendaftaran;
    int biaya_gedung;
};

struct Mahasiswa {
  string nama;
  string jurusan;
  string kode_jurusan;
  string waktu;
  char kode_waktu;
  int biaya_kuliah;
  int total_biaya;
} m;

int main() {
    Kampus k[3] = {
        { "Manajemen Informatika", "Pagi", "Malam", 900000, 1200000, 100000, 1500000 },
        { "Teknik Komputer", "Pagi", "Malam", 1200000, 1500000 },
        { "Komputerisasi Akuntansi", "Pagi", "Malam", 1000000, 1300000 }
    };

    ulang:
    judul();

    cout << "Nama Calon Mahasiswa       : ";
    getline(cin, m.nama);

    cout << "\nJurusan\n[MI] " + k[0].jurusan + "\n[TK] " + k[1].jurusan + "\n[KA] " + k[2].jurusan << endl;
    cout << "Pilih Kode Jurusan         : ";
    getline(cin, m.kode_jurusan);

    cout << "\nWaktu Kuliah\n[P] Pagi\n[M] Malam\n";
    cout << "Pilih Kode Waktu Kuliah    : ";
    cin >> m.kode_waktu;

    if (m.kode_jurusan == "MI" || m.kode_jurusan == "mi") {
        m.jurusan = k[0].jurusan;

        if (toupper(m.kode_waktu) == 'P') {
            m.waktu = k[0].waktu_pagi;
            m.biaya_kuliah = k[0].biaya_pagi;
        } else if (toupper(m.kode_waktu) == 'M') {
            m.waktu = k[0].waktu_malam;
            m.biaya_kuliah = k[0].biaya_malam;
        }
    } else if (m.kode_jurusan == "TK" || m.kode_jurusan == "tk") {
        m.jurusan = k[1].jurusan;

        if (toupper(m.kode_waktu) == 'P') {
            m.waktu = k[1].waktu_pagi;
            m.biaya_kuliah = k[1].biaya_pagi;
        } else if (toupper(m.kode_waktu) == 'M') {
            m.waktu = k[1].waktu_malam;
            m.biaya_kuliah = k[1].biaya_malam;
        }
    } else if (m.kode_jurusan == "KA" || m.kode_jurusan == "ka") {
        m.jurusan = k[2].jurusan;

        if (toupper(m.kode_waktu) == 'P') {
            m.waktu = k[2].waktu_pagi;
            m.biaya_kuliah = k[2].biaya_pagi;
        } else if (toupper(m.kode_waktu) == 'M') {
            m.waktu = k[2].waktu_malam;
            m.biaya_kuliah = k[2].biaya_malam;
        }
    }

    // CLEAR;
    judul();

    cout << "Nama Calon Mahasiswa       : " << m.nama << endl;
    cout << "Jurusan                    : " << m.jurusan << endl;
    cout << "Waktu Kuliah               : " << m.waktu << endl;
    cout << "Biaya Pendaftaran          : Rp." << k[0].biaya_pendaftaran << endl;
    cout << "Biaya Kuliah               : Rp." << m.biaya_kuliah << endl;
    cout << "Biaya Gedung               : Rp." << k[0].biaya_gedung << endl;

    garis();

    m.total_biaya = k[0].biaya_pendaftaran + m.biaya_kuliah + k[0].biaya_gedung;
    cout << "Total Biaya                : Rp. " << m.total_biaya << endl;

    garis();

    cout << "\n\nApakah Anda ingin mengulang? (Y/N): ";
    char ulang; cin >> ulang;
    if (toupper(ulang) == 'Y') {
        CLEAR;
        cin.ignore();
        goto ulang;
    }

    return 0;
}
