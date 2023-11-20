#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Keliling Persegi\n";
	cout<<"Program ini akan mencari keliling persegi\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan sisi = ";
	cin>>a;
	cout<<"Keliling persegi adalah "<<4*a<<endl;
	system("pause");
}