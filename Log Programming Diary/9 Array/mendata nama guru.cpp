#include <iostream>
using namespace std;
// mendata nama guru dengan array 1 dimensi

int main()
{
    int i,j;
    string a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan nama guru ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"nama guru yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}