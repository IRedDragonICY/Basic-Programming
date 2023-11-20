#include <iostream>
using namespace std;

void kelilingpersegi(int sisi)
{
    cout << 4 * sisi << endl;
}

int main()
{
    int sisi;
    cout << "Masukkan sisi persegi: ";
    cin >> sisi;
    kelilingpersegi(sisi);
    return 0;
}