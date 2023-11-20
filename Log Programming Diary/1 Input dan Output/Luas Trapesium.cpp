#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Trapesiun V1.0\n";
	cout<<"Program ini akan mencari luas trapesium\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a, b, c;
	cout<<"Masukkan panjang sisi sejajar pertama trapesium = ";
	cin>>a;
	cout<<"Masukkan panjang sisi sejajar kedua trapesium = ";
	cin>>b;
	cout<<"Masukkan tinggi trapesium = ";
	cin>>c;
	cout<<"Luas trapesium adalah "<<(a+b)*c/2<<endl;
	system("pause");
	return 0;
}