#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Operator Compound Assignment (Penjumlahan) V1.0\n";
	cout<<"Program ini mencoba kegunaan Operator Compound Assignment penjumlahan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int a=5;
	cout<<"Jika diketahui a=5, kemudian a+=2."<<endl;
	a+=2;
	cout<<"Maka hasilnya adalah: "<<a<<endl;
	return(system("pause"));
}