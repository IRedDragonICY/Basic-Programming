#include <iostream>
using namespace std;
int main()
{
    int denda=0,tilang_1,tilang_2,tilang_3,tilang_4;
    cout<<"Lalulintas Watchdog\n";
    cout<<"-=Mengecek pelanggaran=-\n";
    cout<<"Apakah lampu sepeda motor menyala? (1|2)\n1 Ya\n2 Tidak\n>";
    cin>>tilang_1;
    cout<<"Apakah lampu spion terpasang? (1|2)\n1 Ya\n2 Tidak\n>";
    cin>>tilang_2;
    cout<<"Apakah pengendara menggunakan helm? (1|2)\n1 Ya\n2 Tidak\n>";
    cin>>tilang_3;
    cout<<"Apakah pengendara tidak membawa sim? (1|2)\n1 Ya\n2 Tidak\n>";
    cin>>tilang_4;
    if ((tilang_1==2||tilang_2==2)&&tilang_3==2&&tilang_4==2)
        denda+=500;
    else
    {
        if (tilang_1==2||tilang_2==2)
            denda+=100;
        if (tilang_3==2)
            denda+=200;
        if (tilang_4==2)
            denda+=250;
        if (tilang_3==2&&tilang_4==2)
            denda-=100;
    }
    if (denda>0)
        cout<<"Jumlah denda yang harus anda bayar: Rp"<<denda<<".000,00\n";
    else
        cout<<"Pertahankan kedisiplinan Anda!!";
    return 0;
}