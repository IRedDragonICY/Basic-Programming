#include <iostream>
using namespace std;
// fungsi rekursif untuk tampilan pola bintang segitiga
void bintang(int n)
{
    if (n==1)
        cout<<"*";
    else
    {
        bintang(n-1);
        cout<<"*";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    bintang(n);
}