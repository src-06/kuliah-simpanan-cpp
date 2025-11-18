#include <iostream>

#ifdef _WIN32
  #define CLEAR() std::system("cls")
  #define PAUSE() std::system("pause")
#else
  #define CLEAR() std::system("clear")
  #define PAUSE() std::system("read -n 1 -s -p \"Press any key to continue...\"")
#endif
