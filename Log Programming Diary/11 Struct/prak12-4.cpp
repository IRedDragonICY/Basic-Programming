/*File program prak12-4.cpp */
#include <iostream>
using namespace std;

struct mhs
{
    char nama[30];
    int nim, uts, uas, nilai;
};

int main()
{
    int n;
    cout << "Masukkan Jumlah Mahasiswa:";
    cin >> n;
    mhs m[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Nama      :";
        cin >> m[i].nama;
        cout << "Masukan NIM       :";
        cin >> m[i].nim;
        cout << " Masukkan Nilai UTS :";
        cin >> m[i].uts;
        cout << " Masukkan Nilai UAS :";
        cin >> m[i].uas;
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        m[i].nilai = (m[i].uts + m[i].uas) / 2;
        cout << "Nama Mahasiswa : " << m[i].nama << endl;
        cout << "NIM Mahasiswa  : " << m[i].nim << endl;
        cout << "Nilai akhir    : " << m[i].nilai << endl;
    }
}