#include <iostream>

using namespace std;

void cnth_soal() {
  double tobel, pot, jumbay;

  cout<<"Total Pembelian Rp. ";
  cin>>tobel;

  if (tobel >= 50000)
    pot = 0.5 * tobel;
  else
    pot = 0.2 * tobel;

  cout<<"Besarnya Potongan Rp. "<<pot<<endl;

  jumbay = tobel - pot;
  cout<<"Jumlah yang harus dibayarkan Rp. "<<jumbay<<endl;
}
