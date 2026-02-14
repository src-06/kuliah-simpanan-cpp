#include <iostream>

using namespace std;

int main() {
  int nilai[5];
  nilai[0] = 6;
  nilai[4] = -2;

  // sama dengan nilai[1] = 2
  nilai[3 / 2] = 2;
  nilai[2] = nilai[0];

  // sama dengan nilai[3] = 2 + 6
  nilai[3] = nilai[1] + nilai[2];
  cout <<"Elemen array nilai adalah sebagai berikut:"<< endl;
  cout << nilai[0] << " " << nilai[1] << " " << nilai[2] << " " << nilai[3] << " " << nilai[4];

  return 0;
}
