#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Masukkan besar belah ketupat\n>";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if (i>=j)
                cout<<" *";
            else
                cout<<"  ";
        }
        for(int j=1;j<=n;j++)
            if (i>j)
                cout<<" *";
            else
                cout<<"  ";
        cout<<endl;
    }
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if (i<=j-1)
                cout<<" *";
            else
                cout<<"  ";
        for(int j=n;j>=1;j--)
            if (i<j-1)
                cout<<" *";
            else
                cout<<"  ";

        cout<<endl;
    }
}