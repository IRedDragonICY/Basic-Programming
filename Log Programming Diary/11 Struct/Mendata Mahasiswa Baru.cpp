#include <iostream>
#include <string>

using namespace std;

struct Alamat
{
    string jalan;
    string kota;
    string provinsi;
    int kodePos;
};

struct Mahasiswa
{
    string nama;
    long long int nim;
    string jurusan;
    string fakultas;
    int angkatan;
    Alamat alamatAsal;
};

int main()
{
    Mahasiswa mhs;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM mahasiswa: ";
    cin >> mhs.nim;
    cout << "Masukkan jurusan mahasiswa: ";
    getline(cin, mhs.jurusan);
    cout << "Masukkan fakultas mahasiswa: ";
    getline(cin, mhs.fakultas);
    cout << "Masukkan angkatan mahasiswa: ";
    cin >> mhs.angkatan;
    cout << "Masukkan alamat asal mahasiswa:" << endl;
    cout << "Jalan: ";
    getline(cin, mhs.alamatAsal.jalan);
    cout << "Kota: ";
    getline(cin, mhs.alamatAsal.kota);
    cout << "Provinsi: ";
    getline(cin, mhs.alamatAsal.provinsi);
    cout << "Kode pos: ";
    cin >> mhs.alamatAsal.kodePos;

    cout << endl
         << "Data mahasiswa baru:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;
    cout << "Fakultas: " << mhs.fakultas << endl;
    cout << "Angkatan: " << mhs.angkatan << endl;
    cout << "Alamat asal: " << mhs.alamatAsal.jalan << ", " << mhs.alamatAsal.kota << ", " << mhs.alamatAsal.provinsi << ", " << mhs.alamatAsal.kodePos << endl;

    return 0;
}