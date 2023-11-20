#include <iostream>
using namespace std;
// fungsi rekursif untuk menghitung pangkat

int pangkat(int a, int b)
{
    if (b==0)
        return 1;
    else
        return a*pangkat(a,b-1);
}

int main()
{
    int a,b;
    cout<<"masukan nilai a : ";
    cin>>a;
    cout<<"masukan nilai b : ";
    cin>>b;
    cout<<a<<" pangkat "<<b<<" adalah "<<pangkat(a,b);
}