#include <iostream>
using namespace std;
// mendata game android dengan array 1 dimensi
int main()
{
    int i,j;
    string a[5];
    for (int i=0;i<5;i++)
    {
        cout<<"masukan game android ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"game android yang anda masukan adalah : ";
    for (int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}
