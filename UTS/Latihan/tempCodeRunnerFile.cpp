#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Masukkan angka\n>";
    cin>>a;
    if(a%7==0&&a%3!=0)
        cout<<"Benar";
    else
        cout<<"Salah";
}