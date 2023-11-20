#include <iostream>
using namespace std;

void volumekubus(int sisi)
{
    cout << sisi * sisi * sisi << endl;
}

int main()
{
    int sisi;
    cout << "Masukkan sisi kubus: ";
    cin >> sisi;
    volumekubus(sisi);
    return 0;
}