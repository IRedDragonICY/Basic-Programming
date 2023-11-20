#include <iostream>
using namespace std;

int main()
{
    int x,*y;
    y= new int;
    x=15;
    *y=20;
    cout<<"Nilai x         : "<<x<<endl;
    cout<<"Alamat memori x : "<<&x<<endl;
    cout<<"Nilai y         : "<<*y<<endl;
    cout<<"Alamat memori y : "<<y<<endl;
    delete y;
    cout<<"Setelah di-delete, nilai y         : "<<*y<<endl;
    cout<<"Setelah di-delete, alamat memori y : "<<y<<endl;
    return 0;
}