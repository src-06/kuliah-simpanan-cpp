#include <iostream>

using namespace std;

int main() {
  // Deklarasi
  string nama;
  int umur;
  char jenis_kelamin;

  // -- Prises input --
  cout<<"Siapakah namamu?"<<endl;
  cout<<"Jawab: ";
  // Meyimpan data ke variable
  getline(cin, nama);

  cout<<"Berapa umurmu?"<<endl;
  cout<<"Jawab: ";
  // Meyimpan data ke variable
  cin>>umur;

  cout<<"Jenis kelamin [L/P]: ";
  // Meyimpan data ke variable
  cin>>jenis_kelamin;

  // -- Proses output --
  cout<<"Salam kenal, "<<nama<<"\nSekarang engkau berusia "<<umur<<"\nDan engkau berjenis kelamin "<<jenis_kelamin<<endl;

  return 0;
}
