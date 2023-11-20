#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Nilai Determinan Matriks 2x2", "1.0");
    int ordo = 2, determinan;
    char pilihan;
// inisialisasi matriks
memilih_ordo:
    int matriks[ordo][ordo];
    cout << "Anda akan mencari nilai determinan matriks dengan ordo " << ordo << "x" << ordo << endl;
    getch();
    system("cls");
input_matriks:
    cout << "-==Memasukkan elemen matriks==- " << endl;
    for (int j = 0; j < ordo; j++)
        for (int k = 0; k < ordo; k++)
        {
            cout << "Masukkan elemen matriks[" << j + 1 << "][" << k + 1 << "]: ";
            cin >> matriks[j][k];
        }
cek_input_matriks:
    cout << "-==Mencetak matriks yang telah dibuat==- " << endl;
    for (int j = 0; j < ordo; j++)
    {
        for (int k = 0; k < ordo; k++)
            cout << matriks[j][k] << " ";
        cout << endl;
    }
    cout << "Apakah data yang anda masukkan ke dalam matriks sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'Y':
    case 'y':
        break;
    case 'N':
    case 'n':
        system("cls");
        goto input_matriks;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_input_matriks;
    }
    system("cls");
output_determinan:
    determinan = matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0];
    cout << "rumus determinan 2x2            : " << matriks[0][0] << "*" << matriks[1][1] << " - " << matriks[0][1] << "*" << matriks[1][0] << endl;
    cout << "Nilai determinan matriks adalah : " << determinan << endl;
    getch();
    system("cls");
cek_keluar:
    cout << "Apakah Anda ingin mencari determinan matriks lagi? (y/n) : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
        system("cls");
        goto memilih_ordo;
        break;
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_keluar;
    }
    return 0;
}