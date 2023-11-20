#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan Prima Looper V1.0\n";
	cout<<"Disini akan menyebutkan bilangan prima dengan rentang tertentu\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	long long int bawah,atas,angka;
	float detik;
	cout<<"Batas bawah bilangan prima\n>";
	cin>>bawah;
	cout<<"Batas atas bilangan prima\n>";
	cin>>atas;
	system("cls");
	cout<<"{x|"<<bawah<<"<x<"<<atas<<", x merupakan bilangan prima}\n";
	system("pause");
	angka=bawah+1;
	while (bawah<=angka&&angka<atas)
	{
		if ((not(angka%2==0||angka%3==0||angka%5==0||angka%7==0||angka<=1))||angka==2||angka==3||angka==5||angka==7)
			cout<<"Bilangan: "<<angka<<endl;
		angka++;
		sleep(detik);
//		system("cls");
	}
	return(system("pause"));
}
