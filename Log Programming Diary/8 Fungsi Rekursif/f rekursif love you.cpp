#include <iostream>
using namespace std;
// fungsi rekursif bilang I Love You
void love(int n)
{
    if (n==1)
        cout<<"I Love You";
    else
    {
        love(n-1);
        cout<<"I Love You";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    love(n);
}
