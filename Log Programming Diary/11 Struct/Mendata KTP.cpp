#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std;

int pilihan_menu, cetak_ktp = 0, banyak_ktp, stok_ktp, jumlah;
struct ID
{
    long long int nik;
    string nama;
    string alamat;
    string ttl;
    string jk;
    string gol_darah;
    int rt, rw;
    string kelurahan;
    string kecamatan;
    string agama;
    string status;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku_hingga;
};
void tampilan_menu_mencetakKTP()
{
    cout << "+-------------------------------------+\n";
    cout << "Menu 1: Mencetak KTP\n";
    cout << "+-------------------------------------+\n";
}
void tampilan_menu_melihatKTP()
{
    cout << "+-------------------------------------+\n";
    cout << "Menu 2: Melihat KTP yang sudah dibuat\n";
    cout << "+-------------------------------------+\n";
}
int main()
{
    cout << "Masukkan Jumlah KTP yang ingin dibuat : ";
    cin >> jumlah;
    ID ktp[jumlah];
    stok_ktp = jumlah;
MENU:
    cout << "+-------------------------------------+\n";
    cout << "             MENCETAK KTP              \n";
    cout << "KTP yang sudah dibuat : " << cetak_ktp << endl;
    cout << "KTP yang tersisa      : " << stok_ktp << endl;
    cout << "  1. Mencetak KTP                      \n";
    cout << "  2. Melihat KTP yang sudah dibuat     \n";
    cout << "  3. Keluar                            \n";
    cout << "+-------------------------------------+\n";
    cout << "Masukkan pilihan anda :\n>";
    cin >> pilihan_menu;
    switch (pilihan_menu)
    {
    case 1:
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan NIK : ";
        cin >> ktp[cetak_ktp].nik;
        system("cls");
        cin.ignore();
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Nama : ";
        getline(cin, ktp[cetak_ktp].nama);
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan TTL : ";
        getline(cin, ktp[cetak_ktp].ttl);
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Alamat : ";
        getline(cin, ktp[cetak_ktp].alamat);
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Jenis Kelamin : ";
        cin >> ktp[cetak_ktp].jk;
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Golongan Darah : ";
        cin >> ktp[cetak_ktp].gol_darah;
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan RT : ";
        cin >> ktp[cetak_ktp].rt;
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan RW : ";
        cin >> ktp[cetak_ktp].rw;
        cin.ignore();
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Kelurahan/desa : ";
        getline(cin, ktp[cetak_ktp].kelurahan);
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Kecamatan : ";
        getline(cin, ktp[cetak_ktp].kecamatan);
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Agama :\n";
        cout << "1. Islam\n";
        cout << "2. Kristen\n";
        cout << "3. Katolik\n";
        cout << "4. Hindu\n";
        cout << "5. Budha\n";
        cout << "6. Konghucu\n";
        cout << "7. Lainnya\n";
        cout << "Masukkan Pilihan : ";
        cin >> pilihan_menu;
        switch (pilihan_menu)
        {
        case 1:
            ktp[cetak_ktp].agama = "Islam";
            break;
        case 2:
            ktp[cetak_ktp].agama = "Kristen";
            break;
        case 3:
            ktp[cetak_ktp].agama = "Katolik";
            break;
        case 4:
            ktp[cetak_ktp].agama = "Hindu";
            break;
        case 5:
            ktp[cetak_ktp].agama = "Budha";
            break;
        case 6:
            ktp[cetak_ktp].agama = "Konghucu";
            break;
        case 7:
            ktp[cetak_ktp].agama = "Lainnya";
            break;
        default:
            cout << "Error: Pilihan menu tidak ada";
            getch();
            system("cls");
            goto MENU;
            break;
        }
        system("cls");
        tampilan_menu_mencetakKTP();
        cin.ignore();
        cout << "Masukkan Status :\n";
        cout << "1. Kawin\n";
        cout << "2. Belum Kawin\n";
        cout << "Masukkan Pilihan : ";
        switch (pilihan_menu)
        {
        case 1:
            ktp[cetak_ktp].status = "Kawin";
            break;
        case 2:
            ktp[cetak_ktp].status = "Belum Kawin";
            break;
        }
        cout << "Masukkan Pekerjaan : ";
        getline(cin, ktp[cetak_ktp].pekerjaan);
        cout << "Masukkan Kewarganegaraan : ";
        cout << "1. WNI\n";
        cout << "2. WNA\n";
        switch (pilihan_menu)
        {
        case 1:
            ktp[cetak_ktp].kewarganegaraan = "WNI";
            break;
        case 2:
            ktp[cetak_ktp].kewarganegaraan = "WNA";
            break;
        default:
            cout << "Error: Pilihan menu tidak ada";
            getch();
            system("cls");
            goto MENU;
            break;
        }
        system("cls");
        tampilan_menu_mencetakKTP();
        cout << "Masukkan Berlaku Hingga : ";
        cin >> ktp[cetak_ktp].berlaku_hingga;
        system("cls");
        cetak_ktp++;
        goto MENU;
        break;
    case 2:
        if (cetak_ktp == 0)
        {
            cout << "Belum ada KTP yang tercetak. . .\n";
            getch();
            system("cls");
            goto MENU;
        }
        else
        {
            system("cls");
            tampilan_menu_melihatKTP();
            cout << "KTP yang sudah dibuat :\n";
            for (int i; i < cetak_ktp; i++)
            {
                cout << i + 1 << ". " << ktp[i].nama << endl;
            }
            cout << "Pilih KTP yang ingin dilihat :\n";
            cin >> pilihan_menu;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "========================================================================\n";
            cout << "                               PROVINSI BANTEN         \n";
            cout << "                            KOTA TANGERANG SELATAN     \n";
            cout << "NIK               : " << ktp[pilihan_menu - 1].nik << endl;
            cout << "Nama              : " << ktp[pilihan_menu - 1].nama << endl;
            cout << "Tempat/Tgl Lahir  : " << ktp[pilihan_menu - 1].ttl << endl;
            cout << "Jenis Kelamin     : " << ktp[pilihan_menu - 1].jk << "    Gol. Darah :" << ktp[pilihan_menu - 1].gol_darah << endl;
            cout << "Alamat            : " << ktp[pilihan_menu - 1].alamat << endl;
            cout << "RT/RW             : " << ktp[pilihan_menu - 1].rt << "/" << ktp[pilihan_menu - 1].rw << endl;
            cout << "Kel/Desa          : " << ktp[pilihan_menu - 1].kelurahan << endl;
            cout << "Kecamatan         : " << ktp[pilihan_menu - 1].kecamatan << endl;
            cout << "Agama             : " << ktp[pilihan_menu - 1].agama << endl;
            cout << "Status Perkawinan : " << ktp[pilihan_menu - 1].status << endl;
            cout << "Pekerjaan         : " << ktp[pilihan_menu - 1].pekerjaan << endl;
            cout << "Kewarganegaraan   : " << ktp[pilihan_menu - 1].kewarganegaraan << endl;
            cout << "Berlaku Hingga    : " << ktp[pilihan_menu - 1].berlaku_hingga << endl;
            cout << "=========================================================================\n";
        }
        cout << "Tekan Enter untuk kembali ke menu utama";
        getch();
        system("cls");
        goto MENU;
        break;
    case 3:
        cout << "Terima kasih telah menggunakan program ini. . .\n";
        sleep(2);
        exit(0);
    default:
        cout << "Error: Pilihan menu tidak ada";
        getch();
        system("cls");
        goto MENU;
        break;
    }
}
