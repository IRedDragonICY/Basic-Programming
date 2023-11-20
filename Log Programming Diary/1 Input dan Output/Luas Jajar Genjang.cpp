#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Jajar Genjang V1.0\n";
	cout<<"Program ini akan mencari luas Jajar Genjang\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a,b;
	cout<<"Masukkan alas = ";
	cin>>a;
	cout<<"Masukkan tinggi = ";
	cin>>b;
	cout<<"Luas jajar genjang adalah "<<a*b;
	return 0;
}