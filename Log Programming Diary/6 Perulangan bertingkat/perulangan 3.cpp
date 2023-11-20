#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<" |";
    for (int i=1;i<=5;i++)
    {
        cout<<i<<"|";
    }
    cout<<"\n-+-+-+-+-+-+\n";
    i=1;
    while (i<=3){
        cout<<i;
        for (int j=1;j<=5;j++) {
              cout<<"|"<<j;
        }
        cout<<"|"<<endl;
        if (i<3)
            cout<<"-+-+-+-+-+-|"<<endl;
        else
            cout<<"-----------+"<<endl;
        i++;
    }
}