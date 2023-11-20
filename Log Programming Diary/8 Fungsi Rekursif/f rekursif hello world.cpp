#include <iostream>
using namespace std;
// fungsi rekursif untuk tampilan hello world
void hello(int n)
{
    if (n==1)
        cout<<"hello world";
    else
    {
        hello(n-1);
        cout<<"hello world";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    hello(n);
}