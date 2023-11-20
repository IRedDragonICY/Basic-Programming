/*Contoh penggunaan malloc() dan free()*/
#include <iostream>
using namespace std;

int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    cout<< " -= Alokasi Memori dengan Free() =-\n"<<endl;
    cout<<"Isi Ruang Memori yang Di alokasikan"<<endl;
    for (int i=0;i<5;i++)
    {
        p[i]=(i+1)*10;
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    free (p);
    cout<<"Isi Ruang Memori setelah di free"<<endl;
    cout<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }

}