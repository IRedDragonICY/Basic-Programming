#include <iostream>
using namespace std;
// fungsi rekursif untuk tampilan bilang Attack!
void attack(int n)
{
    if (n==1)
        cout<<"Attack!";
    else
    {
        attack(n-1);
        cout<<"Attack!";
    }
}
int main()
{
    int n;
    cout<<"masukan nilai n : ";
    cin>>n;
    attack(n);
}
