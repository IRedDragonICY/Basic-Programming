#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

struct mahasiswa
{
    char nama[20];
    int id;
};

void display(mahasiswa s1)
{
    cout << "Nama : " << s1.nama << endl;
    cout << "ID   : " << s1.id;
}

int main()
{
    mahasiswa mhs;
    strcpy(mhs.nama, "Ndik"); // inisisasi variabel nama
    mhs.id = 123456;
    display(mhs);
    getch();
    return 0;
}
