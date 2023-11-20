#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Masukkan angka\n>";
    cin>>a;
    if (a%3==0&&a%7!=0)
        cout<<"Kelipatan 3 dan bukan kelipatan 7";
    else if (a%7==0&&a%3!=0)
        cout<<"Kelipatan 7 dan bukan kelipatan 3";
    else if (a%7==0&&a%3==0)
        cout<<"Kelipatan 7 dan kelipatan 3";
    else
        cout<<"Bukan kelipatan 3 dan bukan kelipatan 7";

}