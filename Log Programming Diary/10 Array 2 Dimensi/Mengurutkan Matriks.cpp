#include <iostream>
#include <conio.h>
#include <algorithm>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mengurutkan Matriks", "1.0");
    int baris, kolom;
    cout << "Masukkan baris matriks: ";
    cin >> baris;
    cout << "Masukkan kolom matriks: ";
    cin >> kolom;
    int matriks[baris][kolom];
    for (int i = 0; i < baris; i++)
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan nilai matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    // menampilkan matriks sebelum diurutkan
    cout << "-== Matriks sebelum diurutkan ==-" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
            cout << matriks[i][j] << " ";
        cout << endl;
    }

    // mengurutkan matriks
    for (int i = 0; i < baris; i++)
        sort(matriks[i], matriks[i] + kolom);
    // menampilkan matriks setelah diurutkan
    cout << "-== Matriks setelah diurutkan ==-" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
            cout << matriks[i][j] << " ";
        cout << endl;
    }
}