#include <iostream>
using namespace std;

int faktorial(int *angka)
{
    int hasil=1;
    for(int i=1;i<=*angka;i++)
    {
        hasil=hasil*i;
    }
    return hasil;
}
int main()
{
    int angka;
    cout<<"-= Program bilangan faktorial =-"<<endl;
    cout<<"Masukkan angka : ";
    cin>>angka;
    cout<<"Hasil faktorial dari "<<angka<<" adalah "<<faktorial(&angka);
}