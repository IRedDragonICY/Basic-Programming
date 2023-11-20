#include <iostream>
#include <fstream>
#include <iomanip>
#include <unistd.h>
#include <conio.h>
using namespace std;

struct produk{                              // Data produk didefinisikan dengan struct yang terdiri dari kode, nama, hargabeli, hargajual, diskon, stok
    int kode;
    string nama;
    int hargabeli,hargajual;
    double diskon;
    int stok;
}; produk produk[3];                         // Produk merupakan array yang terdiri dari 3 data produk, karena ada 3 data barang yang di jual dari transaksi maka ada 3 data produk.

// data sementara pada produk di produk.txt
// 1 Pulpen 4000 5000 0.02 200
// 2 Pensil 2000 3500 0.1 100
// 3 Buku 5000 6000 0.04 70




struct transaksi{                           // Data transaksi penjualan merupakan struct yang terdiri dari tanggal, nonota. barang, total.
    string tanggal;
    int nonota;
    struct barang{
        string kode,nama;
        int harga,qty,jumlah;               // jumlah merupakan hasil perkalian dari harga dan qty
    }; barang barang[3];                    // Barang merupakan array yang terdiri dari 3 data barang yang di jual
    int total;                              // total merupakan akumulasi jumlah dari 3 data barang yang di jual
};transaksi transaksi[10];


// memisalkan jika sudah ada 10 transaksi di struct transaksi, maka akan ada 10 data transaksi yang ada di file transaksi.txt
// memasukkan secara random, nama barang, akan disesuaikan dengan di struct produk


void inisialisasi_produk()
{
    // mengecek apakah produk.txt ada atau tidak
    ifstream file;
    file.open("produk.txt");
    if(!file){
        ofstream file2;
        file2.open("produk.txt");
        file2.close();
    }
    // agar tidak jeda di program saat membuat produk.txt baru
    file.close();

    // menginisialisasi data produk yang ada di produk.txt ke array produk tanpa getline
    file.open("produk.txt");
    int i=0;
    while(!file.eof()){
        file>>produk[i].kode;
        file>>produk[i].nama;
        file>>produk[i].hargabeli;
        file>>produk[i].hargajual;
        file>>produk[i].diskon;
        file>>produk[i].stok;
        i++;
    }
    file.close();
}
void inisialisasi_transaksi()
{
    // mengecek apakah transaksi.txt ada atau tidak
    ifstream file;
    file.open("transaksi.txt");
    if(!file){
        ofstream file2;
        file2.open("transaksi.txt");
        file2.close();
    }
    file.close();
    // disini permisalan jika sudah mempunyai 10 struk
    // memasukkan transaksi dengna array 10 secara random ke transaksi.txt sesuai struct produk pembelian produk di qty random, ada yang kebeli ada yang tidak, sesuai seperti pelanggan
    file.open("transaksi.txt");
    // permisalan mempunyai struk 10, masukkan ke file hingga 10 array,isinya jangan sama, sesuai permisalan pembelian konsumen, isinya sesuai struct produk
    // isinya pembelian qty random tetapi sesuai ketentuan struct produk
    ofstream file2;
    file2.open("transaksi.txt");
    file2<<"2020/01/01 1 1 Pulpen 4000 2 8000 2 Pensil 2000 3 6000 3 Buku 5000 2 10000"<<endl;
    file2<<"2020/01/02 2 1 Pulpen 4000 1 4000 2 Pensil 2000 2 4000 3 Buku 5000 1 5000"<<endl;
    file2<<"2020/01/03 3 1 Pulpen 4000 3 12000 2 Pensil 2000 1 2000 3 Buku 5000 3 15000"<<endl;
    file2<<"2020/01/04 4 1 Pulpen 4000 2 8000 2 Pensil 2000 3 6000 3 Buku 5000 2 10000"<<endl;
    file2<<"2020/01/05 5 1 Pulpen 4000 1 4000 2 Pensil 2000 2 4000 3 Buku 5000 1 5000"<<endl;
    file2<<"2020/01/06 6 1 Pulpen 4000 3 12000 2 Pensil 2000 1 2000 3 Buku 5000 3 15000"<<endl;
    file2<<"2020/01/07 7 1 Pulpen 4000 2 8000 2 Pensil 2000 3 6000 3 Buku 5000 2 10000"<<endl;
    file2<<"2020/01/08 8 1 Pulpen 4000 1 4000 2 Pensil 2000 2 4000 3 Buku 5000 1 5000"<<endl;
    file2<<"2020/01/09 9 1 Pulpen 4000 3 12000 2 Pensil 2000 1 2000 3 Buku 5000 3 15000"<<endl;
    file2<<"2020/01/10 10 1 Pulpen 4000 2 8000 2 Pensil 2000 3 6000 3 Buku 5000 2 10000"<<endl;
    file2.close();
    file.close();
}    

