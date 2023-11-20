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
    ID *ktp = new ID[jumlah];
    stok_ktp = jumlah;
    MENU:
    cout << "+-------------------------------------+\n";
    cout << " MENCETAK KTP \n";
    cout << "KTP yang sudah dibuat : " << cetak_ktp << endl;
    cout << "KTP yang tersisa : " << stok_ktp << endl;
    cout << " 1. Mencetak KTP \n";
    cout << " 2. Melihat KTP yang sudah dibuat \n";
    cout << " 3. Keluar \n";
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
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Kelurahan : ";
            cin >> ktp[cetak_ktp].kelurahan;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Kecamatan : ";
            cin >> ktp[cetak_ktp].kecamatan;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Agama : ";
            cin >> ktp[cetak_ktp].agama;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Status : ";
            cin >> ktp[cetak_ktp].status;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Pekerjaan : ";
            cin >> ktp[cetak_ktp].pekerjaan;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Kewarganegaraan : ";
            cin >> ktp[cetak_ktp].kewarganegaraan;
            system("cls");
            tampilan_menu_mencetakKTP();
            cout << "Masukkan Tanggal Berlaku Hingga : ";
            cin >> ktp[cetak_ktp].berlaku_hingga;
            system("cls");
            cetak_ktp++;
            stok_ktp--;
            goto MENU;
            break;
        case 2:
            if (cetak_ktp == 0)
            {
                cout << "Tidak ada KTP yang sudah dibuat" << endl;
                sleep(2);
                system("cls");
                goto MENU;
            }
            else
            {
                system("cls");
                tampilan_menu_melihatKTP();
                for (int i = 0; i < cetak_ktp; i++)
                {
                    cout << "KTP ke-" << i + 1 << endl;
                    cout << "NIK : " << ktp[i].nik << endl;
                    cout << "Nama : " << ktp[i].nama << endl;
                    cout << "TTL : " << ktp[i].ttl << endl;
                    cout << "Alamat : " << ktp[i].alamat << endl;
                    cout << "Jenis Kelamin : " << ktp[i].jk << endl;
                    cout << "Golongan Darah : " << ktp[i].gol_darah << endl;
                    cout << "RT : " << ktp[i].rt << endl;
                    cout << "RW : " << ktp[i].rw << endl;
                    cout << "Kelurahan : " << ktp[i].kelurahan << endl;
                    cout << "Kecamatan : " << ktp[i].kecamatan << endl;
                    cout << "Agama : " << ktp[i].agama << endl;
                    cout << "Status : " << ktp[i].status << endl;
                    cout << "Pekerjaan : " << ktp[i].pekerjaan << endl;
                    cout << "Kewarganegaraan : " << ktp[i].kewarganegaraan << endl;
                    cout << "Berlaku Hingga : " << ktp[i].berlaku_hingga << endl;
                    cout << "---------------------------------------" << endl;
            }
            sleep(5);
            system("cls");
            goto MENU;
            }
            break;
        case 3:
            return 0;   
    }
    return 0;
}