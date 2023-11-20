#include <iostream>
#include <conio.h>
using namespace std;

void jumlah(int *a, int *b)
{
    int hasil;
    hasil = *a + *b;
    cout<<"Hasil Penjumlahan: "<<hasil<<endl;
}
void kurang(int *a, int *b)
{
    int hasil;
    hasil = *a - *b;
    cout<<"Hasil Pengurangan: "<<hasil<<endl;
}
void kali(int *a, int *b)
{
    int hasil;
    hasil = *a * *b;
    cout<<"Hasil Perkalian: "<<hasil<<endl;
}
void bagi(int *a, int *b)
{
    int hasil;
    hasil = *a / *b;
    cout<<"Hasil Pembagian: "<<hasil<<endl;
}
void mod(int *a, int *b)
{
    int hasil;
    hasil = *a % *b;
    cout<<"Hasil Modulus: "<<hasil<<endl;
}


int main()
{
    int a, b;
    int menu;
    pilih_menu:
    cout<<"Kalkulator Pointer\n"; // Kalkulator dengan pointer
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
    cout<<"5. Modulus\n";
    cout<<"6. Exit\n";
    cout<<"Pilih Menu: ";
    cin>>menu;
    if (menu<1||menu>7)
    {
        cout<<"Menu tidak tersedia\n";
        getch();system("cls");goto pilih_menu;
    }
    else if (menu==6)
    {
        cout<<"Terima Kasih";
        getch();system("cls");
    }
    else
    {
        cout<<"Anda memilih menu: ";
        switch (menu)
        {
            case 1:
                cout<<"Penjumlahan\n";
                break;
            case 2:
                cout<<"Pengurangan\n";
                break;
            case 3:
                cout<<"Perkalian\n";
                break;
            case 4:
                cout<<"Pembagian\n";
                break;
            case 5:
                cout<<"Modulus\n";
                break;
        }
        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<"Masukkan angka kedua: ";
        cin>>b;
        switch (menu)
        {
            case 1:
                jumlah(&a, &b);
                break;
            case 2:
                kurang(&a, &b);
                break;
            case 3:
                kali(&a, &b);
                break;
            case 4:
                bagi(&a, &b);
                break;
            case 5:
                mod(&a, &b);
                break;
        }
        cout<<"\nTekan Enter untuk kembali ke menu . . . .\n";
        getch();system("cls");goto pilih_menu;
    }
}