void menu_tambah_barang()
{
    // Mengecek apakah sudah 3 produk atau belum
    if(produk[2].kode!=0){
        cout<<"Maaf, Barang Sudah Mencapai Batas Maksimal"<<endl;
        cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
        getch();
        system("cls");
        return;
    }
    // membuka kembali produk.txt
    ifstream file;
    file.open("produk.txt");
    // Mengecek barang di produk.txt, penomoran akan sesuai dengan data struct yang ada file di produk.txt, jika baris 1 sudah terisi, maka i+1, jika baris ke dua maka i+2
    int i=0;
    while(!file.eof()){
        file>>produk[i].kode;
        file>>produk[i].nama;
        file>>produk[i].hargabeli;
        file>>produk[i].hargajual;
        file>>produk[i].diskon;
        file>>produk[i].stok;
        i++;
    }
    i--;
    file.close();
    // mengecek barang di produk.txt apakah sudah lebih dari 3 atau belum
    if(i>3){
        cout<<"Maaf, Barang Sudah Mencapai Batas Maksimal"<<endl;
        cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
        getch();
        system("cls");
        return;
    }

    produk[i].kode=i+1;
    cout<<"Masukkan Nama Barang (Jangan menggunakan spasi) : ";
    cin>>produk[i].nama;
    cout<<"Masukkan Harga Beli Barang : ";
    cin>>produk[i].hargabeli;
    cout<<"Masukkan Harga Jual Barang : ";
    cin>>produk[i].hargajual;
    cout<<"Masukkan Diskon Barang : ";
    cin>>produk[i].diskon;
    cout<<"Masukkan Stok Barang : ";
    cin>>produk[i].stok;
    ofstream file2;
    // Menambahkan barang ke produk.txt
    file2.open("produk.txt",ios::app);
    file2<<produk[i].kode<<" "<<produk[i].nama<<" "<<produk[i].hargabeli<<" "<<produk[i].hargajual<<" "<<produk[i].diskon<<" "<<produk[i].stok<<endl;
    file2.close();
    cout<<"Data Berhasil Ditambahkan"<<endl;
    cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
    getch();
    system("cls");
}

void menu_melihat_barang()
{
    // Jika tidak ada barang yang dijual maka akan menampilkan pesan
    if(produk[0].kode==0){
        cout<<"Maaf, Barang Belum Ada"<<endl;
        cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
        getch();
        system("cls");
        return;
    }
    // mencetak produk yang ada di produk.txt, dengan rapih menggunakan tabel iomanip
    
    for (int i=0;i<3;i++){
        // tidak mencetak data yang kosong
        if(produk[i].kode==0)
            continue;
        else
        {
            cout<<"Barang ke-"<<i+1<<endl;
            cout<<"Kode Barang       : "<<produk[i].kode<<endl;
            cout<<"Nama Barang       : "<<produk[i].nama<<endl;
            cout<<"Harga Beli Barang : "<<produk[i].hargabeli<<endl;
            cout<<"Harga Jual Barang : "<<produk[i].hargajual<<endl;
            cout<<"Diskon Barang     : "<<produk[i].diskon*100<<" %"<<endl;
            cout<<"Stok Barang       : "<<produk[i].stok<<endl;
            cout<<endl;
        }
    }
    cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
    getch();
    system("cls");
}

