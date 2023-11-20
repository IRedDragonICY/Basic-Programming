#include <iostream>
using namespace std;

void luaslingkaran(int r)
{
    cout << 3.14 * r * r << endl;
}

int main()
{
    int r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    luaslingkaran(r);
    return 0;
}
