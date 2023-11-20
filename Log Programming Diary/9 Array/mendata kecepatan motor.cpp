#include <iostream>
using namespace std;
// mendata kecepatan motor dengan array 1 dimensi

int main()
{
    int i,j;
    string a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan kecepatan motor ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"kecepatan motor yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}