#include <iostream>
using namespace std;

int main()
{
    // program untuk menentukan bilangan maksimum dari 3 bilangan dengan perulangan 1 tingkat
    int a, b, c;
    cout<<"Masukkan bilangan pertama: ";
    cin>>a;
    cout<<"Masukkan bilangan kedua: ";
    cin>>b;
    cout<<"Masukkan bilangan ketiga: ";
    cin>>c;
    // mengecek dengan perulangan 1 tingkat
    for (int i = 0; i < 3; i++) {
        if (a > b && a > c) {
            cout<<"Bilangan terbesar adalah "<<a<<endl;
            break;
        } else if (b > a && b > c) {
            cout<<"Bilangan terbesar adalah "<<b<<endl;
            break;
        } else if (c > a && c > b) {
            cout<<"Bilangan terbesar adalah "<<c<<endl;
            break;
        }
    }
}