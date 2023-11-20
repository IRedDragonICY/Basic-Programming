#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mencari Minor Matriks 3x3", "1.0");
    cout << "Menentukan Minor Matriks Ordo 3x3" << endl;
    double matriks[3][3], minor_matriks[3][3];
    char pilihan;
input_matriks:
    cout << "-==Memasukkan elemen matriks==- " << endl;
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
        {
            cout << "Masukkan elemen matriks[" << j + 1 << "][" << k + 1 << "]: ";
            cin >> matriks[j][k];
        }
cek_input_matriks:
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
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
        getch();
        system("cls");
        goto input_matriks;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_input_matriks;
    }
    // menghitung minor matriks
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
            // rumus laplace
            minor_matriks[j][k] = matriks[(j + 1) % 3][(k + 1) % 3] * matriks[(j + 2) % 3][(k + 2) % 3] - matriks[(j + 1) % 3][(k + 2) % 3] * matriks[(j + 2) % 3][(k + 1) % 3];
    // Mengubah nilai minor matriks
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
            if ((j + k) % 2 == 1)
                minor_matriks[j][k] *= -1;
    cout << "-==Hasil matriks koofaktor==- " << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
            cout << minor_matriks[j][k] << " ";
        cout << endl;
    }
cek_selesai:
    cout << "Apakah Anda ingin mencetak minor matriks lainnya? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'Y':
    case 'y':
        system("cls");
        goto input_matriks;
    case 'N':
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_selesai;
    }
}