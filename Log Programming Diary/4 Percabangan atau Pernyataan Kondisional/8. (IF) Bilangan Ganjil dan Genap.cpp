#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan Ganjil dan Genap V1.0\n";
	cout<<"Disini akan menentukan apakah bilangan ganjil atau genap\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	unsigned long long int angka;
	char awal;
	cout<<"Masukkan sebuah angka\n>";
	cin>>angka;
	if (angka%2!=0)
	{
		cout<<"Angka "<<angka<<" termasuk bilangan ganjil\n";	
	}
	else
	{
		cout<<"Angka "<<angka<<" termasuk bilangan genap\n";
	}
	
	sleep(1.5);
	cout<<"Apakah anda ingin mencoba lagi?? (Y|N)\n>";
	cin>>awal;
	if (awal=='y'||awal=='Y')
	{
		cout<<"Progam ini akan mengulang dalam 2 detik\n";
		sleep(0.5);
		cout<<"2\n";
		sleep(1);
		cout<<"1";
		sleep(1);
		cout<<"0";
		system("cls");
		return(main());
	}
	if (awal=='n'||awal=='N')
	{
		system("pause");
		return 0;
	}
}