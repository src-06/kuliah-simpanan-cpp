#include <iostream>
#include <limits>

using namespace std;

#ifdef _WIN32
  #define CLEAR() system("cls")
  #define PAUSE() system("pause")
#else
  #define CLEAR() system("clear")
  #define PAUSE() cout << "Tekan tombol enter untuk melanjutkan..."; cin.get(); cin.ignore();
#endif

// Alternatif clear and pause untuk lintas sistem operasi
inline void clear() { cout << "\033[2J\033[H"; }
inline void pause() { cout << "Tekan tombol Enter untuk melanjutkan..."; cin.get(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); }