void menu_ubah_barang()
{
    // memasukkan data produk.txt ke array produk
    inisialisasi_produk();
    cout<<"Menampilkan kode barang"<<endl;
   for (int i=0;i<3;i++){
        // tidak mencetak data yang kosong
        if(produk[i].kode==0)
            continue;
        else
        {
            cout<<"Barang ke-"<<i+1<<endl;
            cout<<"Kode Barang       : "<<produk[i].kode<<endl;
            cout<<"Nama Barang       : "<<produk[i].nama<<endl;
            cout<<"Harga Beli Barang : "<<produk[i].hargabeli<<endl;
            cout<<"Harga Jual Barang : "<<produk[i].hargajual<<endl;
            cout<<"Diskon Barang     : "<<produk[i].diskon*100<<" %"<<endl;
            cout<<"Stok Barang       : "<<produk[i].stok<<endl;
            cout<<endl;

        }
    }
        int i;
        int pil;
        cout<<"Pilih Barang Yang Ingin Diubah : ";
        cin>>pil;
        pil--;
        cout<<"Anda akan mengubah barang ke-"<<pil+1<<endl;
        cout<<"Masukkan Nama Barang (Jangan menggunakan spasi) : ";
        cin>>produk[pil].nama;
        cout<<"Masukkan Harga Beli Barang : ";
        cin>>produk[pil].hargabeli;
        cout<<"Masukkan Harga Jual Barang : ";
        cin>>produk[pil].hargajual;
        cout<<"Masukkan Diskon Barang : ";
        cin>>produk[pil].diskon;
        cout<<"Masukkan Stok Barang : ";
        cin>>produk[pil].stok;
        ofstream file2;
        // menggantikan file produk.txt dengan data yang baru
        file2.open("produk.txt");
        for (int i=0;i<3;i++){
            if(produk[i].kode==0)
                continue;
            else
            {
                file2<<produk[i].kode<<" "<<produk[i].nama<<" "<<produk[i].hargabeli<<" "<<produk[i].hargajual<<" "<<produk[i].diskon<<" "<<produk[i].stok<<endl;
            }
        }
        file2.close();
        cout<<"Data Berhasil Diubah"<<endl;
        cout<<"Tekan Enter Untuk Kembali Ke Menu Utama";
        getch();
}
void menu_membeli_barang ()
{
    cout<<"Tidak ada (tekan enter untuk melanjutkan)";
    getch();
}
void menu_menampilkan_nota_barang()
{
    // menyimpan nota barang yang ada di transaksi.txt ke struct transaksi, jangan lupa struct bertingkatnya juga pada barang[0] hingga ke 3
    // menyesuaikan data ini
    // 2020/01/01 1 1 Pulpen 4000 2 8000 1 Pensil 2000 3 6000 1 Buku 5000 2 10000
    // 2020/01/02 2 1 Pulpen 4000 1 4000 1 Pensil 2000 2 4000 1 Buku 5000 1 5000
    // 2020/01/03 3 1 Pulpen 4000 3 12000 1 Pensil 2000 1 2000 1 Buku 5000 3 15000d
    // 2020/01/04 4 1 Pulpen 4000 2 8000 1 Pensil 2000 2 4000 1 Buku 5000 1 5000
    // 2020/01/05 5 1 Pulpen 4000 1 4000 1 Pensil 2000 3 6000 1 Buku 5000 2 10000
    // 2020/01/06 6 1 Pulpen 4000 3 12000 1 Pensil 2000 1 2000 1 Buku 5000 3 15000
    // 2020/01/07 7 1 Pulpen 4000 2 8000 1 Pensil 2000 2 4000 1 Buku 5000 1 5000
    // 2020/01/08 8 1 Pulpen 4000 1 4000 1 Pensil 2000 3 6000 1 Buku 5000 2 10000
    // 2020/01/09 9 1 Pulpen 4000 3 12000 1 Pensil 2000 1 2000 1 Buku 5000 3 15000
    // 2020/01/10 10 1 Pulpen 4000 2 8000 1 Pensil 2000 2 4000 1 Buku 5000 1 5000
    // sesuaikan dari struct transaksi.barang
    // seperti ini
    //     struct transaksi{                           // Data transaksi penjualan merupakan struct yang terdiri dari tanggal, nonota. barang, total.
    //     string tanggal;
    //     int nonota;
    //     struct barang{
    //         string kode,nama;
    //         int harga,qty,jumlah;               // jumlah merupakan hasil perkalian dari harga dan qty
    //     }; barang barang[3];                    // Barang merupakan array yang terdiri dari 3 data barang yang di jual
    //     int total;                              // total merupakan akumulasi jumlah dari 3 data barang yang di jual
    // };transaksi transaksi[10];

    ifstream file2("transaksi.txt");
    if (file2.is_open()){
        for (int i=0;i<10;i++){
            file2>>transaksi[i].tanggal>>transaksi[i].nonota;
            for (int j=0;j<3;j++){
                file2>>transaksi[i].barang[j].kode>>transaksi[i].barang[j].nama>>transaksi[i].barang[j].harga>>transaksi[i].barang[j].qty>>transaksi[i].barang[j].jumlah;
            }
        }
    }
    file2.close();
    cout<<"Pilih nota barang"<<endl;
    // menampilkan nota barang dengan tanggal saja dari transaksi.txt dari struct transaksi.barang, membandingkan dengan nonota
    for (int i=0;i<10;i++){
        // tidak mencetak data yang kosong
        cout<<i+1<<" "<<transaksi[i].tanggal<<endl;
    }
    cout<<"Pilih nota barang : ";
    int pil;
    cin>>pil;
    pil--;
    cout<<"Transaksi Pada tanggal "<<transaksi[pil].tanggal<<endl;
    cout<<"No Nota : "<<transaksi[pil].nonota<<endl;
    cout<<"Kode Barang\tNama Barang\tHarga\tQty\tJumlah"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    //menggunakan iomanip
    // cout<<setiosflags(ios::left)<<setw(15)<<transaksi[pil].barang[0].kode<<setw(15)<<transaksi[pil].barang[0].nama<<setw(15)<<transaksi[pil].barang[0].harga<<setw(15)<<transaksi[pil].barang[0].qty<<setw(15)<<transaksi[pil].barang[0].jumlah<<endl
    // mengganti di atas dengan perulangan
    for (int i=0;i<3;i++){
        // menaruh tulisan di tengah
        cout<<setiosflags(ios::left)<<setw(15)<<transaksi[pil].barang[i].kode<<setw(15)<<transaksi[pil].barang[i].nama<<setw(10)<<transaksi[pil].barang[i].harga<<setw(8)<<transaksi[pil].barang[i].qty<<setw(4)<<transaksi[pil].barang[i].jumlah<<endl;
    }
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"Tekan Enter untuk kembali ke menu utama"<<endl;
    getch();
    system("cls");
}
void menu_menampilkan_nota_penjualanterbesar()
{
    ifstream file2("transaksi.txt");
    if (file2.is_open()){
        for (int i=0;i<10;i++){
            file2>>transaksi[i].tanggal>>transaksi[i].nonota;
            for (int j=0;j<3;j++){
                file2>>transaksi[i].barang[j].kode>>transaksi[i].barang[j].nama>>transaksi[i].barang[j].harga>>transaksi[i].barang[j].qty>>transaksi[i].barang[j].jumlah;
            }
        }
    }
    file2.close();
    int max=0;
    for (int i=0;i<10;i++){
        if (transaksi[i].total>max){
            max=transaksi[i].total;
        }
    }
    cout<<"Transaksi terbesar terdapat pada tanggal"<<endl;
    for (int i=0;i<10;i++){
        if (transaksi[i].total==max){
            cout<<transaksi[i].tanggal<<endl;
        }
    }
    cout<<"Tekan Enter untuk kembali ke menu utama"<<endl;
    getch();
    system("cls");
}
void menu_menampilkan_kodebarang_penjualanterbanyak ()
{   
    ifstream file2("transaksi.txt");
    if (file2.is_open()){
        for (int i=0;i<10;i++){
            file2>>transaksi[i].tanggal>>transaksi[i].nonota;
            for (int j=0;j<3;j++){
                file2>>transaksi[i].barang[j].kode>>transaksi[i].barang[j].nama>>transaksi[i].barang[j].harga>>transaksi[i].barang[j].qty>>transaksi[i].barang[j].jumlah;
            }
        }
    }
    file2.close();
    int max=0;
    for (int i=0;i<10;i++){
        for (int j=0;j<3;j++){
            if (transaksi[i].barang[j].qty>max){
                max=transaksi[i].barang[j].qty;
            }
        }
    }
    cout<<"Kode terbanyak pada struk ke : "<<endl;
    for (int i=0;i<10;i++){
        for (int j=0;j<3;j++){
            if (transaksi[i].barang[j].qty==max){
                cout<<i+1<<endl;
            }
        }
    }

    cout<<"Kode Barang yang paling banyak terjual adalah : "<<max<<endl;
    cout<<"Tekan Enter untuk kembali ke menu utama"<<endl;
    getch();
}
void menu_menampilkan_totalpenjualan()
{
    ifstream file2("transaksi.txt");
    if (file2.is_open()){
        for (int i=0;i<10;i++){
            file2>>transaksi[i].tanggal>>transaksi[i].nonota;
            for (int j=0;j<3;j++){
                file2>>transaksi[i].barang[j].kode>>transaksi[i].barang[j].nama>>transaksi[i].barang[j].harga>>transaksi[i].barang[j].qty>>transaksi[i].barang[j].jumlah;
            }
        }
    }
    file2.close();
    int totalpenjualan=0;
    // menjumlahkan total dari struct transaksi.barang
    for (int i=0;i<10;i++){
        for (int j=0;j<3;j++){
            totalpenjualan+=transaksi[i].barang[j].jumlah;
        }
    }
    cout<<"Total penjualan adalah : "<<totalpenjualan<<endl;
    cout<<"Tekan Enter untuk kembali ke menu utama"<<endl;
    getch();
}
int main()
{
    int pilih; 
    char pilih2;   
    cout<<"  /$$   /$$  /$$$$$$  /$$$$$$$         /$$$$$$  /$$$$$$$$ /$$   /$$"<<endl;
    cout<<" | $$  | $$ /$$__  $$| $$__  $$       /$$__  $$|__  $$__/| $$  /$$/"<<endl;
    cout<<" | $$  | $$| $$  | $$| $$  \\ $$      | $$  | $$   | $$   | $$ /$$/ "<<endl;
    cout<<" | $$  | $$| $$$$$$$$| $$  | $$      | $$$$$$$$   | $$   | $$$$$/  "<<endl;
    cout<<" | $$  | $$| $$__  $$| $$  | $$      | $$__  $$   | $$   | $$  $$  "<<endl;
    cout<<" | $$  | $$| $$  | $$| $$  | $$      | $$  | $$   | $$   | $$\\  $$ "<<endl;
    cout<<" |  $$$$$$/| $$  | $$| $$$$$$$/      | $$  | $$   | $$   | $$ \\  $$"<<endl;
    cout<<"  \\______/ |__/  |__/|_______/       |__/  |__/   |__/   |__/  \\__/"<<endl;
    sleep(1);
    cout<<"              Selamat Datang di Program Jual Beli Barang"<<endl;
    cout<<"          Dibuat Oleh : Mohammad Farid Hendianto -2200018401"<<endl;
    cout<<" Selamat Datang di Program Penjualan Barang"<<endl;
    sleep(1);
    system("cls");
    MENU_1:
    // inisialisasi produk untuk mengisi ulang pada array produk
    
    inisialisasi_produk();
    inisialisasi_transaksi();
    cout<<"UAD - ATK"<<endl;
    cout<<"1 Mendata Barang"<<endl;
    cout<<"2 Membeli Barang"<<endl;
    cout<<"3 Laporan Penjualan"<<endl;
    cout<<"4 Keluar"<<endl;
    cout<<"Pilih Menu : ";
    cin>>pilih;
    switch(pilih){ 
        case 1: 
            system("cls"); 
            MENU_1_1: 
            cout<<"Mendata Barang"<<endl;
            cout<<"1 Tambah Barang"<<endl;
            cout<<"2 Ubah Barang"<<endl;
            cout<<"3 Hapus Barang"<<endl;
            cout<<"4 Melihat Barang"<<endl;
            cout<<"5 Kembali"<<endl;
            cout<<"Pilih Menu : ";
            cin>>pilih;
            switch(pilih){
                case 1:
                    system("cls");
                    menu_tambah_barang();
                    goto MENU_1_1;
                    break;
                case 2:
                    system("cls");
                    cout<<"Ubah Barang"<<endl;
                    menu_ubah_barang();
                    goto MENU_1_1;
                    break;
                case 3:
                    system("cls");
                    cout<<"Hapus Barang"<<endl;
                    break;
                case 4:
                    system("cls");
                    menu_melihat_barang();
                    goto MENU_1_1;
                    break;
                case 5:
                    system("cls");
                    goto MENU_1;
                    break;
                default:
                    system("cls");
                    cout<<"Pilihan tidak ada. . . (Tekan enter untuk melanjutkan)"<<endl;
                    getch(); system("cls");
                    goto MENU_1_1;
            }
            break;
        case 2:
            // jika barang tidak ada maka tidak bisa di beli
            if (produk[0].stok==0 && produk[1].stok==0 && produk[2].stok==0){
                system("cls");
                cout<<"Barang Habis"<<endl;
                cout<<"Tekan enter untuk melanjutkan"<<endl;
                getch(); system("cls");
                goto MENU_1;
            }
            system("cls");
            cout<<"Membeli Barang"<<endl;
            break;
        case 3:
            system("cls");
            MENU_3_1:
            cout<<"Laporan Penjualan"<<endl;
            cout<<"1 Menampilkan data penjualan pada nota tertentu"<<endl;
            cout<<"2 Menampilkan nota dengan penjualan terbesar"<<endl;
            cout<<"3 Menampilkan kode barang dengan penjualan terbanyak"<<endl;
            cout<<"4 Menampikan total penjualan"<<endl;
            cout<<"5 Kembali"<<endl;
            cout<<"Pilih Menu : ";
            cin>>pilih;
            switch(pilih){
                case 1:
                    system("cls");
                    cout<<"Menampilkan data penjualan pada nota tertentu"<<endl;
                    menu_menampilkan_nota_barang();
                    goto MENU_3_1;
                    break;
                case 2:
                    system("cls");
                    cout<<"Menampilkan nota dengan penjualan terbesar"<<endl;
                    menu_menampilkan_nota_penjualanterbesar();
                    goto MENU_3_1;
                    break;
                case 3:
                    system("cls");
                    cout<<"Menampilkan kode barang dengan penjualan terbanyak"<<endl;
                    menu_menampilkan_kodebarang_penjualanterbanyak();
                    break;
                    goto MENU_3_1;
                case 4:
                    system("cls");
                    cout<<"Menampikan total penjualan"<<endl;
                    menu_menampilkan_totalpenjualan();
                    goto MENU_3_1;
                    break;
                case 5:
                    system("cls");
                    goto MENU_1;
                    break;
                default:
                    system("cls");
                    cout<<"Pilihan tidak ada. . . (Tekan enter untuk melanjutkan)"<<endl;
                    getch(); system("cls");
                    goto MENU_1;
            }
            break;
        case 4:
            system("cls");
            goto keluar;
            break;
        default:
            system("cls");
            cout<<"Pilihan tidak ada. . . (Tekan enter untuk melanjutkan)"<<endl;
            getch(); system("cls");
            goto MENU_1;
    }

    cout<<"Tambah Barang"<<endl;
    keluar:
    cout<<"Terima Kasih Telah Menggunakan Program Ini"<<endl;
    cout<<"Nyaa~"<<endl;
    cout<<"Kasih sayang dari Mohammad Farid Hendianto OwO"<<endl;
    return 0;


}
