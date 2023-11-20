/* File program prak12-5 */
#include <iostream>
using namespace std;
int main()
{
    struct biodata
    {
        // tipe data dan variabel dikumpulkan disini
        char nama[30], hobi[40], asal[20], sekolah[30];
        int umur, status;
    };
    biodata bio;
    // Input menggunakan struct
    cout << "Masukkan Nama Anda      : ";
    cin.getline(bio.nama, 30);
    cout << "Masukkan Hobi Anda      : ";
    cin.getline(bio.hobi, 40);
    cout << "Masukkan umur Anda      : ";
    cin >> bio.umur;
    cout << "Masukkan kota asal Anda : ";
    cin >> bio.asal;
    cout << "Masukkan sekolah Anda   : ";
    cin >> bio.sekolah;
    cout << "Masukkan status Anda    (1 apabila single, 2 apabila double) :";
    cin >> bio.status;

    // Output menggunakan struct
    cout << "\nData Kamu" << endl;
    cout << "==============================" << endl;
    cout << "Nama saya " << bio.nama << "." << endl;
    cout << "Hobi saya adalah " << bio.hobi << "." << endl;
    cout << "Saya berusia " << bio.umur << "." << endl;
    cout << "Saya berasal dari kota" << bio.asal << "." << endl;
    if (bio.status == 1)
    {
        cout << "Saya ini saya masih single" << endl;
    }
    else
    {
        cout << "Maaf, sudah ada yang punya" << endl;
    }
    return 0;
}