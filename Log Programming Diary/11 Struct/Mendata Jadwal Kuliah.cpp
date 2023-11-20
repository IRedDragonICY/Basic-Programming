#include <iostream>
#include <string>

using namespace std;

const int MAX_JADWAL = 10;

struct Jadwal
{
    string hari;
    string jam;
    string ruangan;
    string matakuliah;
    string dosen;
};

int main()
{
    Jadwal jadwal[MAX_JADWAL];
    int jumlah_jadwal = 0;

    while (true)
    {
        cout << "Menu: " << endl;
        cout << "1. Tambah jadwal" << endl;
        cout << "2. Lihat jadwal" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan: ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Tambah jadwal
            if (jumlah_jadwal >= MAX_JADWAL)
            {
                cout << "Maaf, stok jadwal sudah penuh!" << endl;
            }
            else
            {
                cout << "Masukkan hari kuliah: ";
                cin >> jadwal[jumlah_jadwal].hari;

                cout << "Masukkan jam kuliah: ";
                cin >> jadwal[jumlah_jadwal].jam;

                cout << "Masukkan ruangan kuliah: ";
                cin >> jadwal[jumlah_jadwal].ruangan;

                cout << "Masukkan mata kuliah: ";
                cin >> jadwal[jumlah_jadwal].matakuliah;

                cout << "Masukkan dosen: ";
                cin >> jadwal[jumlah_jadwal].dosen;

                jumlah_jadwal++;
            }
        }
        else if (pilihan == 2)
        {
            // Lihat jadwal
            if (jumlah_jadwal == 0)
            {
                cout << "Belum ada jadwal yang tersimpan." << endl;
            }
            else
            {
                cout << "Jadwal kuliah: " << endl;
                for (int i = 0; i < jumlah_jadwal; i++)
                {
                    cout << i + 1 << ". " << jadwal[i].hari << ", " << jadwal[i].jam << endl;
                    cout << "   Ruangan: " << jadwal[i].ruangan << endl;
                    cout << "   Mata kuliah: " << jadwal[i].matakuliah << endl;
                    cout << "   Dosen: " << jadwal[i].dosen << endl;
                    cout << endl;
                }
            }
        }
        else if (pilihan == 3)
        {
            // Keluar
            break;
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}
