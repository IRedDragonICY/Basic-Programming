#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    // inisisasi variabel
    awal:
    int baris,kolom;
    char pilihan;
    judul("Array 2 Dimensi","Mencetak satu matriks","v1.0");
    cout<<"Masukkan jumlah baris: ";
    memilih_baris:
    cin>>baris;
    if (baris<0)
    {
        cout<<"Jumlah baris tidak boleh negatif!"<<endl;
        getch();
        goto memilih_baris;
    }
    cout<<"Masukkan jumlah kolom: ";
    cin>>kolom;
    if (kolom<0)
    {
        cout<<"Jumlah kolom tidak boleh negatif!"<<endl;
        getch();
        goto memilih_baris;
    }

    cout<<"Kamu akan membuat sebuah matriks "<<baris<<"x"<<kolom<<endl;
    cout<<"Tekan enter untuk melanjutkan...";
    getch();
    system("cls");

    // menginput elemen matriks
    int matriks[baris][kolom];
    for (int i=0;i<baris;i++)
        for (int j=0;j<kolom;j++)
        {
            cout<<"Masukkan elemen matriks["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriks[i][j];
        }
    // mencetak matriks yang telah dibuat
    cout<<"Hasil matriks "<<baris<<"x"<<kolom<<":"<<endl;
    for (int i=0;i<baris;i++)
    {
        for (int j=0;j<kolom;j++)
            cout<<matriks[i][j]<<" ";
        cout<<endl;
    }
    cout<<"Apakah kamu ingin mencetak matriks lagi? (y/n): ";
    cin>>pilihan;
    if (pilihan=='y')
    {
        system("cls");
        goto awal;
    }
    else
        cout<<"Terima kasih telah menggunakan program ini!"<<endl;
    return 0;
}