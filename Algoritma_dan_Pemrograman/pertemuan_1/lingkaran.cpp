#include <iostream>

using namespace std;

int main() {
  float luas, phi=3.14;
  int diameter,radius;
  cout<<"Masukan Diameter : ";
  cin>>diameter;

  radius=diameter/2;
  luas=phi*radius*radius;

  cout<<"Luas Lingkaran = "<<luas<<endl;

  return 0;
}