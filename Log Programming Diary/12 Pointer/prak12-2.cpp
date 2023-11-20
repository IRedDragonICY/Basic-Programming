#include <iostream>
using namespace std;

int main()
{
    int *p;
    int x;

    p = &x;
    x = 10;
    cout << "Nilai x adalah  : " << x << endl;
    cout << "Nilai *p adalah : " << *p << endl;
    cout << "Alamat p adalah : " << p << endl;
    cout << "Nilai &x adalah : " << &x << endl
         << endl;
    *p = 200;
    cout << "Nilai x adalah  : " << x << endl;
    cout << "Nilai *p adalah : " << *p << endl;
    cout << "Alamat p adalah : " << p << endl;
    cout << "Nilai &x adalah : " << &x << endl;
    return 0;
}