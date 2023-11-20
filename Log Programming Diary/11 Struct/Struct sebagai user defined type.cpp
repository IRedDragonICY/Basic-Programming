/*Contoh penggunaan typedef*/
#include <iostream>
using namespace std;
int main()
{
    typedef int contoh;      //membuat alias dari tipe data int
    contoh nilai1, nilai2;   //deklarasi dengan tipe data alias
    int hasil;               //deklarasi dengan tipe data asli
    hasil = nilai1 + nilai2;
    cout<<"Masukkan nilai pertama: ";
    cin>>nilai1;
    cout<<"Masukkan nilai kedua: ";
    cin>>nilai2;
    cout<<"\nHasil penjumlahan: "<<hasil<<endl;
    return 0;
}