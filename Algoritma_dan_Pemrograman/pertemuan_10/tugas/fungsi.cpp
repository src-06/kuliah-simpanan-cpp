#include <iostream>

using namespace std;

void garis() {
  cout << "-------------------------------------------------------------------------" << endl;
}

int menghitungVolumeKerucut(double jari_jari, double tinggi) {
  const double pi = 3.14159265358979323846;
  return (1.0 / 3.0) * pi * jari_jari * jari_jari * tinggi;
}

int main() {
  double jari_jari, tinggi, volume;

  garis();
  cout << "                   Program Menghitung Volume Kerucut" << endl;
  garis();

  cout << "Masukkan jari-jarinya (cm) : ";
  cin >> jari_jari;

  cout << "Masukkan tingginya (cm)    : ";
  cin >> tinggi;

  volume = menghitungVolumeKerucut(jari_jari, tinggi);

  cout << "Volume kerucut dengan jari-jari " << jari_jari << "cm dan tinggi " << tinggi << "cm adalah: " << volume << "cm" << endl;

  garis();

  return 0;
}
