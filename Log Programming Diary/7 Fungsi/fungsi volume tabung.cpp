#include <iostream>
using namespace std;

void volumetabung(int r, int t)
{
    cout << 3.14 * r * r * t << endl;
}

int main()
{
    int r, t;
    cout << "Masukkan jari-jari tabung: ";
    cin >> r;
    cout << "Masukkan tinggi tabung: ";
    cin >> t;
    volumetabung(r, t);
    return 0;
}