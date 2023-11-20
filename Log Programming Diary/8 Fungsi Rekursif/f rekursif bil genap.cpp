#include <iostream>
using namespace std;
// fungsi rekursif untuk mendata bilangan genap
void genap(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        genap(n-1);
        if (n%2==0)
            cout<<n;
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    genap(n);
}