#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Permukaan bola V1.0\n";
	cout<<"Program ini akan mencari luas permukaan bola\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan jari-jari bola = ";
	cin>>a;
	cout<<"Luas permukaan bola adalah "<<a*a*22/7*4<<endl;
	system("pause");
	return 0;
}