#include <iostream>
using namespace std;
// fungsi rekursif untuk tampilan Dosen Bambang Robin, Dosen terbaik
void dosen(int n)
{
    if (n==1)
        cout<<"Dosen Bambang Robin, Dosen terbaik";
    else
    {
        dosen(n-1);
        cout<<"Dosen Bambang Robin, Dosen terbaik";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    dosen(n);
}