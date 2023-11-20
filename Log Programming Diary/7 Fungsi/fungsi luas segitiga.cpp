#include <iostream>
using namespace std;

void Luassegitiiga(int alas, int tinggi)
{
    cout << 0.5 * alas * tinggi << endl;
}

int main()
{
    int alas, tinggi;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    Luassegitiiga(alas, tinggi);
    return 0;
}