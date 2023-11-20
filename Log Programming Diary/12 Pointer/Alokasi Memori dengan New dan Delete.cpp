/*Contoh penggunaan operasi new dan delete*/
#include <iostream>
using namespace std;

int main()
{
    int *p=NULL;
    p=new int[5];
    cout<<"Isi Ruang Memori yang Di alokasikan"<<endl;
    for (int i=0;i<5;i++)
    {
        p[i]=(i+1)*10;
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    delete [] p;
    cout<<"Isi Ruang Memori setelah di delete"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"p["<<i<<"] = "<<p[i]<<endl;
    }
    return 0;
    
}