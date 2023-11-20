#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mencetak matriks sesuai banyak yang ditentukan", "1.0");
    int baris[2], kolom[2];
    char pilihan;
input_ordo:
    cout << "Masukkan baris matriks A: ";
    cin >> baris[0];
    cout << "Masukkan kolom matriks A: ";
    cin >> kolom[0];
    cout << "Masukkan baris matriks B: ";
    cin >> baris[1];
    cout << "Masukkan kolom matriks B: ";
    cin >> kolom[1];
    cout << "Menampilkan ordo matriks\n";
    cout << "Matriks A memiliki ordo " << baris[0] << "x" << kolom[0] << endl;
    cout << "Matriks B memiliki ordo " << baris[1] << "x" << kolom[1] << endl;
    if (kolom[0] != baris[1])
    {
        cout << "Error: Matriks tidak dapat dikalikan karena jumlah kolom matriks A tidak sama dengan jumlah matriks B\n";
        getch();
        system("cls");
        goto input_ordo;
    }
    getch();
    system("cls");
    int MatriksA[baris[0]][kolom[0]], MatriksB[baris[1]][kolom[1]];
input_matriks_A:
    for (int i = 0; i < baris[0]; i++)
    {
        cout << "-== Mengisi Matriks A ==-\n";
        for (int j = 0; j < kolom[0]; j++)
        {
            cout << "Masukkan nilai Matriks A baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> MatriksA[i][j];
        }
    }
mengecek_matriks_A:
    cout << "-== Matriks A ==-" << endl;
    for (int i = 0; i < baris[0]; i++)
    {
        for (int j = 0; j < kolom[0]; j++)
            cout << MatriksA[i][j] << " ";
        cout << endl;
    }
    cout << "Apakah data Matriks A sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
    case 'Y':
        break;
    case 'n':
    case 'N':
        getch();
        system("cls");
        goto input_matriks_A;
        break;
    default:
        cout << "Pilihan tidak tersedia\n";
        getch();
        system("cls");
        goto mengecek_matriks_A;
        break;
    }
input_matriks_B:
    for (int i = 0; i < baris[1]; i++)
    {
        cout << "-== Mengisi Matriks B ==-";
        for (int j = 0; j < kolom[1]; j++)
        {
            cout << "Masukkan nilai Matriks B baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> MatriksB[i][j];
        }
    }
mengecek_matriks_B:
    cout << "-== Matriks B ==-\n";
    for (int i = 0; i < baris[1]; i++)
    {
        for (int j = 0; j < kolom[1]; j++)
            cout << MatriksB[i][j] << " ";
        cout << endl;
    }
    cout << "Apakah data Matriks B sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
    case 'Y':
        break;
    case 'n':
    case 'N':
        getch();
        system("cls");
        goto input_matriks_B;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto mengecek_matriks_B;
        break;
    }
    // inisisasi matriks C
    int MatriksC[baris[0]][kolom[1]];

    cout << "-== Hasil Perkalian Matriks ==-" << endl;
    for (int i = 0; i < baris[0]; i++)
    {
        for (int j = 0; j < kolom[1]; j++)
        {
            MatriksC[i][j] = 0;
            for (int k = 0; k < kolom[0]; k++)
                MatriksC[i][j] += MatriksA[i][k] * MatriksB[k][j];
            cout << MatriksC[i][j] << " ";
        }
        cout << endl;
    }
}