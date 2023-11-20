#include <iostream>
using namespace std;
string baris[10];

int main()
{
    int i;
    for (i=0;i<10;i++)
    {
          cout<<"data ke-"<<i<<"=";getline(cin,baris[i]);
    }
    for (i=0;i<10;i++)
        cout<<baris[i]<<endl;
    return 0;
}