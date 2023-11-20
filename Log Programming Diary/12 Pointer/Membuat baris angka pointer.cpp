#include <iostream>
using namespace std;
// Program membuat baris angka dengan menggunakan pointer

void baris_angka(int *a, int *n, int *b)
{
    for (int i=0; i<*n; i++)
    {
        cout<<*a;
        if (i<*n-1)
            cout<<", ";
        *a = *a + *b;
    }
}
void alamat_baris_angka(int *a, int *n, int *b)
{
    for (int i=0; i<*n; i++)
    {
        cout<<a;
        if (i<*n-1)
            cout<<", ";
        *a = *a + *b;
    }
}
int main()
{
    int a,n,b;
    cout<<"Masukkan angka awal : ";
    cin>>a;
    cout<<"Masukkan jumlah baris : ";
    cin>>n;
    cout<<"Masukkan beda :";
    cin>>b;
    cout<<"-= Hasil baris angka =- "<<endl;
    baris_angka(&a, &n, &b);
    cout<<"\n\n-= Hasil alamat pada baris angka =- "<<endl;
    alamat_baris_angka(&a, &n, &b);
}