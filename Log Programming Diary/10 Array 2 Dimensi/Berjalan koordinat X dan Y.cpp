#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include "startup.h"
using namespace std;

double koordinat[2][2]={(0,0),(0,0)};
float jarak;

void animasi_atas()
{
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
}
void animasi_bawah()
{
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
}
void animasi_kanan()
{
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"            +---------+         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            +---------+         "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"             +---------+        "<<endl;
    cout<<"             |         |        "<<endl;
    cout<<"             |         |        "<<endl;
    cout<<"             |         |        "<<endl;
    cout<<"             +---------+        "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"            +---------+         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            |         |         "<<endl;
    cout<<"            +---------+         "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
}

void animasi_kiri()
{
    system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"          +---------+           "<<endl;
    cout<<"          |         |           "<<endl;
    cout<<"          |         |           "<<endl;
    cout<<"          |         |           "<<endl;
    cout<<"          +---------+           "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"         +---------+            "<<endl;
    cout<<"         |         |            "<<endl;
    cout<<"         |         |            "<<endl;
    cout<<"         |         |            "<<endl;
    cout<<"         +---------+            "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    usleep(50000);system("cls");
}


int main()
{
    judul("Array 2 Dimensi","Berjalan Koordinat X dan Y","v0.2");
    start:
    system("cls");
    HANDLE hstdin;
    DWORD mode;
    hstdin=GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleMode(hstdin,&mode);

    SetConsoleMode(hstdin,ENABLE_ECHO_INPUT|ENABLE_PROCESSED_INPUT);
    cout<<"Koordinat sekarang X/Y   : "<<koordinat[0][0]<<","<<koordinat[1][0]<<"                              "<<endl;
    cout<<"Koordinat Tanda    X/Y   : "<<koordinat[0][1]<<","<<koordinat[1][1]<<"                              "<<endl;
    cout<<"Jarak koordinat ke tanda : "<<sqrt(pow(koordinat[0][0] - koordinat[0][1], 2) + pow(koordinat[1][0] - koordinat[1][1], 2))<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                ^               "<<endl;
    cout<<"                W               "<<endl;
    cout<<"                                "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"      <A   |         |  D>      "<<endl;
    cout<<"           |         |          "<<endl;
    cout<<"           +---------+          "<<endl;
    cout<<"                                "<<endl;
    cout<<"                S               "<<endl;
    cout<<"                v               "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<"                                "<<endl;
    cout<<" _______________________________"<<endl;
    cout<<"|t = tanda        k = keluar   |"<<endl;
    cout<<"|______________________________|"<<endl;

    cout<<flush;
    int input=cin.get();
    // nilai y
    if (input==119) // input w
    {
        animasi_atas();
        koordinat[1][0]+=1;
        goto start;
    }
    else if (input==115) // input s
    {
        animasi_bawah();
        koordinat[1][0]-=1;
        goto start;
    }
    // nilai x
    else if (input==100) // input d 
    {
        animasi_kanan();
        koordinat[0][0]+=1;
        goto start;
    }
    else if (input==97) // input a
    {
        animasi_kiri();
        koordinat[0][0]-=1;
        goto start;
    }
    else if (input==107) // input k
    {
        system("cls");cout<<"Sampai Jumpa";
    }
    else if (input==116) // input t
    {
        koordinat[0][1]=koordinat[0][0];
        koordinat[1][1]=koordinat[1][0];
        goto start;
    }
    else
        cout<<"Masukkan benar!";
    SetConsoleMode(hstdin,mode);
}