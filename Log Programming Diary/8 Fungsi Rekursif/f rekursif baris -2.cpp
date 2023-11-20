#include <iostream>
using namespace std;
// fungsi rekursif untuk baris kurang 2
void kurang2(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        kurang2(n-1);
        cout<<n-2;
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    kurang2(n);
}