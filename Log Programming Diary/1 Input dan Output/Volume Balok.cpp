#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Volume Balok V1.0\n";
	cout<<"Program ini akan mencari volume balok\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a,b,c;
	cout<<"Masukkan panjang balok = ";
	cin>>a;
	cout<<"Masukkan lebar balok = ";
	cin>>b;
	cout<<"Masukkan panjang balok = ";
	cin>>c;
	cout<<"volume balok adalah "<<a*b*c;
	return 0;
}