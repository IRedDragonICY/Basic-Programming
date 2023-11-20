#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"menguji long int\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data long int\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	long int bil1;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"long int ";
	SetConsoleTextAttribute(h,15);
	cout<<"bil1;\n\n";

	sleep(1);
	bil1=9999999999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 9999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=99999999999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 99999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=9999999999999999999999999999999999999999999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 9999999999999999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	return(system("pause"));
}