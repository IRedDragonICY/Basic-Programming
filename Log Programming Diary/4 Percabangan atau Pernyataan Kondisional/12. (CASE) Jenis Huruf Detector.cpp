#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Jenis huruf V1.0\n";
	cout<<"Disini akan menyebutkan jenis huruf berdasarkan yang Anda inputkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	char karakter;
	cout<<"Masukkan salah satu huruf: ";
	cin>>karakter;
	cout<<"Mengolah huruf."<<endl;
	sleep(1);
	cout<<"Mengolah huruf. ."<<endl;
	sleep(1);
	cout<<"Mengolah huruf. . ."<<endl;
	sleep(1);
	switch (karakter)
	{
		case 'A':
		case 'a':
		case 'I':
		case 'i':
		case 'U':
		case 'u':
		case 'E':
		case 'e':
		case 'O':
		case 'o':
			cout<<"Huruf "<<karakter<<" termasuk huruf vokal";
			system("pause");
			break;
		default:
			cout<<"Huruf "<<karakter<<" termasuk huruf konsonan";
			system("pause");
	}
}
	