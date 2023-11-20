#include <iostream>
using namespace std;
// mendata jaket yang sedang trend dengan array 1 dimensi
int main()
{
    int i,j;
    string a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan jaket ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"jaket yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
