#include <iostream>
using namespace std;

void tambah(int a, int b)
{
    cout << a + b << endl;
}
void kurang(int a, int b)
{
    cout << a - b << endl;
}
void kali(int a, int b)
{
    cout << a * b << endl;
}
void bagi(int a, int b)
{
    cout << a / b << endl;
}
void sisabagi(int a, int b)
{
    cout << a % b << endl;
}

int main()
{
    int a, b;
    cout<<"Kalulator Sederhana"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Sisa Bagi"<<endl;
    cout<<"pilih menu: ";
    int pilih;
    cin >> pilih;
    cout<<"Masukkan angka pertama: ";
    cin >> a;
    cout<<"Masukkan angka kedua: ";
    cin >> b;
    switch(pilih)
    {
        case 1:
            tambah(a, b);
            break;
        case 2:
            kurang(a, b);
            break;
        case 3:
            kali(a, b);
            break;
        case 4:
            bagi(a, b);
            break;
        case 5:
            sisabagi(a, b);
            break;
        default:
            cout<<"Menu tidak tersedia"<<endl;
    }
    return 0;
}