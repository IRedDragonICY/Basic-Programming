#include <iostream>
using namespace std;

int main()
{
    string jawab;
    do
    {
        system("cls");
        cout<<"Aku suka sama kamu\n";
        cout<<"Apakah kamu suka sama aku? ";
        cin>>jawab;
    }
    while(!(jawab=="iya"||jawab=="Iya"||jawab=="IYA"||jawab=="ya"||jawab=="Ya"||jawab=="YA"||jawab=="y"||jawab=="Y"));
    cout<<"Aku suka sama kamu juga"<<endl;
    return 0;
}