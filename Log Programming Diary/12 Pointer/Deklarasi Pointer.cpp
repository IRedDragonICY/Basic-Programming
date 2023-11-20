#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 10;
    cout << "Angka integer :" << a << endl;
    cout << "Alamat memori: " << &a << endl;
    int *p;
    p = &a;
    cout << "Angka integer : " << *p << endl;
    cout << "Alamat memori : " << p << endl;
}