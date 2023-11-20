#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
    int a,b,d;
    cout<<"Masukkan tinggi piramida";
    cin>>a;
    for (int d=1;a!=0;--a)
    {
        b=a-1;

        for (;b!=0;--b)
            cout<<" ";
        for (int c=0;c!=d;++c)
        {
            cout<<"*";
        }
        d+=2;
        cout<<endl;
    }
}