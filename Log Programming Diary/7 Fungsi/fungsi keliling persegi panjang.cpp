#include <iostream>
using namespace std;

void kelilingpersegipanjang(int panjang, int lebar)
{
    cout << 2 * (panjang + lebar) << endl;
}

int main()
{
    int panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    kelilingpersegipanjang(panjang, lebar);
    return 0;
}