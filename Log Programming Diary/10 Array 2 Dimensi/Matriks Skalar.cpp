#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Matriks Skalar", "1.0");
start:
    int ordo, skalar;
    char pilihan;
    cout << "Masukkan ordo matriks persegi: ";
    cin >> ordo;
    cout << "Masukkan skalar: ";
    cin >> skalar;
    int Matriks[ordo][ordo];
    cout << "-== Matriks skalar x" << skalar << " ==-" << endl;
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
        {
            if (i == j)
                Matriks[i][j] = skalar;
            else
                Matriks[i][j] = 0;
            cout << Matriks[i][j] << " ";
        }
        cout << endl;
    }
    getch();
    cout << "Apakah anda ingin mencetak matriks skalar lagi? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
    case 'Y':
        getch();
        system("cls");
        goto start;
        break;
    case 'n':
        cout << "Terima kasih telah menggunakan program ini\n";
        getch();
        system("cls");
        break;
    }
    return 0;
}