#include <iostream>

using namespace std;

int main() {
  string distro[] = {
    "Arch Linux",
    "EndevourOS",
    "NixOS",
    "Guix Linux",
    "Fedora",
    "CentOS",
    "Void Linux",
    "Alma Linux",
    "Artix Linux",
    "Debian",
    "Ubuntu",
    "Archcraft"
  };

  for (int _ = 0; _ < distro->length(); _++)
    cout << _+1. << " " << distro[_] << endl;

  return 0;
}
