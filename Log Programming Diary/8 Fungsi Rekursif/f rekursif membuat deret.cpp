#include <iostream>
using namespace std;

// membuat deret dengan fungsi rekursif
int deret(int n)
{
    if (n==1)
        return 1;
    else
        return n+deret(n-1);
}

int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    cout<<"deret dari "<<n<<" adalah "<<deret(n);
}