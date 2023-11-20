#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji long long int\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data long long int\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	long long int bil1 = 99999999999999;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"long long int ";
	SetConsoleTextAttribute(h,15);
	cout<<"bil1;\n\n";
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 99999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1 = 9999999999999999999999999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 9999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1 = 999999999999999999999999999999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 999999999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1 = 999999999999999999999999999999999999999999999999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 999999999999999999999999999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1 = 99999999999999999999999999999999999999999999999999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 99999999999999999999999999999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
		bil1 = 999999999999999999999999999999999999999999999999999999999999999999999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya bil1 = 999999999999999999999999999999999999999999999999999999999999999999999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	return(system("pause"));
	
}