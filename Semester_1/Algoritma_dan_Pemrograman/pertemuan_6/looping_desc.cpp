#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float r = 1;
  int n, c;
  cout << "\e[31mMasukan n = ";
  cin >> n;

  int i = n, j;

  do {
    j = 1;
    cout << "!" << i << " = ";
    do {
      cout << j;
      if (j < i) cout << " x ";
      c = j;
      r *= c;
      j++;
    } while (j <= i);
    cout << fixed << setprecision(0) << " = " << r;
    if (c <= j) r = 1;
    cout << endl;
    i--;
  } while (i >= 1);

  return 0;
}
