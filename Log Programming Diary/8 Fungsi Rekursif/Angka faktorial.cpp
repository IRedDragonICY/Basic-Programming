#include <iostream>
using namespace std;

// mencari faktorial dengan fungsi rekursif
int faktorial(int n)
{
    if (n==0)
        return 1;
    else
        return n*faktorial(n-1);
}

int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    cout<<"faktorial dari "<<n<<" adalah "<<faktorial(n);
}
