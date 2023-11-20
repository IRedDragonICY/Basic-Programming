#include <iostream>
using namespace std;

void volumebola(int r)
{
    cout << 4/3 * 3.14 * r * r * r << endl;
}

int main()
{
    int r;
    cout << "Masukkan jari-jari bola: ";
    cin >> r;
    volumebola(r);
    return 0;
}