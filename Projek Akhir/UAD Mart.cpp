#include <iostream>
#include <windows.h>
#include <fstream>
#include <conio.h>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <ctime>
using namespace std;

fstream file;
struct akun{
    int no_akun;
    string nama,password;
}; akun akun[100];

struct barang{
    int no,harga,stok;
    string nama,kategori;
}; barang barang[100];
struct transaksi{
    int nostruk,total;
    string tanggal;
    struct barang
    {
        string nama; // isi nama barang akan diambil dari barang.txt
        int harga,qty;
    };barang barang[100]; 
};transaksi transaksi[100];
struct keranjangbarang{
    int no,qty;
}; keranjangbarang keranjang[100];
// menu
void inisialisasi_file();
void menu_register();
void menu_akun();
void menu_login();
void menu();
void menu_pembeli();
void menu_penjual();
void tampilan_menu();
void menampilkan_barang();
void menambahkan_barang();
void mengedit_barang();
void menghapus_barang();
void melihat_histori_transaksi();
void melihat_analisis_penjualan();
void melihat_laporan_keuangan();
void cek_no_akun();
void cek_no_barang();
void keluar();


int main()
{    
    inisialisasi_file();
    menu();
}

void tampilan_menu()
{
cout<<"+====================================================================+"<<endl;
cout<<"|  __   __  _______  ______     __   __  _______  ______    _______  |"<<endl;
cout<<"| |  | |  ||   _   ||      |   |  |_|  ||   _   ||    _ |  |       | |"<<endl;
cout<<"| |  | |  ||  |_|  ||  _    |  |       ||  |_|  ||   | ||  |_     _| |"<<endl;
cout<<"| |  |_|  ||       || | |   |  |       ||       ||   |_||_   |   |   |"<<endl;
cout<<"| |       ||       || |_|   |  |       ||       ||    __  |  |   |   |"<<endl;
cout<<"| |       ||   _   ||       |  | ||_|| ||   _   ||   |  | |  |   |   |"<<endl;
cout<<"| |_______||__| |__||______|   |_|   |_||__| |__||___|  |_|  |___|   |"<<endl;
cout<<"|                                                                    |"<<endl;
cout<<"+====================================================================+"<<endl;
}


void inisialisasi_file()
{
    // mengecek apakah akun.dat sudah dibuat
    file.open("akun.dat");
    if (!file)
    {
        file.close();
        file.open("akun.dat", ios::out);
    }
    file.close();
    // mengecek apakah barang.txt sudah dibuat
    file.open("barang.txt");
    if (!file)
    {
        file.close();
        file.open("barang.txt", ios::out);
    }
    file.close();
    // mengecek apakah transaksi.txt sudah dibuat
    file.open("transaksi.txt");
    if (!file)
    {
        file.close();
        file.open("transaksi.txt", ios::out);
    }
    file.close();
    // mengecek apakah keranjang.txt sudah dibuat
    file.open("keranjang.txt");
    if (!file)
    {
        file.close();
        file.open("keranjang.txt", ios::out);
    }
    file.close();
}
void cek_no_akun(int i)
{
    // mengecek nomor akun
    file.open("akun.dat");
    while (!file.eof())
    {
        file>>akun[i].no_akun;
        file>>akun[i].nama;
        file>>akun[i].password;
        i++;
    }
    i--;
    file.close();
}

