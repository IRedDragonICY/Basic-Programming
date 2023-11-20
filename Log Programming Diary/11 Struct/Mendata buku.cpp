#include <iostream>
#include <string>

using namespace std;

// Membuat struct Buku dengan field-field judul, penulis, penerbit,
// tahun terbit, jumlah halaman, dan harga
struct Buku
{
    string judul;
    string penulis;
    string penerbit;
    int tahun_terbit;
    int jumlah_halaman;
    double harga;
};

int main()
{
    // Membuat array of struct Buku dengan nama data_buku
    Buku data_buku[100];
    // Membuat variabel jumlah_buku untuk menyimpan jumlah buku yang telah diinput
    int jumlah_buku = 0;

    // Melakukan perulangan selama pilihan tidak sama dengan 3 (Keluar)
    int pilihan;
    do
    {
        // Menampilkan menu pilihan
        cout << "+------------------+" << endl;
        cout << "1 Mengisi buku" << endl;
        cout << "2 Melihat buku" << endl;
        cout << "3 Keluar" << endl;
        cout << "+------------------+" << endl;
        cout << "Masukkan pilihan: ";

        cin >> pilihan;
        // Memeriksa pilihan yang diambil pengguna
        switch (pilihan)
        {
        // Jika memilih opsi 1 (Mengisi buku)
        case 1:
            // Meminta pengguna untuk memasukkan data-data buku
            cout << "Masukkan judul buku: ";
            cin.ignore();
            getline(cin, data_buku[jumlah_buku].judul);
            cout << "Masukkan nama penulis: ";
            getline(cin, data_buku[jumlah_buku].penulis);
            cout << "Masukkan nama penerbit: ";
            getline(cin, data_buku[jumlah_buku].penerbit);
            cout << "Masukkan tahun terbit: ";
            cin >> data_buku[jumlah_buku].tahun_terbit;
            cout << "Masukkan jumlah halaman: ";
            cin >> data_buku[jumlah_buku].jumlah_halaman;
            cout << "Masukkan harga: ";
            cin >> data_buku[jumlah_buku].harga;
            // Menambahkan 1 ke jumlah_buku untuk menandakan bahwa ada buku baru yang telah ditambahkan
            jumlah_buku++;

            break;
        // Jika memilih opsi 2 (Melihat buku)
        case 2:
        {
            // Menampilkan data-data buku yang telah disimpan
            for (int i = 0; i < jumlah_buku; i++)
            {
                cout << "Judul: " << data_buku[i].judul << endl;
                cout << "Penulis: " << data_buku[i].penulis << endl;
                cout << "Penerbit: " << data_buku[i].penerbit << endl;
                cout << "Tahun Terbit: " << data_buku[i].tahun_terbit << endl;
                cout << "Jumlah Halaman: " << data_buku[i].jumlah_halaman << endl;
                cout << "Harga: " << data_buku[i].harga << endl
                     << endl;
            }
            break;
        }
        }
    } while (pilihan != 3);

    return 0;
}
