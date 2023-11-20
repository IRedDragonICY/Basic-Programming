#include <iostream>
#include <windows.h>
#define K "8.9875517873681764x109 Nm2/C2"
using namespace std;


int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Konstanta Coulomb v1.0\n";
	cout<<"Disini akan menampilkan konstanta Coulonb\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	cout<<"Konstanta Coulomb adalah "<<K<<endl;
	return(system("pause"))	;
}