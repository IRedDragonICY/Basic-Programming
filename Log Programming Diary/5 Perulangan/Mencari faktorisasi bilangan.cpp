#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Faktor Bilangan V1.0\n";
	cout<<"Disini akan mencari faktor dari suatu bilangan tertentu\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
    
    int bilangan;
    cout<<"Masukkan salah satu bilangan untuk mencari faktor bilangan\n>";
    cin>>bilangan;
    for (int i=1;i<bilangan;i++)
    {
        if (bilangan%i==0)
            cout<<i<<endl;
    }
    cout<<bilangan;
}
