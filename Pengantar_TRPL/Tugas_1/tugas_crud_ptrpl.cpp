/**
 * Saya menggunakan MinGW-W64 compiler binaries v15.2.0-rt_v13-rev0 untuk compiler c++
 * https://github.com/niXman/mingw-builds-binaries/releases/tag/15.2.0-rt_v13-rev0
 * Atau kalau memakai DevCPP saya rekomendasikan pakai yang sudah saya modifikasi agar tidak error
 * Link: https://sfile.mobi/bdX3M52Qwg7
 */
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/**
 * JSON for Modern C++
 * https://github.com/nlohmann/json
 * Saya memakai yang release v3.12.0
 * https://github.com/nlohmann/json/releases/download/v3.12.0/json.hpp
 */
#include "./nlohmann/json.hpp"
using json = nlohmann::json;

// Class untuk base data mahasiswa.
class Mahasiswa {
	public:
		int id;
		string nama;
		string umur;
		string no_telp;
		string prodi;
		string kelas;
		string alamat;
		// Untuk tampil nama data
		string nm_id      = "\033[0;96mID         : ";
		string nm_nama    = "\033[0;96mNama       : ";
		string nm_umur    = "\033[0;96mUmur       : ";
		string nm_no_telp = "\033[0;96mNo Telepon : ";
		string nm_prodi   = "\033[0;96mProdi      : ";
		string nm_kelas   = "\033[0;96mKelas      : ";
		string nm_alamat  = "\033[0;96mAlamat     : ";

	Mahasiswa() = default;
	Mahasiswa(int id, string nama, string umur, string no_telp, string prodi, string kelas, string alamat)
		: id(id), nama(nama), umur(umur), no_telp(no_telp), prodi(prodi), kelas(kelas), alamat(alamat) {}

	// Convert ke JSON
	json to_json() const {
		return {
			{"id", id},
			{"nama", nama},
			{"umur", umur},
			{"no_telp", no_telp},
			{"prodi", prodi},
			{"kelas", kelas},
			{"alamat", alamat}
		};
	}

	// Muat dari JSON
	static Mahasiswa from_json(const json &data) {
		return Mahasiswa(
			data["id"],
			data["nama"],
			data["umur"],
			data["no_telp"],
			data["prodi"],
			data["kelas"],
			data["alamat"]
		);
	}

	// Tampilkan data ke layar
	void tampilkan() const {
		cout << nm_id << id << endl;
		cout << nm_nama << nama << endl;
		cout << nm_umur << umur << endl;
		cout << nm_no_telp << no_telp << endl;
		cout << nm_prodi << prodi << endl;
		cout << nm_kelas << kelas << endl;
		cout << nm_alamat << alamat << endl;
		cout << "\033[0;93m---------------------------------------\033[0m\n";
	}
};

// Class untuk fungsi tambah, tampil, ubah, dan hapus data mahasiswa.
class MahasiswaCRUDSystem {
	private:
    vector<Mahasiswa> dataMhs;
    int idCounter = 1;
    string filePath;

	public:
    MahasiswaCRUDSystem(const string &path) : filePath(path) {
			muatDariFile();
    }

	// Save ke file "*.json"
	void simpanKeFile() {
		json data;

		for (auto &mhs : dataMhs)
			data.push_back(mhs.to_json());

		ofstream file(filePath);
		file << data.dump(4);
		file.close();
	}

	// Load dari file "*.json"
	void muatDariFile() {
		ifstream file(filePath);
		if (!file.is_open()) return;

		json data;
		file >> data;
		file.close();

		dataMhs.clear();

		for (auto &item : data) {
			Mahasiswa mhs = Mahasiswa::from_json(item);
			dataMhs.push_back(mhs);

			if (mhs.id >= idCounter)
				idCounter = mhs.id + 1;
		}
	}

	// Create data mahasiswa
	void tambahData() {
		cout << "\n\033[0;93m===== MASUKAN DATA MAHASISWA BARU =====\033[0m\n";

		Mahasiswa mhs;
		mhs.id = idCounter++;

		cout << mhs.nm_nama;
		cin.ignore();
		getline(cin, mhs.nama);
		cout << mhs.nm_umur;
		cin >> mhs.umur;
		cin.ignore();
		cout << mhs.nm_no_telp;
		getline(cin, mhs.no_telp);
		cout << mhs.nm_prodi;
		getline(cin, mhs.prodi);
		cout << mhs.nm_kelas;
		getline(cin, mhs.kelas);
		cout << mhs.nm_alamat;
		getline(cin, mhs.alamat);

		dataMhs.push_back(mhs);
		simpanKeFile();

		system("clear");
		cout << "\n\033[0;93m=== DATA MAHASISWA YANG DITAMBAHKAN ===\033[0m\n";
		mhs.tampilkan();
	}

