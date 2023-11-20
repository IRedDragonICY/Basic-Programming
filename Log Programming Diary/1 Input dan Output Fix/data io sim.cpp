#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int tahun_lahir;
    string jenis_kelamin;
    string alamat;
    string nomor_sim;

    // Membaca data SIM
    cout << "Masukkan nama pemegang SIM: ";
    getline(cin, nama);
    cout << "Masukkan tahun lahir pemegang SIM: ";
    cin >> tahun_lahir;
    cout << "Masukkan jenis kelamin pemegang SIM (L/P): ";
    cin >> jenis_kelamin;
    cout << "Masukkan alamat pemegang SIM: ";
    cin.ignore(); // menghapus karakter Enter dari input sebelumnya
    getline(cin, alamat);
    cout << "Masukkan nomor SIM: ";
    cin >> nomor_sim;

    // Menuliskan data SIM ke layar
    cout << endl << "Data SIM:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Tahun lahir: " << tahun_lahir << endl;
    cout << "Jenis kelamin: " << jenis_kelamin << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Nomor SIM: " << nomor_sim << endl;

    return 0;
}
