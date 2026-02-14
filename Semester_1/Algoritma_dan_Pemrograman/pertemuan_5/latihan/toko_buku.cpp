#include <iostream>

using namespace std;

int main() {
  const float ppn = 0.1, pot = 0.1;
  int kode_buku, jml_beli, hrg_buku;
  float ttl_byr, ttl_ppn, ttl_pot;
  string nm_buku, bns_buku;
  char input_lagi;

  while (true) {
    cout << "\033[0;32m           === TOKO BUKU RAJA MULIA ===\n";
    cout << "\033[0;32m               Jl. Kerajaan No. 16 \n";
    cout << "\033[0;33m----------------------------------------------------\n";
    cout << "\033[0;33mMasukan Kode Buku [1|2|3]: ";
    cin >> kode_buku;
    cout << "\033[0;33mJumlah pembelian buku    : ";
    cin >> jml_beli;
    cout << "\033[0;33m\n----------------------------------------------------\n";

    system("cls");

    switch (kode_buku) {
      case 1:
        nm_buku = "\033[0;32mSukses Belajar Borland C++";
        hrg_buku = 50000;
        break;
      case 2:
        nm_buku = "\033[0;36mKunci Pribadi Yang Sukses";
        hrg_buku = 35000;
        break;
      case 3:
        nm_buku = "\033[0;34mMencari Mutiara Di Dasar Hati";
        hrg_buku = 45000;
        break;

      default:
        nm_buku = "\033[0;31mBuku Tidak Ada!!!!";
        hrg_buku = 0;
        break;
    }

    ttl_byr = hrg_buku * jml_beli;

    if (jml_beli >= 5) {
      if (kode_buku <= 3) {
        ttl_pot = ttl_byr * pot;
        ttl_byr = ttl_byr - ttl_pot;
        bns_buku = "\033[0;93mNote Book";
      } else {
        ttl_pot = 0;
        bns_buku = "\033[0;31mTidak dapat bonus";
      }
    } else {
      ttl_pot = 0;
      bns_buku = "\033[0;31mTidak dapat bonus";
    }

    ttl_ppn = ttl_byr * ppn;
    ttl_byr = ttl_byr - ttl_ppn;

    cout << "\033[0;32m           === TOKO BUKU RAJA MULIA ===\n";
    cout << "\033[0;32m               Jl. Keadilan No. 16\n";
    cout << "\033[0;33m----------------------------------------------------\n";
    cout << "\033[0;36mNama Buku   : " << nm_buku << endl;
    cout << "\033[0;36mHarga Buku  : \033[0;35mRp. " << hrg_buku << endl;
    cout << "\033[0;36mPotongan    : \033[0;34mRp. " << ttl_pot << endl;
    cout << "\033[0;36mJumlah Buku : \033[0;34m" << jml_beli << endl;
    cout << "\033[0;36mBonus       : " << bns_buku << endl;
    cout << "\033[0;36mPPN         : \033[0;91mRp. " << ttl_ppn << endl;
    cout << "\033[0;36mTotal Bayar : \033[0;92mRp. " << ttl_byr << endl;
    cout << "\033[0;33m----------------------------------------------------\n";
    cout << "\033[0;32m               === Terimakasih ===\n\n";

    input_data:
    cout << "\033[0mIngin input data lagi (y/t): ";
    cin >> input_lagi;

    if (toupper(input_lagi) == 'T') {
      cout << "\033[0;32mTerimakasih sudah berbelanja ditoko kami\033[0m" << endl;
      break;
    } else if (!(toupper(input_lagi) == 'Y')) {
      cout << "\033[0;31mInput salah harus (y/t|Y/T)\033[0m" << endl;
      system("pause");
      goto input_data;
    }

    system("cls");
  }

  return 0;
}
