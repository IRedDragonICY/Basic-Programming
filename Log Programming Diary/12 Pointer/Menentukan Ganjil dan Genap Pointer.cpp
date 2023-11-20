#include <iostream>
using namespace std;

void cek_bilangan(int *angka)
{
    if(*angka%2==0)
        cout<<"Bilangan "<<*angka<<" adalah bilangan genap";
    else
        cout<<"Bilangan "<<*angka<<" adalah bilangan ganjil";
}


int main()
{
    int angka;
    cout<<"-= Program menentukan bilangna ganjil genap dengan pointer =-\n";
    cout<<"Masukkan angka : ";
    cin>>angka;
    cek_bilangan(&angka);
    return 0;
}