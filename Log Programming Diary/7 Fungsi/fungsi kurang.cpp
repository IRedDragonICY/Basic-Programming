#include <iostream>
using namespace std;

void kurang(int a, int b)
{
    cout << a - b << endl;
}

int main()
{
    int a, b;
    cout<<"Masukkan angka pertama: ";
    cin >> a;
    cout<<"Masukkan angka kedua: ";
    cin >> b;
    kurang(a, b);
    return 0;
    
}