void menu_register()
{
    // menentukan akun yang sudah di buat di akun.dat, disini akan menentukan penomoran array
    file.open("akun.dat");
    int i=0;
    // membaca akun.dat, menentukan akun yang sudah di buat di akun.dat, disini akan menentukan penomoran array jika sudah di buat akan digunakan array berikutnya
    while (!file.eof())
    {
        file>>akun[i].no_akun;
        file>>akun[i].nama;
        file>>akun[i].password;
        i++;
    }
    i--;
    file.close();
    // input data akun
    // nomor akun akan sesuai dengan data akun yang dibikin
    akun[i].no_akun=i+1;
    cout<<"Masukkan nama : ";
    getline(cin,akun[i].nama);
    // mengubah nama ke hexadecimal
    cout<<"Masukkan password : ";
    cin>>akun[i].password;
    // cout<<"Masukkan ulang password : ";
    // mengubah nama dan password ke hexadesimal
    for (int j = 0; j < akun[i].nama.length(); j++)
    {
        akun[i].nama[j]=akun[i].nama[j]+1;
    }
    for (int j = 0; j < akun[i].password.length(); j++)
    {
        akun[i].password[j]=akun[i].password[j]+1;
    }
    file.open("akun.dat",ios::app);
    // memasukkan data ke akun.dat,jika data sebelumnya sudah ada maka akan ditambahkan
    file<<akun[i].no_akun<<" "<<akun[i].nama<<" "<<akun[i].password<<endl;
    file.close();
    cout<<"Akun sudah terbuat . . (Tekan enter untuk lanjut)";
    cin.ignore();
    while (true)
    {
        if (kbhit())
        {
            if (getch()==13)
            {
                system("cls");
                menu_akun();
                break;
            }
        }
    }
}

void menu_login()
{
    // menampilkan nama dan password sementara
    // mengambil data dari akun.dat
    // menaruh semua data dari akun.dat ke struct akun
    file.open("akun.dat",ios::in);
    int i=0;
    while (!file.eof())
    {
        file>>akun[i].no_akun;
        file>>akun[i].nama;
        file>>akun[i].password;
        i++;
    }
    i--;
    // mengubah hexadesimal ke string
    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < akun[j].nama.length(); k++)
        {
            akun[j].nama[k]=akun[j].nama[k]-1;
        }
        for (int k = 0; k < akun[j].password.length(); k++)
        {
            akun[j].password[k]=akun[j].password[k]-1;
        }
    }
    string nama,password;
    cout<<"Nama     : ";
    getline(cin,nama);
    cout<<"Password : ";
    cin>>password;
    cin.ignore();
    // mengecek password apakah sama dari database
    for (int j=0;j<i;j++)
    {
        if (nama==akun[j].nama)
        {
            if (password==akun[j].password)
            {
                cout<<"Login berhasil . . (Tekan enter untuk lanjut)";
                while (true)
                {
                    if (kbhit())
                    {
                        if (getch()==13)
                        {
                            // disini menampilkan nama sesuai  
                            system("cls");
                            cout<<"Halo "<<akun[j].nama<<endl;
                            sleep(2);
                            system("cls");
                            menu_penjual();
                            break;
                        }
                    }
                }
            }
            else
            {
                cout<<"Password salah . . (Tekan enter untuk lanjut)";
                while (true)
                {
                    if (kbhit())
                    {
                        if (getch()==13)
                        {
                            system("cls");
                            menu_akun();
                            break;
                        }
                    }
                }
            }
        }
    }


    getch();
}
void menu_akun()
{
    bool menu_highlight[3]={true,false,false};
    while (true)
    {
        tampilan_menu();
        if (menu_highlight[0])
            cout<<"> ";
        cout<<"Login"<<endl;
        if (menu_highlight[1])
            cout<<"> ";
        cout<<"Register"<<endl;
        if (menu_highlight[2])
            cout<<"> ";
        cout<<"Kembali"<<endl;
        // cek input keyboard
        char input;
        input=getch();
        // panah ke bawah dan ke atas, jika sudah mentok atas atau ke bawah, maka tidak bisa diganti
        if (input==80)
        {
            if (menu_highlight[0])
            {
                menu_highlight[0]=false;
                menu_highlight[1]=true;
            }
            else if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[2]=true;
            }
        }
        else if (input==72)
        {
            if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[0]=true;
            }
            else if (menu_highlight[2])
            {
                menu_highlight[2]=false;
                menu_highlight[1]=true;
            }
        }
        // saat menu kehighlight, tekan enter untuk memilih
        if (input==13)
        {
            if (menu_highlight[0])
            {
                system("cls");
                cout<<"Login"<<endl;
                menu_login();
            }
            else if (menu_highlight[1])
            {
                system("cls");
                cout<<"Register"<<endl;
                menu_register();
                break;
            }
            else if (menu_highlight[2])
            {
                system("cls");
                menu();
                break;
            }
        }
        system("cls");
    }
}

