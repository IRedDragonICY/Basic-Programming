#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ofstream file_out("myfile.txt");
  cout << "Masukkan angka \n>";
  int x;
  cin>>x;
  file_out << x << endl;
  return 0;
}
