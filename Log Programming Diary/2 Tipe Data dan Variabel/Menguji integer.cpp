#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"menguji tipe data int\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data int\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int bil1 = 99999999999999;
	cout<<"Q: Maksimal angka yang bisa dimasukkan (Misalnya int bil1 = 99999999999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	return(system("pause"));
	
}