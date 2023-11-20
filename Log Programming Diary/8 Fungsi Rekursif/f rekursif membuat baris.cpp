#include <iostream>
using namespace std;

// fungsi rekrusif untuk membuat baris
void baris(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        baris(n-1);
        cout<<n;
    }
}

int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    baris(n);
}