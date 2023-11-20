#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Volume Tabung V1.0\n";
	cout<<"Program ini akan mencari volume tabung\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a,b;
	cout<<"Masukkan jari-jari tabung = ";
	cin>>a;
	cout<<"tinggi tabung = ";
	cin>>b;
	cout<<"volume tabung adalah "<<(22/7)*a*a*b;
	return 0;
}