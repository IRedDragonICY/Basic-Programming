#include <iostream>
#include <conio.h>
using namespace std;
// Mencari luas persegi panjang dengan pointer

void luas_persegi_panjang(int *panjang, int *lebar, int *luas)
{
    *luas = *panjang * *lebar;
}
void keliling_persegi_panjang(int *panjang, int *lebar, int *keliling)
{
    *keliling = 2 * (*panjang + *lebar);
}

int main()
{
    int panjang, lebar, luas=0, keliling;
    MENU:
    cout<<"-= persegi panjang =-"<<endl;
    cout<<"1. Luas"<<endl;
    cout<<"2. Keliling"<<endl;
    cout<<"3. Luas dan Keliling"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Pilih : ";
    int pilih;
    cin>>pilih;
    if (pilih<1||pilih>4)
    {
        cout<<"Pilihan tidak ada"<<endl;
        getch();system("cls");
        goto MENU;
    }
    else if (pilih==4)
    {
        cout<<"Terima kasih"<<endl;
        getch();
        exit(0);
    }
    else
    {
        cout<<"Masukkan panjang : ";
        cin>>panjang;
        cout<<"Masukkan lebar : ";
        cin>>lebar;
        switch (pilih)
        {
            case 1:
                luas_persegi_panjang(&panjang, &lebar, &luas);
                cout<<"Luas : "<<luas<<endl;
                system("pause");
                break;
            case 2:
                keliling_persegi_panjang(&panjang, &lebar, &keliling);
                cout<<"Keliling : "<<keliling<<endl;
                system("pause");
                break;
            case 3:
                luas_persegi_panjang(&panjang, &lebar, &luas);
                keliling_persegi_panjang(&panjang, &lebar, &keliling);
                cout<<"Luas : "<<luas<<endl;
                cout<<"Keliling : "<<keliling<<endl;
                system("pause");
                break;   
        }
        cout<<"Kembali ke menu ? (y/n) : ";
        char kembali;
        cin>>kembali;
        switch (kembali)
        {
            case 'Y':
            case 'y':
                system("cls");
                goto MENU;
                break;
            case 'N':
            case 'n':
                cout<<"Terima kasih"<<endl;
                getch();
                exit(0);
                break;
        }
    }
    



}