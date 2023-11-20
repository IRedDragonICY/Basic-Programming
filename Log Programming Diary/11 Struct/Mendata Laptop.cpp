#include <iostream>
#include <string>

using namespace std;

const int MAX_LAPTOP = 10;

struct Laptop
{
    string merk;
    string processor;
    int memory;
    int storage;
};

int main()
{
    Laptop laptop[MAX_LAPTOP];
    int jumlah_laptop = 0;

    while (true)
    {
        cout << "Menu: " << endl;
        cout << "1. Tambah laptop" << endl;
        cout << "2. Lihat laptop" << endl;
        cout << "3. Beli laptop" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Tambah laptop
            if (jumlah_laptop >= MAX_LAPTOP)
            {
                cout << "Maaf, stok laptop sudah penuh!" << endl;
            }
            else
            {
                cout << "Masukkan merk laptop: ";
                cin >> laptop[jumlah_laptop].merk;

                cout << "Masukkan processor laptop: ";
                cin >> laptop[jumlah_laptop].processor;

                cout << "Masukkan jumlah memory laptop: ";
                cin >> laptop[jumlah_laptop].memory;

                cout << "Masukkan jumlah storage laptop: ";
                cin >> laptop[jumlah_laptop].storage;

                jumlah_laptop++;
            }
        }
        else if (pilihan == 2)
        {
            // Lihat laptop
            if (jumlah_laptop == 0)
            {
                cout << "Belum ada laptop yang tersedia." << endl;
            }
            else
            {
                for (int i = 0; i < jumlah_laptop; i++)
                {
                    cout << "Laptop ke-" << i + 1 << ": " << endl;
                    cout << "Merk: " << laptop[i].merk << endl;
                    cout << "Processor: " << laptop[i].processor << endl;
                    cout << "Memory: " << laptop[i].memory << " GB" << endl;
                    cout << "Storage: " << laptop[i].storage << " GB" << endl;
                    cout << endl;
                }
            }
        }
        else if (pilihan == 3)
        {
            // Beli laptop
            if (jumlah_laptop == 0)
            {
                cout << "Tidak ada laptop yang bisa dibeli." << endl;
            }
            else
            {
                cout << "Masukkan nomor laptop yang ingin dibeli: ";
                int nomor_laptop;
                cin >> nomor_laptop;

                if (nomor_laptop < 1 || nomor_laptop > jumlah_laptop)
                {
                    cout << "Nomor laptop tidak valid." << endl;
                }
                else
                {
                    // Hapus laptop yang dipilih
                    for (int i = nomor_laptop - 1; i < jumlah_laptop - 1; i++)
                    {
                        laptop[i] = laptop[i + 1];
                    }
                    jumlah_laptop--;
                    cout << "Laptop berhasil dibeli." << endl;
                }
            }
        }
        else if (pilihan == 4)
        {
            // Keluar
            break;
        }
        else
        {
            cout << "Pilihan tidak valid." << endl;
        }
    }
}