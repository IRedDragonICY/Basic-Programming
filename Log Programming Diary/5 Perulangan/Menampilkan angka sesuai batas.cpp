#include <iostream>
using namespace std;

int main()
{
    // menampilkan batas angka tertentu dengan perulangan 1 tingkat
    cout<<"Masukkan batas angka bawah: ";
    int bawah;
    cin>>bawah;
    cout<<"Masukkan batas angka atas: ";
    int atas;
    cin>>atas;
    for (int i = bawah; i <= atas; i++) {
        cout<<i<<endl;
    }
}