#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Permukaan balok V1.0\n";
	cout<<"Program ini akan mencari luas permukaan balok\n";
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
	cout<<"Luas permukaan balok adalah "<<2*((a*b)+(a*c)+(b*c))<<endl;
	system("pause");
	return 0;
}