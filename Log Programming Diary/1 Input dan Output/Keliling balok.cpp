#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Keliling Balok V1.0\n";
	cout<<"Program ini akan mencari keliling balok\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a, b, c;
	cout<<"Masukkan panjang balok = ";
	cin>>a;
	cout<<"Masukkan lebar balok = ";
	cin>>b;
	cout<<"Masukkan tinggi balok = ";
	cin>>c;
	cout<<"Keliling balok adalah "<<4*(a+b+c)<<endl;
	system("pause");
	return 0;
}