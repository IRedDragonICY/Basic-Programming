#include <iostream>
using namespace std;

int main()
{
    int i=10;
    float f=0.25;
    double d=123.123;

    void *p=NULL;           //dekalarasi void pointer
    
    p=&i;                   //menunjuk ke alamat int i
    cout<<"p menunjuk ke alamat i"<<endl;
    cout<<"Nilai *p : "<<*((int*)p)<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    p=&f;                   //menunjuk ke alamat float f
    cout<<"p menunjuk ke alamat f"<<endl;
    cout<<"Nilai *p : "<<*((float*)p)<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    p=&d;                   //menunjuk ke alamat double d
    cout<<"p menunjuk ke alamat d"<<endl;
    cout<<"Nilai *p : "<<*((double*)p)<<endl;
    cout<<"Nilai p  : "<<p<<endl;
    return 0;
}