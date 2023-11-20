#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Volume kerucut V1.0\n";
	cout<<"Program ini akan mencari volume kerucut\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a, b;
	cout<<"Masukkan jari-jari alas kerucut = ";
	cin>>a;
	cout<<"Masukkan tinggi kerucut = ";
	cin>>b;
	cout<<"Volume kerucut adalah "<<a*a*b*22/7/3<<endl;
	system("pause");
	return 0;
}