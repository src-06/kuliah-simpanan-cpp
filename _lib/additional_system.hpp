
#ifdef _WIN32
  #define CLEAR() std::system("cls")
  #define PAUSE() std::system("pause")
#else
  #define CLEAR() std::system("clear")
  #define PAUSE() std::cout << "Tekan tombol enter untuk melanjutkan..."; std::cin.get(); std::cin.ignore();
#endif
