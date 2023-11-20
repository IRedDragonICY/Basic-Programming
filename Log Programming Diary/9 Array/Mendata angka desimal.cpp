#include <iostream>
using namespace std;
// mendata angka desimal dengan array 1 dimensi

int main()
{
    int i,j;
    float a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan angka desimal ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"angka desimal yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}

