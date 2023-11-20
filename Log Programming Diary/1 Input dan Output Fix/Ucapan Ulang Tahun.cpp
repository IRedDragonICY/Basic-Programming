#include <iostream>

using namespace std;

int main() {
    cout << "Masukkan nama kamu: ";
    string nama;
    cin >> nama;

    cout << "Masukkan usia kamu: ";
    int usia;
    cin >> usia;

    cout << "Halo " << nama << ", selamat ulang tahun yang ke-" << usia << "!" << endl;

    return 0;
}