void menu()
{
    bool menu_highlight[3]={true,false,false};
    while (true)
    {
        tampilan_menu();
        if (menu_highlight[0])
            cout<<"> ";
        cout<<"Pegawai"<<endl;
        if (menu_highlight[1])
            cout<<"> ";
        cout<<"Pembeli"<<endl;
        if (menu_highlight[2])
            cout<<"> ";
        cout<<"Keluar"<<endl;
        // cek input keyboard
        char input;
        input=getch();
        // panah ke bawah dan ke atas, jika sudah mentok atas atau ke bawah, maka tidak bisa diganti
        if (input==80)
        {
            if (menu_highlight[0])
            {
                menu_highlight[0]=false;
                menu_highlight[1]=true;
            }
            else if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[2]=true;
            }
        }
        else if (input==72)
        {
            if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[0]=true;
            }
            else if (menu_highlight[2])
            {
                menu_highlight[2]=false;
                menu_highlight[1]=true;
            }
        }
        // saat menu kehighlight, tekan enter untuk memilih
        system ("cls");
        if (input==13)
        {
            if (menu_highlight[0])
            {
                menu_akun();
                break;
            }
            else if (menu_highlight[1])
            {
                menu_pembeli();
                break;
            }
            else if (menu_highlight[2])
            {
                cout<<"Terima kasih telah menggunakan program ini . .";
                
                sleep(2);
                keluar();
                break;
            }
        }
    }
}
// fungsi-fungsi untuk penjual
void menu_penjual()
{
    // panah ke bawah dan ke atas, jika sudah mentok atas atau ke bawah, maka tidak bisa diganti
    bool menu_highlight[6]={true,false,false,false,false,false};
    while (true)
    {
        system("cls");
        tampilan_menu();
        if (menu_highlight[0])
            cout<<"> ";
        cout<<"Menampilkan barang"<<endl;
        if (menu_highlight[1])
            cout<<"> ";
        cout<<"Menambahkan barang"<<endl;
        if (menu_highlight[2])
            cout<<"> ";
        cout<<"Mengedit barang"<<endl;
        if (menu_highlight[3])
            cout<<"> ";
        cout<<"Menghapus barang"<<endl;
        if (menu_highlight[4])
            cout<<"> ";
        cout<<"Melihat histori transaksi"<<endl;
        if (menu_highlight[5])
            cout<<"> ";
        cout<<"Melihat Analisis Penjualan"<<endl;
        if (menu_highlight[6])
            cout<<"> ";
        cout<<"Melihat Laporan Keuangan"<<endl;
        if (menu_highlight[7])
            cout<<"> ";
        cout<<"Logout"<<endl;
        // saat input
        char input;
        input=getch();
        // panah ke bawah dan ke atas, jika sudah mentok atas atau ke bawah, maka tidak bisa diganti
        if (input==80)
        {
            if (menu_highlight[0])
            {
                menu_highlight[0]=false;
                menu_highlight[1]=true;
            }
            else if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[2]=true;
            }
            else if (menu_highlight[2])
            {
                menu_highlight[2]=false;
                menu_highlight[3]=true;
            }
            else if (menu_highlight[3])
            {
                menu_highlight[3]=false;
                menu_highlight[4]=true;
            }
            else if (menu_highlight[4])
            {
                menu_highlight[4]=false;
                menu_highlight[5]=true;
            }
            else if (menu_highlight[5])
            {
                menu_highlight[5]=false;
                menu_highlight[6]=true;
            }
            else if (menu_highlight[6])
            {
                menu_highlight[6]=false;
                menu_highlight[7]=true;
            }
        }
        else if (input==72)
        {
            if (menu_highlight[1])
            {
                menu_highlight[1]=false;
                menu_highlight[0]=true;
            }
            else if (menu_highlight[2])
            {
                menu_highlight[2]=false;
                menu_highlight[1]=true;
            }
            else if (menu_highlight[3])
            {
                menu_highlight[3]=false;
                menu_highlight[2]=true;
            }
            else if (menu_highlight[4])
            {
                menu_highlight[4]=false;
                menu_highlight[3]=true;
            }
            else if (menu_highlight[5])
            {
                menu_highlight[5]=false;
                menu_highlight[4]=true;
            }
            else if (menu_highlight[6])
            {
                menu_highlight[6]=false;
                menu_highlight[5]=true;
            }
            else if (menu_highlight[7])
            {
                menu_highlight[7]=false;
                menu_highlight[6]=true;
            }
        }
        // saat menu kehighlight, tekan enter untuk memilih
        system ("cls");
        if (input==13)
        {
            if (menu_highlight[0])
            {
                menampilkan_barang();
                break;
            }
            else if (menu_highlight[1])
            {
                menambahkan_barang();
                break;
            }
            else if (menu_highlight[2])
            {
                mengedit_barang();
                break;
            }
            else if (menu_highlight[3])
            {
                menghapus_barang();
                break;
            }
            else if (menu_highlight[4])
            {
                melihat_histori_transaksi();
                break;
            }
            else if (menu_highlight[5])
            {
                melihat_analisis_penjualan();
                break;
            }
            else if (menu_highlight[6])
            {
                melihat_laporan_keuangan();
                break;
            }
            else if (menu_highlight[7])
            {
                menu();
                break;
            }
        }
    }
}
void menampilkan_barang()
{
    // memasukkan data barang dari file ke array
    file.open("barang.txt",ios::in);
    for (int i=0;i<100;i++)
    {
        file>>barang[i].no;
        file>>barang[i].nama;
        file>>barang[i].harga;
        file>>barang[i].stok;
        file>>barang[i].kategori;
    }
    file.close();

    // Menampilkan barang yang ada di UAD MART  dengan format tabel, jika kosong maka tidak ditampilkan, dan sebaliknya jika ada barang maka akan ditampilkan. Menggunakan iomanip
    // jika semua barang kosong maka akan menampilkan pesan "Tidak ada barang yang tersedia"
    if (barang[0].nama=="")
    {
        cout<<"Tidak ada barang yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    else
    {
        // menggunakan iomanip untuk membuat tabel
        cout<<setiosflags(ios::left)<<setw(20)<<"Nama Barang"<<setw(20)<<"Harga"<<setw(20)<<"Stok"<<endl;
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama!="")
                cout<<setiosflags(ios::left)<<setw(20)<<barang[i].nama<<setw(20)<<barang[i].harga<<setw(20)<<barang[i].stok<<endl;
        }
    }
    cout<<"Tekan enter untuk kembali ke menu";
    getch();
    menu_penjual();
}
void menambahkan_barang()
{
    int i=0;
    int jumlah_barang;
    cek_no_akun(i);
    cout<<"Masukkan banyak barang yang ingin ditambahkan: ";
    cin>>jumlah_barang;
    for (int j=0;j<jumlah_barang;j++)
    {
        barang[i].no=i+1;
        cout<<"Masukkan nama barang: ";
        cin>>barang[i].nama;
        cout<<"Masukkan harga barang: ";
        cin>>barang[i].harga;
        cout<<"Masukkan stok barang: ";
        cin>>barang[i].stok;
        cout<<"Masukkan kategori barang: ";
        cin>>barang[i].kategori;
        i++;
    }
    cout<<"Tekan enter untuk kembali ke menu";
    getch();
    // memasukkan data barang ke dalam file
    i=0;
    cek_no_akun(i);
    file.open("barang.txt",ios::app);
    for (int j=0;j<jumlah_barang;j++)
    {
        file<<barang[i].nama<<endl;
        file<<barang[i].harga<<endl;
        file<<barang[i].stok<<endl;
        file<<barang[i].kategori<<endl;
    }
    file.close();
    menu_penjual();
}
void mengedit_barang()
{
    // input data barang dari file ke array
    file.open("barang.txt",ios::in);
    for (int i=0;i<100;i++)
    {
        file>>barang[i].no;
        file>>barang[i].nama;
        file>>barang[i].harga;
        file>>barang[i].stok;
        file>>barang[i].kategori;
    }
    file.close();
    // jika semua barang kosong maka akan menampilkan pesan "Tidak ada barang yang tersedia"
    if (barang[0].nama=="")
    {
        cout<<"Tidak ada barang yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    
    else
    {
        // menampilkan barang-barang dengan format tabel dengan 2 kolom.  Isinya no dan nama saja. Ada dua bagian, dengan array 2 dimensi. isinya no | nama barang | no | nama barang | , hanya dua kolom ke bawah, agar tidak panjang makanya dibagi dua kolom. Menggunakan iomanip
        cout<<setiosflags(ios::left)<<setw(20)<<"No"<<setw(20)<<"Nama Barang"<<endl;   
    }
}
void menghapus_barang()
{
    // mengecek apakah ada barang yang tersedia atau tidak
    if (barang[0].nama=="")
    {
        cout<<"Tidak ada barang yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    else
    {
        // menampilkan no dan nama barang, menggunakan iomanip, nanti akan memilih barang mana yang akan dihapus
        cout<<setiosflags(ios::left)<<setw(20)<<"No"<<setw(20)<<"Nama Barang"<<endl;
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama!="")
                cout<<setiosflags(ios::left)<<setw(20)<<barang[i].no<<setw(20)<<barang[i].nama<<endl;
        }
        int pil;
        cout<<"Masukkan nomor barang yang ingin dihapus: ";
        cin>>pil;
        // menghapus barang yang dipilih
        for (int i=0;i<100;i++)
        {
            if (barang[i].no==pil)
            {
                barang[i].no=0;
                barang[i].nama="";
                barang[i].harga=0;
                barang[i].stok=0;
                barang[i].kategori="";
            }
        }
        // menukar barang yang dihapus dengan barang yang paling belakang dan seterusnya
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama=="")
            {
                barang[i].no=barang[i+1].no;
                barang[i].nama=barang[i+1].nama;
                barang[i].harga=barang[i+1].harga;
                barang[i].stok=barang[i+1].stok;
                barang[i].kategori=barang[i+1].kategori;
            }
        }
        // menghapus barang yang paling belakang
        // mencetak data barang yang sudah dihapus ke dalam file
        file.open("barang.txt",ios::out);
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama!="")
            {
                file<<barang[i].no<<endl;
                file<<barang[i].nama<<endl;
                file<<barang[i].harga<<endl;
                file<<barang[i].stok<<endl;
                file<<barang[i].kategori<<endl;
            }
        }
        file.close();
        cout<<"Barang berhasil dihapus"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
}
void melihat_histori_transaksi()
{
    
    // input data transaksi, sesuai struct transaksi dari file ke array
    file.open("transaksi.txt",ios::in);
    // jika tidak ada transaksi maka akan menampilkan pesan "Tidak ada transaksi yang tersedia"
    // yaitu struct transaksi{
    //     int nostruk,total;
    //     string tanggal;
    //     struct barang
    //     {
    //         string nama; // isi nama barang akan diambil dari barang.txt
    //         int harga,qty;
    //     };barang barang[100]; 
    // };transaksi transaksi[100];
    int i=0;
    while (!file.eof())
    {
        file>>transaksi[i].nostruk;
        file>>transaksi[i].tanggal;
        int j=0;
        while (transaksi[i].barang[j].nama!="")
        {
            file>>transaksi[i].barang[j].nama;
            file>>transaksi[i].barang[j].harga;
            file>>transaksi[i].barang[j].qty;
            j++;
        }
        file>>transaksi[i].total;
        i++;
    }
    if (transaksi[0].nostruk==0)
    { 
        cout<<"Tidak ada transaksi yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    else
    {
        cout<<setiosflags(ios::left)<<setw(20)<<"No Struk"<<setw(20)<<"Tanggal"<<setw(20)<<"No Barang"<<setw(20)<<"Nama Barang"<<setw(20)<<"Harga"<<setw(20)<<"Jumlah"<<setw(20)<<"Total"<<endl;
        for (int i=0;i<100;i++)
        {
            if (transaksi[i].nostruk!=0)
            {
                cout<<setiosflags(ios::left)<<setw(20)<<transaksi[i].nostruk<<setw(20)<<transaksi[i].tanggal<<setw(20)<<transaksi;
            }
        }
    }
}
void melihat_analisis_penjualan()
{
    // input data transaksi dari file ke array
    file.open("transaksi.txt",ios::in);
    int i=0;
    while (!file.eof())
    {
        file>>transaksi[i].nostruk;
        file>>transaksi[i].tanggal;
    }
    file.close();
    // jika tidak ada transaksi maka akan menampilkan pesan "Tidak ada transaksi yang tersedia"
    if (transaksi[0].nostruk==0)
    {
        cout<<"Tidak ada transaksi yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    // analisis dari transaksi.txt yang sudah ada
    cout<<"Analisis penjualan"<<endl;
    // hasilnya akan menggunakan dan iomanip, isinya no dan keterangan
    // 1 Barang yang terjual paling banyak
    // mengecek barang yang terjual paling banyak
   
    cout<<"Barang yang terjual paling banyak adalah: "<<endl;
    // mengurutkan sementara menggunakan array 2 dimensi
    int temp[100][100];
    // menampilkan barang yang terjual paling banyak dari banyak ke sedikit sesuai qty di transaksi.txt
    cout<<"Barang yang terjual paling sedikit adalah: "<<endl;
    for (int i=0;i<100;i++)
    {
        for (int j=0;j<100;j++)
        {
            if (temp[i][j]>0)
            {
                cout<<setiosflags(ios::left)<<setw(20)<<barang[i].nama<<setw(20)<<temp[i][j]<<endl;
            }
        }
    }
    
    cout<<"Tekan enter untuk kembali ke menu";
    getch();
    menu_penjual();
}
void melihat_laporan_keuangan()
{
    cout<<"Laporan keuangan"<<endl;
    // input data transaksi, isi transaksi sesuai dengan struct transaksi dari file ke array
    // struct transaksi{
    // int nostruk,total;
    // string tanggal;
    // struct barang
    // {
    //     string nama; // isi nama barang akan diambil dari barang.txt
    //     int harga,qty;

    // };barang barang[100]; 
    file.open("transaksi.txt",ios::in);
    for (int i=0;i<100;i++)
    {
        file>>transaksi[i].nostruk;
        file>>transaksi[i].tanggal;
        file>>transaksi[i].total;
        for (int j=0;j<100;j++)
        {
            file>>transaksi[i].barang[j].nama;
            file>>transaksi[i].barang[j].harga;
            file>>transaksi[i].barang[j].qty;
        }
    }
    file.close();
    // jika tidak ada transaksi maka akan menampilkan pesan "Tidak ada transaksi yang tersedia"
    if  (transaksi[0].nostruk==0)
    {
        cout<<"Tidak ada transaksi yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_penjual();
    }
    // menghitung total pendapatan dari transaksi.txt
    int total=0;
    for (int i=0;i<100;i++)
    {
        total=total+transaksi[i].total;
    }
    cout<<"Total pendapatan: "<<total<<endl;
    cout<<"Tekan enter untuk kembali ke menu";
    getch();
    menu_penjual();
}
void melihat_daftar_barang()
{
    // menampilkan daftar barang yang ada di file barang.txt
    file.open("barang.txt",ios::in);
    int i=0;
    while (!file.eof())
    {
        file>>barang[i].no;
        file>>barang[i].nama;
        file>>barang[i].harga;
        file>>barang[i].stok;
        file>>barang[i].kategori;
        i++;
    }
    file.close();
    // jika tidak ada barang maka akan menampilkan pesan "Tidak ada barang yang tersedia"
    if (barang[0].nama=="")
    {
        cout<<"Tidak ada barang yang tersedia"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_pembeli();
    }
    else
    {
        cout<<"Daftar barang"<<endl;
        cout<<setiosflags(ios::left)<<setw(20)<<"No"<<setw(20)<<"Nama"<<setw(20)<<"Harga"<<setw(20)<<"Stok"<<setw(20)<<"Kategori"<<endl;
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama!="")
            {
                cout<<setiosflags(ios::left)<<setw(20)<<barang[i].no<<setw(20)<<barang[i].nama<<setw(20)<<barang[i].harga<<setw(20)<<barang[i].stok<<setw(20)<<barang[i].kategori<<endl;
            }
        }
        cout<<"Pilih barang yang ingin dibeli"<<endl;
        cout<<"Masukkan nomor barang: ";
        int no,jml;
        cin>>no;
        cout<<"Masukkan jumlah barang: ";
        cin>>jml;
        int i=0;
        // mengecek barang ke berapa untuk penomoran barang di struct keranjang
        while (keranjang[i].no!=0)
        {
            i++;
        }
        // jika ada no barang yang sama maka akan menambahkan qty
        for (int j=0;j<100;j++)
        {
            if (keranjang[j].no==no)
                keranjang[j].qty+=jml;
        }
        // menaruh ke struct keranjang, penomoran barang sesuai nomor barang yang belum terisi
        keranjang[i].no=no;
        keranjang[i].qty=jml;
        // menghapus isi file keranjang.txt  jika no barang yang sama
        // dan menulis ulang isi file keranjang.txt
        // menghapus array jika ada no barang yang sama, agar tidak terjadi duplikasi
        file.open("keranjang.txt",ios::out);
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no!=0)
            {
                file<<keranjang[i].no<<endl;
                file<<keranjang[i].qty<<endl;
            }
        }
        file.close();
        // menghapus isi array keranjang jika ada no barang yang sama, agar tidak terjadi duplikasi
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no==no)
                keranjang[i].no=0;
        }
        // mengurangi stok barang di file barang.txt
        for (int i=0;i<100;i++)
        {
            if (barang[i].no==no)
                barang[i].stok=barang[i].stok-jml;
        }
        // mengupdate stok barang di file barang.txt
        file.open("barang.txt",ios::out);
        for (int i=0;i<100;i++)
        {
            if (barang[i].nama!="")
            {
                file<<barang[i].no<<endl;
                file<<barang[i].nama<<endl;
                file<<barang[i].harga<<endl;
                file<<barang[i].stok<<endl;
                file<<barang[i].kategori<<endl;
            }
        }
        file.close();
        // menampilkan pesan barang berhasil dimasukkan ke keranjang
        cout<<"Barang berhasil dimasukkan ke keranjang"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_pembeli();
    }
}

