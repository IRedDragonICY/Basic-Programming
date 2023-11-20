#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mencetak matriks sesuai banyak yang ditentukan","1.0");
    int jumlah_matriks,baris,kolom;
    // menentukan jumlah matriks yang akan dibuat
    cout<<"Tentukan berapa matriks yang ingin kamu buat\n>";
    cin>>jumlah_matriks;
    int matriks[jumlah_matriks][100][100]; // maksimal 100x100 

    for (int i=0;i<jumlah_matriks;i++)
    {
        cout<<"Matriks ke-"<<i+1<<endl;
        memilih_baris:
        cout<<"Masukkan jumlah baris matriks ke-"<<i+1<<": ";
        cin>>baris;
        if (baris<0)
        {
            cout<<"Jumlah baris tidak boleh negatif!"<<endl;
            getch();
            goto memilih_baris;
        }
        else if (baris>100)
        {
            cout<<"Jumlah baris tidak boleh lebih dari 100!"<<endl;
            getch();
            goto memilih_baris;
        }
        memilih_kolom:
        cout<<"Masukkan jumlah kolom matriks ke-"<<i+1<<": ";
        cin>>kolom;
        if (kolom<0)
        {
            cout<<"Jumlah kolom tidak boleh negatif!"<<endl;
            getch();
            goto memilih_kolom;
        }
        else if (kolom>100)
        {
            cout<<"Jumlah kolom tidak boleh lebih dari 100!"<<endl;
            getch();
            goto memilih_kolom;
        }
        matriks[i][baris][kolom];
        cout<<"Kamu akan membuat matriks ke-"<<i+1<<" dengan "<<baris<<"x"<<kolom<<endl;
        cout<<"Tekan enter untuk melanjutkan...";
        getch();system("cls");
        for (int j=0;j<baris;j++)
            for (int k=0;k<kolom;k++)
            {
                cout<<"Masukkan elemen matriks["<<j+1<<"]["<<k+1<<"]: ";
                cin>>matriks[i][j][k];
            }
        cout<<"Menyimpan matriks ke-"<<i+1<<"..."<<endl;
        getch();system("cls");
    }
    cout<<"Mencetak matriks yang telah dibuat:"<<endl;
    for (int i=0;i<jumlah_matriks;i++)
    {
        cout<<"Matriks ke-"<<i+1<<endl;
        for (int j=0;j<baris;j++)
        {
            for (int k=0;k<kolom;k++)
                cout<<matriks[i][j][k]<<" ";
            cout<<endl;
        }
    }
    getch();
    return 0;
}