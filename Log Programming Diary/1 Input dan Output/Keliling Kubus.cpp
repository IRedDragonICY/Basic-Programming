#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Keliling Kubus V1.0\n";
	cout<<"Program ini akan mencari keliling kubus\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan panjang sisi kubus = ";
	cin>>a;
	cout<<"Keliling kubus adalah "<<12*a<<endl;
	system("pause");
	return 0;
}