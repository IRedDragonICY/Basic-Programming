#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Operator Compound Assignment (Left Shift AND) V1.0\n";
	cout<<"Program ini mencoba kegunaan Operator Compound Assignment Left Shift AND\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int a=8; // 8 adalah n_1
	cout<<"Jika diketahui a=8, kemudian a<<=3 maka operasinya sama dengan a=8(3^2)."<<endl;
	a<<=3; // 3 adalah n_2
	// a = n1 (n_2^2)
	cout<<"Maka hasilnya adalah: "<<a<<endl;
	return(system("pause"));
}