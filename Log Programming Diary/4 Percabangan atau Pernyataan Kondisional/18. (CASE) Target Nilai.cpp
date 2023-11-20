#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Sistem Nilai V1.0\n";
	cout<<"Program ini akan memberikan target berdasarkan huruf yang dimasukkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	system("cls");
	char nilai;
	cout<<"A|B|C|D|E|\n";
	cout<<"Anda ingin menargetkan nilai dengan huruf apa?\n>";
	cin>>nilai;
	cout<<"Untuk mendapatkan nilai "<<nilai<<", Anda harus menargetkan nilai dengan rentang ";
	switch (nilai)
	{
		case 'A':
		case 'a':
			cout<<"90-100"<<endl;
			break;
		case 'B':
		case 'b':
			cout<<"80-89"<<endl;
			break;
		case 'C':
		case 'c':
			cout<<"70-79"<<endl;
			break;
		case 'D':
		case 'd':
			cout<<"60-69"<<endl;
			break;
		case 'E':
		case 'e':
			cout<<"0-59"<<endl;
			break;
	}
	return(system("pause"));
}
	