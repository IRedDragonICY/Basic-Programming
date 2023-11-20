#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int j,n=1,x=6;
    for (int i=1;i<=4;i++)
    {
        for (int j=i;j<=x;j+=n)
            cout<<setw(4)<<j;
        cout<<endl;
        n++;
        x+=6;
    }
}