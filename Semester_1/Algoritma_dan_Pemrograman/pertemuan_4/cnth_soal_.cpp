#include <iostream>

using namespace std;

int main() {
  char nm[20], kode;
  string jns;
  int jml, hrg, ttl, ppn, byr, kem, jbyr;

  cout<<"Masukkan kode [1/2/3]: ";
  cin>>kode;
  cout<<"Jumlah beli: ";
  cin>>jml;
  cout<<"Nama kasir: ";
  cin>>nm;

  if (kode == 1) {
    jns = "PAKET HEMAT";
    hrg = 7500;
  } else if (kode == 2) {
    jns = "PAKET NASI";
    hrg = 10000;
  } else {
    jns = "PAKET SPESIAL";
    hrg = 15000;
  }

  system("cls");

  cout<<"          SEJAHTERA CAFE          "<<endl;
  cout<<"         JL. JUANG NO. 16         "<<endl;
  cout<<"      Telp : 7236574-7236575      "<<endl;
  cout<<"**********************************"<<endl;
  cout<<jns<<endl;
  cout<<jml<<"X\t"<<hrg<<endl;
  cout<<"**********************************"<<endl;

  ttl = hrg * jml;
  ppn = 0.1 * ttl;
  jbyr = ttl + ppn;

  cout<<"Bayar              : Rp. ";
  cin>>byr;

  kem = byr - jbyr;

  cout<<"Uang Kembali : Rp. "<<kem<<endl;
  cout<<"**********************************"<<endl;
  cout<<"Nama Kasir: "<<nm<<endl;
  cout<<"**********************************"<<endl;
  cout<<"   Selamat Menikmati   "<<endl;
  cout<<"      Terimakasih      "<<endl;

  return 0;
}
