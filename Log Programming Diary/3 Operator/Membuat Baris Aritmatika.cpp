#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Membuat baris Aritmatika V1.0\n";
	cout<<"Program ini akan membuat baris aritmatika\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	int a,b;
	cout<<"Masukkan deret pertama = ";
	cin>>a;
	cout<<"Masukkan beda = ";
	cin>>b;
	cout<<"Maka bentuk baris aritmatikanya adalah ";
	cout<<a<<","<<a+b<<","<<a+2*b<<","<<a+3*b<<","<<a+4*b<<","<<a+5*b<<","<<a+6*b<<","<<a+7*b<<"....";
	return(system("pause"));
}