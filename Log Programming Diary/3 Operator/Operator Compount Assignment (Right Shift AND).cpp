#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Operator Compound Assignment (Right Shift AND) V1.0\n";
	cout<<"Program ini mencoba kegunaan Operator Compound Assignment Right Shift AND\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int a=8;
	cout<<"Jika diketahui a=6, kemudian a>>=2 maka operasinya sama dengan a=8/(2^2)"<<endl;
	a>>=2;
	cout<<"Maka hasilnya adalah: "<<a<<endl;
	return(system("pause"));
}