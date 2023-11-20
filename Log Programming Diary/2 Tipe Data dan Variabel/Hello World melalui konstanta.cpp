#include <iostream>
#include <windows.h>
#define K "Hello World \nSelamat datang di bahasa pemrograman c++"
using namespace std;


int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Konstanta  v1.0\n";
	cout<<"Header ini ditampilkan melalui konstanta \n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);

	cout<<K<<endl;
	return(system("pause"));
}