/* File program pratikum struct*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
struct mahasiswa
{
    char nama[20];
    int id;
};
struct mahasiswa read();    // fungssi prototype

int main()
{
    struct mahasiswa mhs;
    mhs=read();             // memanggil fungsi read
    cout<<"Nama: "<<mhs.nama;
    cout<<"\nID: "<<mhs.id;
    getch();
}

struct mahasiswa read()
{
    struct mahasiswa s1;
    cout<<"Masukkan nama: ";
    cin>>s1.nama;
    cout<<"Masukkan ID: ";
    cin>>s1.id;
    return s1;
}