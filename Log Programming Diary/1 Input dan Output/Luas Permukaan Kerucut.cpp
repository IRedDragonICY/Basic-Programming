#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas permukaan kerucut V1.0\n";
	cout<<"Program ini akan mencari luas permukaan kerucut\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a, b;
	cout<<"Masukkan jari-jari alas kerucut = ";
	cin>>a;
	cout<<"Masukkan panjang sisi miring/garis pelukis kerucut = ";
	cin>>b;
	cout<<"Luas permukaan kerucut adalah "<<(a+b)*a*22/7<<endl;
	system("pause");
	return 0;
}