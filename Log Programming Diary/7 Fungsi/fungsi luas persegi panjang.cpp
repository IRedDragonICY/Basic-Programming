#include <iostream>
using namespace std;

void luaspersegipanjang(int panjang, int lebar)
{
    cout << panjang * lebar << endl;
}

int main()
{
    int panjang, lebar;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    luaspersegipanjang(panjang, lebar);
    return 0;
}