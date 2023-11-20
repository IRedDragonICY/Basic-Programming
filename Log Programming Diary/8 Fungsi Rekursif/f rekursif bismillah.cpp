#include <iostream>
using namespace std;
// fungsi rekursif bilang bismillah
void bismillah(int n)
{
    if (n==1)
        cout<<"Bismillah";
    else
    {
        bismillah(n-1);
        cout<<"Bismillah";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    bismillah(n);
}
