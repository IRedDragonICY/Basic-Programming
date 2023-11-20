#include <iostream>
using namespace std;
// mendata angka dengna array 1 dimensi

int main()
{
    int i,j;
    int a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan angka ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"angka yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    
}