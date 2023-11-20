#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Transpose Matriks", "1.0");
    int baris, kolom;
    char pilihan;
memilih_ordo:
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;
    int matriks[baris][kolom];
    cout << "Anda akan mentranspose matriks dengan " << baris << "x" << kolom << endl;
    cout << "Aoakah anda yakin ingin mentranspose matriks ini? (y/n): " << endl;
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
        break;
    case 'n':
        system("cls");
        goto memilih_ordo;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto memilih_ordo;
    }
    getch();
    system("cls");

input_matriks:
    cout << "-==Memasukkan elemen matriks==- " << endl;
    for (int j = 0; j < baris; j++)
        for (int k = 0; k < kolom; k++)
        {
            cout << "Masukkan elemen matriks[" << j + 1 << "][" << k + 1 << "]: ";
            cin >> matriks[j][k];
        }
    system("cls");
    cout << "-==Mencetak matriks yang telah dibuat==- " << endl;
    for (int j = 0; j < baris; j++)
    {
        for (int k = 0; k < kolom; k++)
            cout << matriks[j][k] << " ";
        cout << endl;
    }
    cout << "Apakah data yang anda masukkan sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
        break;
    case 'n':
        system("cls");
        goto input_matriks;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto input_matriks;
    }
    system("cls");
    cout << "-==Mencetak matriks yang telah ditransposekan==- " << endl;
    for (int j = 0; j < kolom; j++)
    {
        for (int k = 0; k < baris; k++)
            cout << matriks[k][j] << " ";
        cout << endl;
    }
    cout << "Apakah anda ingin mentranspose matriks lagi (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
        system("cls");
        goto memilih_ordo;
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto memilih_ordo;
    }
}