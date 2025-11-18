#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int loading() {
  char spinner[] = {'|', '/', '-', '\\'};

  for (int i = 0; i < 20; i++) {
    cout << "\rLoading " << spinner[i % 4];
    cout.flush();
    this_thread::sleep_for(chrono::milliseconds(150));
  }

  cout << "\rDone!     " << endl;
}
