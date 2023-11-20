#include <iostream>

using namespace std;

int main()
{
    // Deklarasikan pointer
    int *ptr = new int;

    // Berikan nilai 5 pada pointer
    *ptr = 5;

    // Cetak isi pointer
    cout << "Nilai pointer: " << *ptr << endl;

    // Cetak alamat pointer
    cout << "Alamat pointer: " << ptr << endl;

    return 0;
}