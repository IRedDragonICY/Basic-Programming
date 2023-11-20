#include <iostream>
using namespace std;

void kali(int a, int b)
{
    cout << a * b << endl;
}

int main()
{
    int a, b;
    cout<<"Masukkan angka pertama: ";
    cin >> a;
    cout<<"Masukkan angka kedua: ";
    cin >> b;
    kali(a, b);
    return 0;
}