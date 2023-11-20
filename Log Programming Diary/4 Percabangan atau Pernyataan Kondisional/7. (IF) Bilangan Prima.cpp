#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan PrimaV1.0\n";
	cout<<"Disini akan menentukan apakah bilangan prima atau bukan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	unsigned long long int angka;
	char awal;
	cout<<"Masukkan sebuah angka\n>";
	cin>>angka;
	if (angka%2==0||angka%3==0||angka%5==0||angka%7==0||angka==0)
	{
		
		if (angka==2||angka==3||angka==5||angka==7)
		{
			cout<<"Angka "<<angka<<" termasuk bilangan prima\n";	
		
		}
		else
			cout<<"Angka "<<angka<<" bukan termasuk bilangan prima\n";
		
	}
	else
	{
		cout<<"Angka "<<angka<<" termasuk bilangan prima\n";
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