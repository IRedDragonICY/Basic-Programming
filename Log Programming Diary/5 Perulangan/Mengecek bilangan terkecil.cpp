#include <iostream>
using namespace std;

int main()
{
    // program untuk menentukan bilangan minimum dari 3 bilangan dengan perulangan 1 tingkat
    int a, b, c;
    cout<<"Masukkan bilangan pertama: ";
    cin>>a;
    cout<<"Masukkan bilangan kedua: ";
    cin>>b;
    cout<<"Masukkan bilangan ketiga: ";
    cin>>c;
    for (int i = 0; i < 3; i++) {
        if (a < b && a < c) {
            cout<<"Bilangan terkecil adalah "<<a<<endl;
            break;
        } else if (b < a && b < c) {
            cout<<"Bilangan terkecil adalah "<<b<<endl;
            break;
        } else if (c < a && c < b) {
            cout<<"Bilangan terkecil adalah "<<c<<endl;
            break;
        }
    }
}