#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan PaskalV1.0\n";
	cout<<"Disini akan menampilkan bilangan paskal dalam bentuk piramida\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
    
    int a,b,t,x=1,bil=1;
    cout<<"Tinggi piramida paskal\n>";
    cin>>t;
    for (a=0;a<t;a++)
    {
        for (b=0;b<bil;b++)
        {
            cout<<x;
        }
        if (bil>2)
        {
            for (int b=0;b<=bil;b++)
            {
                cout<<x;   
            }
        }
        bil++;
        cout<<endl;
    }
}
// 1
// 1 1
// 1 2 1
// 1 2 2 1
// 1 3 5 3 1