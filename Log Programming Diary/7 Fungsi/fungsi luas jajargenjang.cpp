#include <iostream>
using namespace std;

void luasjajargenjang(int alas, int tinggi)
{
    cout << alas * tinggi << endl;
}

int main()
{
    int alas, tinggi;
    cout << "Masukkan alas jajar genjang: ";
    cin >> alas;
    cout << "Masukkan tinggi jajar genjang: ";
    cin >> tinggi;
    luasjajargenjang(alas, tinggi);
    return 0;
}