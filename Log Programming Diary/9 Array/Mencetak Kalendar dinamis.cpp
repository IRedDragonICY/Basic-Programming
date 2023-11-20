#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include "startup.h"

using namespace std;

// menghitung jumlah hari dalam suatu bulan dengan rumus Zeller
int Angka_Hari (int hari, int bulan, int tahun)
{
    static int tgl[]={0,3,2,5,0,3,5,1,4,6,2,4};
    tahun -= bulan < 3;
    return (tahun + tahun/4 - tahun/100 + tahun/400 + tgl[bulan-1] + hari) % 7;
}
// mengubah angka bulan menjadi nama bulan
string Nama_Bulan (int Angka_Bulan)
{
    string Bulan[]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    return Bulan[Angka_Bulan];
}
// menghitung banyak tanggal dalam suatu bulan
int Banyak_Tanggal(int bulan, int tahun)
{
    if (bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12)
        return 31;
    else if (bulan==4 || bulan==6 || bulan==9 || bulan==11)
        return 30;
    else if (bulan==2)
    {
        if (tahun%4==0)
            return 29;
        else
            return 28;
    }
    return 0;
}

// mencetak kalender
void Cetak_Kalender (int tahun)
{
    cout<< "         Calendar - "<<tahun<<endl;
    int banyak_hari;
    int sekarang_hari = Angka_Hari (1,1,tahun);
    for (int i=0;i<12;i++)
    {
        banyak_hari = Banyak_Tanggal(i+1,tahun);
        cout<<"  ------------"<<Nama_Bulan(i)<<"-------------"<<endl;
        cout<<" Ming  Sen  Sel  Rab  Kam  Jum  Sab"<<endl;
        int k;
        for (k=0;k<sekarang_hari;k++)
            cout<<"     ";
        for (int j=1;j<=banyak_hari;j++)
        {
            cout<<setw(5)<<j;
            if (++k>6)
            {
                k=0;
                cout<<endl;
            }
        }
        if (k)
            cout<<endl;
        sekarang_hari = k;
    }

}

int main()
{
    
    awal:
    int tahun;
    char pilihan;
    cout<<"Masukkan tahun kalender yang ingin ditampilkan: ";
    cin>>tahun;
    if (tahun<0)
    {
        cout<<"Tahun tidak valid";
        getch(); system("cls");
        return 0;
    }
    Cetak_Kalender(tahun);
    cout<<"Apakah anda ingin mencetak kalender lagi? (y/n)";
    cin>>pilihan;
    if (pilihan=='y' || pilihan=='Y')
    {
        system("cls");
        goto awal;
    }
    else
    {
        cout<<"Terima kasih";
        getch();
        return 0;
    }

}