#include <iostream>
using namespace std;
int main()
{
    int i,a;
    cout<<"Masukkan batas\n>";
    cin>>a;
    for (i=1;i<=a;i++)
    {
        if (i%6==0)
            cout<<"*";
            if (i%6==0&&i%7==0)
                cout<<"#";
        else if (i%7==0)
            cout<<"#";
        else
            cout<<i;1
        if (i<a)
            cout<<",";
        else
            cout<<".";
    }
}