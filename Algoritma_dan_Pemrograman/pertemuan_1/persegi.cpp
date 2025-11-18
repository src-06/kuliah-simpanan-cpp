#include <iostream>

using namespace std;

int main() {
  float luas;
  int panjang,lebar;
  cout<<"Masukan Panjang : ";
  cin>>panjang;
  cout<<"Masukan Lebar : ";
  cin>>lebar;

  luas = panjang * lebar;

  cout<<"Luas Persegi = "<<luas<<endl;

  return 0;
}