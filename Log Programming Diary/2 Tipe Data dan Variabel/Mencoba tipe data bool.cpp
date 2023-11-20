#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Mencoba tipe data bool\n";
	cout<<"Program ini akan melakukan percobaan tipe data bool\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	bool benar = true;
	bool salah = false;
	
	cout<<"bool jika berisi: true\n";
	cout<<"Output: "<<benar<<endl;
	cout<<"bool jika berisi: false\n";
	cout<<"Output: "<<salah<<endl;
	return(system("pause"));
}