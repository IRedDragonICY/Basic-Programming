#include <iostream>
using namespace std;

int main()
{
int b;
int* pb = &b;
cout<<"Masukkan jumlah batas: ";
cin>>*pb;
for (int i=0;i<pb-1;i++)
{
for (int j=pb-2;j>i-1;j--)
{
cout<<" ";
}
for (int j=0;j<i;j++)
cout<<"";
cout<<"|";
for (int j=0;j<i;j++)
cout<<"";
cout<<endl;
}
for (int i=0;i<*pb-1;i++)
cout<<"-";
cout<<"+";
for (int i=0;i<*pb-1;i++)
cout<<"-";
cout<<endl;
for (int i=pb-1;i>0;i--)
{
for (int j=pb-2;j>i-2;j--)
{
cout<<" ";
}
for (int j=0;j<i-1;j++)
cout<<"";
cout<<"|";
for (int j=0;j<i-1;j++)
cout<<"";
cout<<endl;
}
}