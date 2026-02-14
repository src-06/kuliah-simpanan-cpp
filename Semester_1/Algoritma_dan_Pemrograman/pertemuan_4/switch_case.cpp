#include <iostream>

using namespace std;

void switch_case() {
  char grade;
  cout<<"Inputkan grade: ";
  cin>>grade;
  switch (toupper(grade))
  {
    case 'A':
      cout<<"Luar Biasa"<<endl;
      break;
    case 'B':
    case 'C':
      cout<<"Bagus!"<<endl;
      break;
    case 'D':
      cout<<"Anda Lulus"<<endl;
      break;
    case 'E':
    case 'F':
      cout<<"Grade remidi"<<endl;
      break;

    default:
      cout<<"Grade salah!"<<endl;
      break;
  }
}