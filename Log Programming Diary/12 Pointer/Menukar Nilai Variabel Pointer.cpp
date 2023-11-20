#include <iostream>
using namespace std;

void tukar(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    cout<<"-= Menukar nilai angka Variabel =-\n";
    cout<<"Masukkan angka ke A : ";
    cin>>a;
    cout << "Masukkan angka ke B : ";
    cin>>b;
    cout<<"\n-= Sebelum =-\n";
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    tukar(&a,&b);
    cout<<"\n-= Sesudah =-\n";
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b;
    return 0;
    
}