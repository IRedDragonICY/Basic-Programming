#include <iostream>
using namespace std;
// mendata makanan dengan array 1 dimensi

int main()
{
    int i,j;
    string a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan makanan ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"makanan yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}