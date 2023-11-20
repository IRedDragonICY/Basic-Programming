#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"keliling persegi panjang V1.0\n";
	cout<<"Program ini akan mencari keliling persegi panjang\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a,b;
	cout<<"Masukkan panjang = ";
	cin>>a;
	cout<<"Masukkan lebar = ";
	cin>>b;
	cout<<"keliling persegi panjang adalah "<<2*(a+b)<<endl;
	system("pause");
	return 0;
}