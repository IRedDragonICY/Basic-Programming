#include <iostream>
using namespace std;
int main()
{
    channel:
    char pilih_ch,pilih_res;
    string ch,res;
    cout<<"Daftar TV di kota A\n";
    cout<<"a) RCTI\n";
    cout<<"b) SCTV\n";
    cout<<"c) Indosiar\n";
    cout<<"d) TransTV\n";
    cout<<"e) ANTV\n";
    cout<<"Masukkan channel yang ingin dipilih (a-e)\n>";
    cin>>pilih_ch;
    switch (pilih_ch)
    {
        case 'A':
        case 'a':
            ch="RCTI";
            break;
        case 'B':
        case 'b':
            ch="SCTV";
            break;
        case 'C':
        case 'c':
            ch="Indosiar";
            break;
        case 'D':
        case 'd':
            ch="TransTV";
            break;
        case 'E':
        case 'e':
        default:
            cout<<"Anda tidak memasukkan huruf dengan tepat!!";
            system("pause");system("cls");
            goto channel;
    }
    system("cls");
    resolution:
    cout<<"Kualitas gambar Televisi\n";
    cout<<"a) SD (Standard Definition)\n";
    cout<<"b) HD (High Definition)\n";
    cout<<"c) UHD (Ultra High Definition)\n";
    cout<<"Masukkan kualitas gambar yang diinginkan (a-c)\n>";
    cin>>pilih_res;
    
    switch (pilih_res)
    {
        case 'A':
        case 'a':
            res="SD (Standard Definition)";
            break;
        case 'B':
        case 'b':
            res="HD (High Definition)";
            break;
        case 'C':
        case 'c':
            res="UHD (Ultra High Definition)";
            break;
        default:
            cout<<"Anda tidak memasukkan huruf dengan tepat!!";
            system("pause");system("cls");
            goto resolution;
            break;
    }
    system ("cls");
    cout<<"Anda memilih channel "<<ch<<" dengan kualitas "<<res;
}