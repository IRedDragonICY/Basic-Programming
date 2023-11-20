#include <iostream>
using namespace std;

int main()
{
    // perulangan bertingkat untuk membuat deret angka
    cout<<"Masukkan jumlah baris: ";
    int baris;
    cin>>baris;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}