#include <iostream>

using namespace std;

int main() {
  string nama_merek, tipe_merek;
  int uangByr, uangKbl, hargaBeli, jmlBeli, ttlByr, hrgHp, ttlPPN;
  const float ppn = 0.1;

  cout<<"Nama hp: ";
  cin>>nama_merek;
  cout<<"Tipe hp: ";
  cin>>tipe_merek;
  cout<<"Harga hp: ";
  cin>>hargaBeli;
  cout<<"Jumlah hp: ";
  cin>>jmlBeli;

  hrgHp = hargaBeli * jmlBeli;
  ttlPPN = hrgHp * ppn;
  ttlByr = hrgHp + ttlPPN;

  cout<<"\nHarga hanphone + PPN "<<nama_merek<<" "<<tipe_merek<<"adalah "<<ttlByr<<endl;
  cout<<"Bayar disini: ";
  cin>>uangByr;
  uangKbl = uangByr - ttlByr;
  cout<<"Sisa uang"<<uangKbl<<endl;

  return 0;
}