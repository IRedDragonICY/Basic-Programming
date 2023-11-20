#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas lingkaran V1.0\n";
	cout<<"Program ini akan mencari luas lingkaran\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan jari-jari = ";
	cin>>a;
	cout<<"Keliling lingkaran adalah "<<a*2*22/7<<endl;
	system("pause");
	return 0;
}