#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Waktu Detector V1.0\n";
	cout<<"Disini akan menentukan apakah bilangan ganjil atau genap\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int format,waktu;
	cout<<"+---------------------+\n";
	cout<<"|Format Waktu         |\n";
	cout<<"|1. 24 Jam            |\n";
	cout<<"|2. 12 Jam            |\n";
	cout<<"+---------------------+\n";
	cout<<"Pilih format waktu yang digunakan!\n>";
	cin>>format;
	if (format==1)
		{
			cout<<"Masukkan waktu Anda sekarang (Jam)\n>";
			cin>>waktu;
			if (waktu>=0&&waktu<=24)
				cout<<"Waktu Anda menunjukkan pukul "<<waktu<<" menandakan ";	
			if (waktu>=0&&waktu<=6)
				cout<<"dini hari";
			if (6<waktu&&waktu<12)
				cout<<"pagi hari";
			if (12<=waktu&&waktu<=15)
				cout<<"siang hari";
			if (15<waktu&&waktu<18)
				cout<<"sore hari";
			if (18<=waktu&&waktu<=24)
				cout<<"malam hari";
			else if (waktu>24||waktu<0)
			{
				cout<<"Anda tidak memasukkan jam dengan benar!!!";
			}
				
			
		}
		
	if (format==2)
		{
			cout<<"+---------------------+\n";
			cout<<"|Format Waktu         |\n";
			cout<<"|1. AM                |\n";
			cout<<"|2. PM                |\n";
			cout<<"+---------------------+\n";
			cout<<"Pilih format waktu yang digunakan!\n>";
			cin>>format;
			cout<<"Masukkan waktu Anda sekarang (Jam)\n>";
			cin>>waktu;
			if (format==1)
				{
					if (waktu>=0&&waktu<=12)
						cout<<"Waktu Anda menunjukkan pukul "<<waktu<<" AM menandakan ";	
					if (waktu>=0&&waktu<6)
						cout<<"dini hari";
					if (waktu>=6&&waktu<=12)
						cout<<"pagi hari";
				}
			if (format==2)
				{
					if (waktu>=0&&waktu<=12)
						cout<<"Waktu Anda menunjukkan pukul "<<waktu<<" PM menandakan ";	
					if (waktu>=0&&waktu<=3)
						cout<<"siang hari";
					if (waktu>3&&waktu<6)
						cout<<"sore hari";
					if (waktu<=6&&waktu<=12)
						cout<<"malam hari";
			else if (waktu>12||waktu<0)
				cout<<"Anda tidak memasukkan jam dengan benar!!!";
				}
		}
}