	// Read data mahasiswa
	void tampilData() {
		cout << "\n\033[0;93m=========== DATA MAHASISWA ============\033[0m\n";

		if (dataMhs.empty()) {
			system("clear");
			cout << "\033[0;31mBelum ada data.\033[0m\n";
			return;
		}

		for (auto &mhs : dataMhs)
			mhs.tampilkan();
	}

	// Update data mahasiswa
	void ubahData() {
		tampilData();

		if (!dataMhs.empty()) {
			int id;
			cout << "\033[0;93mMasukkan ID yang ingin diubah: ";
			cin >> id;

			system("clear");

			for (auto &mhs : dataMhs) {
				if (mhs.id == id) {
					cout << "\n\033[0;93m========= UBAH DATA MAHASISWA =========\n";
					cout << mhs.nm_nama;
					cin.ignore();
					getline(cin, mhs.nama);
					cout << mhs.nm_umur;
					cin >> mhs.umur;
					cin.ignore();
					cout << mhs.nm_no_telp;
					getline(cin, mhs.no_telp);
					cout << mhs.nm_prodi;
					getline(cin, mhs.prodi);
					cout << mhs.nm_kelas;
					getline(cin, mhs.kelas);
					cout << mhs.nm_alamat;
					getline(cin, mhs.alamat);

					simpanKeFile();

					system("clear");
					cout << "\033[0;92mData berhasil diubah!\033[0m\n";
					return;
				}
			}

			system("clear");
			cout << "\033[0;31mData tidak ditemukan.\033[0m\n";
		}
	}

	// Delete data mahasiswa
	void hapusData() {
		tampilData();

		if (!dataMhs.empty()) {
			int id;
			cout << "\033[0;93mMasukkan ID yang ingin dihapus: ";
			cin >> id;

			system("clear");

			for (int i = 0; i < dataMhs.size(); ++i) {
				if (dataMhs[i].id == id) {
					dataMhs.erase(dataMhs.begin() + i);
					simpanKeFile();
					cout << "\033[0;92mData berhasil dihapus!\033[0m\n";
					return;
				}
			}

			system("clear");
			cout << "\033[0;31mData tidak ditemukan.\033[0m\n";
		}
	}
};

// Alternative untuk system("pause")
void pause() {
	cout << "Tekan tombol apa saja untuk melanjutkan...";
	cin.ignore();
	cin.get();
}

int main() {
	MahasiswaCRUDSystem mhsCRUD("data_mahasiswa.json");

	int pilih;

	do {
		system("clear");

		cout << "\n\033[0;93m====== PILIH MENU CRUD MAHASISWA ======\033[0m\n";
		cout << "\033[0;93m1. \033[0;32mTambah Data\033[0m\n";
		cout << "\033[0;93m2. \033[0;36mTampilkan Data\033[0m\n";
		cout << "\033[0;93m3. \033[0;34mUbah Data\033[0m\n";
		cout << "\033[0;93m4. \033[0;31mHapus Data\033[0m\n";
		cout << "\033[0;93m5. \033[0;35mKeluar Program\033[0m\n";
		cout << "\033[0;93mPilih menu: ";
		cin >> pilih;

		switch (pilih) {
			case 1:
				system("clear");
				mhsCRUD.tambahData();
				pause();
			break;
			case 2:
				system("clear");
				mhsCRUD.tampilData();
				pause();
			break;
			case 3:
				system("clear");
				mhsCRUD.ubahData();
				pause();
			break;
			case 4:
				system("clear");
				mhsCRUD.hapusData();
				pause();
			break;
			case 5:
				system("clear");
				cout << "\033[0;35mKeluar dari program...\033[0m\n";
			break;
			default:
				system("clear");
				cout << "\033[0;31mPilihan tidak sesuai!\033[0m\n";
		}
	} while (pilih != 5);

	return 0;
}
