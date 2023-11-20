#include <iostream>
using namespace std;

// menyimpan warna dengan array 1 dimensi

int main()
{
    int warna[5];
    for (int i=0;i<5;i++)
    {
        cout<<"Masukkan warna ke-"<<i+1<<" : ";
        cin>>warna[i];
    }
    cout<<"Warna yang anda masukkan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<warna[i]<<" ";
    }
}