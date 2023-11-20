#include <iostream>
using namespace std;

void luaspersegi(int sisi)
{
    cout << sisi * sisi << endl;
}

int main()
{
    int sisi;
    cout << "Masukkan sisi persegi: ";
    cin >> sisi;
    luaspersegi(sisi);
    return 0;
}