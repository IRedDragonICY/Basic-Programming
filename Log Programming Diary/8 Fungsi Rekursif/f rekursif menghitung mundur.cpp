#include <iostream>
using namespace std;
// fungsi rekursif untuk menghitung mundur
void mundur(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        cout<<n;
        mundur(n-1);
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    mundur(n);
}