void melihat_keranjang()
{
    cout<<"Keranjang"<<endl;
    // melihat isi keranjang.txt
    file.open("keranjang.txt",ios::in);
    int i=0;
    while (!file.eof())
    {
        file>>keranjang[i].no;
        file>>keranjang[i].qty;
        i++;
    }
    // memasukkan isi keranjang.txt ke struct keranjangbarang
    file.close();
    // jika tidak ada barang maka akan menampilkan pesan "Keranjang kosong"
    if (keranjang[0].no==0)
    {
        cout<<"Keranjang kosong"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_pembeli();
    }
    // menampilkan isi keranjang yang sudah diisikan, nama barang dibandingkan dari keranjangbarang.no dengna struct barang
    else
    {
        // tampilan struk sesuai dengan isi keranjangbarang
        cout<<setiosflags(ios::left)<<setw(20)<<"No"<<setw(20)<<"Nama"<<setw(20)<<"Harga"<<setw(20)<<"Qty"<<endl;
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no!=0)
            {
                // isi dari struct keranjang, nama berdasarkan nomor barang
                for (int j=0;j<100;j++)
                {
                    if (barang[j].no==keranjang[i].no)
                    {
                        cout<<setiosflags(ios::left)<<setw(20)<<barang[j].no<<setw(20)<<barang[j].nama<<setw(20)<<barang[j].harga<<setw(20)<<keranjang[i].qty<<endl;
                    }
                }
            }
        }
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_pembeli();
    }
}
void melakukan_transaksi()
{
    cout<<"Transaksi"<<endl;
    // melihat isi keranjang.txt
    file.open("keranjang.txt",ios::in);
    int i=0;
    while (!file.eof())
    {
        file>>keranjang[i].no;
        file>>keranjang[i].qty;
        i++;
    }
    file.close();
    // jika tidak ada barang maka akan menampilkan pesan "Keranjang kosong"
    if (keranjang[0].no==0)
    {
        cout<<"Keranjang kosong, Anda tidak bisa melakukan transaksi"<<endl;
        cout<<"Tekan enter untuk kembali ke menu";
        getch();
        menu_pembeli();
    }
    // mengurangi stok barang yang dibeli
    else
    {
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no!=0)
            {
                for (int j=0;j<100;j++)
                {
                    if (keranjang[i].no==barang[j].no)
                    {
                        barang[j].stok=barang[j].stok-keranjang[i].qty;
                    }
                }
            }
        }
        // mengosongkan isi struct keranjang
        for (int i=0;i<100;i++)
        {
            keranjang[i].no=0;
            keranjang[i].qty=0;
        }
        // menulis ulang isi struct keranjang ke keranjang.txt
        file.open("keranjang.txt",ios::out);
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no!=0)
            {
                file<<keranjang[i].no<<" "<<keranjang[i].qty<<endl;
            }
        }
        file.close();
        // mengambil data dari struct barang dan menaruhnya ke struct transaksi
        // membandingkan dengan isi
        //         struct transaksi{
        //     int nostruk,total;
        //     string tanggal;
        //     struct barang
        //     {
        //         string nama; // isi nama barang akan diambil dari barang.txt
        //         int harga,qty;

        //     };barang barang[100]; 
        // };transaksi transaksi[100];
        
        for (int i=0;i<100;i++)
        {
            if (keranjang[i].no!=0)
            {
                for (int j=0;j<100;j++)
                {
                    if (keranjang[i].no==barang[j].no)
                    {
                        transaksi[0].barang[i].nama=barang[j].nama;
                        transaksi[0].barang[i].harga=barang[j].harga;
                        transaksi[0].barang[i].qty=keranjang[i].qty;
                    }
                }
            }
        }
        // menampilkan struk transaksi seperti struk indomaret, tetapi ini adalah UAD MART
        // agar rapih menggunakan iomanip
        cout<<"=============================================="<<endl;
        // menampilkan no struk dari struct transaksi
        cout<<"No Struk: "<<transaksi[0].nostruk<<endl;
        // waktu menggunakan ctime
        time_t now = time(0);
        char* dt = ctime(&now);
        cout<<"Tanggal : "<<dt<<endl;
        // menampilkan isi keranjang
        // menggunakan setw untuk menentukan lebar kolom
        cout<<setiosflags(ios::left)<<setw(20)<<"No"<<setw(20)<<"Nama"<<setw(20)<<"Harga"<<setw(20)<<"Qty"<<endl;
        for (int i=0;i<100;i++)
        {
            if (transaksi[0].barang[i].nama!="")
                cout<<setiosflags(ios::left)<<setw(20)<<i+1<<setw(20)<<transaksi[0].barang[i].nama<<setw(20)<<transaksi[0].barang;
        }
        cout<<"Terima kasih telah berbelanja di UAD MART"<<endl;
        // menampilkan pesan transaksi berhasil
        cout<<"Transaksi berhasil"<<endl;
    }
}
// bagian menu pembeli
void menu_pembeli()
{
    system("cls");
    cout<<"Menu Pembeli"<<endl;
    cout<<"1. Melihat daftar barang"<<endl;
    cout<<"2. Melihat keranjang"<<endl;
    cout<<"3. Melakukan transaksi"<<endl;
    int pil;
    cout<<"Masukkan pilihan: ";
    cin>>pil;
    switch (pil)
    {
        case 1:
            melihat_daftar_barang();
            break;;
        case 2:
            melihat_keranjang();
            break;
        case 3:
            melakukan_transaksi();
            keluar();
            break;
        default:
            cout<<"Pilihan tidak tersedia"<<endl;
            cout<<"Tekan enter untuk kembali ke menu";
            getch();
            menu_pembeli();
            break;
    }
}

void keluar()
{
    // menghapus memori yang tersisa menggunakan pointer
    delete [] barang;
    delete [] keranjang;
    delete [] transaksi;
    exit(0);
}