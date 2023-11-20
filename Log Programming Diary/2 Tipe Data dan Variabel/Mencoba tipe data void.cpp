#include <iostream>
#include <windows.h>
using namespace std;

void HelloWorld()
{
	cout<<"Hello World!"<<endl;
}

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Mencoba tipe data void\n";
	cout<<"Program ini akan melakukan percobaan tipe data void\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	HelloWorld();
	return(system("pause"));
}