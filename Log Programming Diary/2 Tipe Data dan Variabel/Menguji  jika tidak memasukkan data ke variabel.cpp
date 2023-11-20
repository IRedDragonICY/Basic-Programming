#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji jika tidak memasukkan data ke variabel\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan variabel pada suatu tipe data\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int bil1;
	cout<<"Q: Apa yang terjadi jika belum memasukkan data ke variabel?\n";
	sleep(1);
	cout<<"A: Output yang ditampikan adalah berupa: "<<bil1<<endl;
	sleep(1);
	return(system("pause"));
}