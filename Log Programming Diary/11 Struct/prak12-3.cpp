/*File program pratikum struct 3 */
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
struct nilai
{
    int nim;
    int nilai;
};

nilai masuk ()
{
    nilai n;
    cout<<"Masukkan NIM     : ";
    cin>>n.nim;
    cout<<endl;
    cout<<"Masukkan Nilai   : ";
    cin>>n.nilai;
    return n;
}

void tampil (nilai n)
{
    cout<<"=============================="<<endl;
    cout<<"NIM     : "<<n.nim<<endl;
    cout<<"Nilai   : "<<n.nilai<<endl;
}

main ()
{
    nilai Nile;
    Nile=masuk();
    tampil(Nile);
    getch();
}
