#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int nim;
    float ipk;

    // Membaca data mahasiswa
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NIM mahasiswa: ";
    cin >> nim;
    cout << "Masukkan IPK mahasiswa: ";
    cin >> ipk;

    // Menuliskan data mahasiswa ke layar
    cout << endl << "Data mahasiswa:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "IPK: " << ipk << endl;

    return 0;
}