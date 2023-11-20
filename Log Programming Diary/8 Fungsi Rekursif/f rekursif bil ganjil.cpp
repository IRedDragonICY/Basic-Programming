#include <iostream>
using namespace std;
// fungsi rekursif untuk mendata bilangan ganjil
void ganjil(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        ganjil(n-1);
        if (n%2==1)
            cout<<n;
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    ganjil(n);
}