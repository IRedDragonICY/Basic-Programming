/* Contoh penggunaan array dari pointer*/
#include <iostream>
using namespace std;

int main()
{
    int *ptr[5];
    cout<<"Sebelum dirubah"<<endl;
    for (int i=0;i<5;i++)
    {
        ptr[i]=new int;
        *ptr[i]=i+1;
        cout<<"ptr["<<i<<"] = "<<*ptr[i]<<endl;
    }
    *ptr[2]=99;
    cout<<"Setelah dirubah"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<"ptr["<<i<<"] = "<<*ptr[i]<<endl;
    }
    for (int i=0;i<5;i++)
    {
        delete ptr[i];
    }
}