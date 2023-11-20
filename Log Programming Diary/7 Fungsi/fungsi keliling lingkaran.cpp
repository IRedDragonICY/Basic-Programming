#include <iostream>
using namespace std;

void kelilinglingkaran(int jari)
{
    cout << 2 * 3.14 * jari << endl;
}

int main()
{
    int jari;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari;
    kelilinglingkaran(jari);
    return 0;
}