#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Volume Kubus V1.0\n";
	cout<<"Program ini akan mencari volume kubus\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan panjang sisi kubus = ";
	cin>>a;
	cout<<"volume kubus adalah "<<a*a*a<<endl;
	system("pause");
	return 0;
}