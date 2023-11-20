#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mencetak matriks identitas sesuai banyak yang ditentukan", "1.0");
    int baris, kolom;
    cout << "Masukkan baris matriks idenitas: ";
    cin >> baris;
    cout << "Masukkan kolom matriks idenitas: ";
    cin >> kolom;
    if (baris != kolom)
    {
        cout << "Error: Matriks identitas harus memiliki ordo persegi\n";
        getch();
        system("cls");
        main();
    }
    cout << "Anda memilih matriks identitas " << baris << "x" << kolom << endl;
    getch();
    system("cls");
    int Matriks[baris][kolom];
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (i == j)
                Matriks[i][j] = 1;
            else
                Matriks[i][j] = 0;
        }
    }

    system("cls");

    cout << "-== Matriks Identitas ==-" << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
            cout << Matriks[i][j] << " ";
        cout << endl;
    }
}