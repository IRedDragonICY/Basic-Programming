#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int j=(n*2)-1;
    for (int i=n;i>=1;i--)
    {
        int x=j;
        for (;x>=0;x--)
            cout<<" ";
        for (int j=i;j<=n;j++)
            cout<<j<<" ";
        cout<<endl;
        j-=2;
    }
}