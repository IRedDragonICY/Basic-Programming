#include <iostream>
using namespace std;

void tambah(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    int a, b;
    cout<<"Masukkan angka pertama: ";
    cin >> a;
    cout<<"Masukkan angka kedua: ";
    cin >> b;
    tambah(a, b);
    return 0;
}