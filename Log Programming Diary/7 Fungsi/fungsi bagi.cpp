#include <iostream>
using namespace std;

void bagi(int a, int b)
{
    cout << a / b << endl;
}

int main()
{
    int a, b;
    cout<<"Masukkan angka pertama: ";
    cin >> a;
    cout<<"Masukkan angka kedua: ";
    cin >> b;
    bagi(a, b);
    return 0;
}