#include <iostream>
using namespace std;

int main()
{
    // program perulangan satu tingkat untuk membuat banyak bintang
    cout<<"Masukkan jumlah baris: ";
    int baris;
    cin>>baris;
    for (int i = 0; i < baris; i++) {
        cout<<"*";
    }
}