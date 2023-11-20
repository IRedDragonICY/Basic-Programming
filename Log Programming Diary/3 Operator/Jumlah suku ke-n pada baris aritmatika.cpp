#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Membuat jumlah suku Aritmatika pada barisV1.0\n";
	cout<<"Program ini akan mencari jumlah aritmatika pada baris \n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a,b,n;
	cout<<"Masukkan deret pertama = ";
	cin>>a;
	cout<<"Masukkan beda = ";
	cin>>b;
	cout<<"Banyak suku = ";
	cin>>n;
	cout<<"Maka jumlah baris aritmatikanya adalah\n";
	cout<<"S"<<n<<"= "<<a+(n-1)*b;
	return (system("pause"));
	
}