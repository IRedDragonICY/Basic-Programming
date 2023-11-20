#include <iostream>
using namespace std;

void volumebalok(int p, int l, int t)
{
    cout << p * l * t << endl;
}

int main()
{
    int p, l, t;
    cout << "Masukkan panjang balok: ";
    cin >> p;
    cout << "Masukkan lebar balok: ";
    cin >> l;
    cout << "Masukkan tinggi balok: ";
    cin >> t;
    volumebalok(p, l, t);
    return 0;
}