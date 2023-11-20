#include <iostream>
using namespace std;
// fungsi rekursif untuk baris kurang 3
void kurang3(int n)
{
    if (n==1)
        cout<<n;
    else
    {
        kurang3(n-1);
        cout<<n-3;
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    kurang3(n);
}
