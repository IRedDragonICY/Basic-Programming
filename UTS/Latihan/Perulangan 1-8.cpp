#include <iostream>
using namespace std;

int main()
{
    int i,a,x=8;
    for (i=1;i<=8;i++)
    {
            for (a=1;a<=x;a++)
                cout<<a;
        cout<<endl;
        x--;
    }
}