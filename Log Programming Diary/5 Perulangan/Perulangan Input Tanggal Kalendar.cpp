#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Perulangan Input Tanggal Kalendar V1.0\n";
	cout<<"Disini akan menginput kalendar dengan konsep perulangan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");

	int tanggal,no_bulan,tahun;
	int session_1;
	string bulan;
	cout<<"Tanggal: xx/xx/xxxx\n";
	session_1=1;
	
	while (session_1>=0&&session_1<6)
	{
		if (session_1>=1)
		{
			if (session_1==1)
			{
				cout<<"Masukkan tanggal\n>";
				cin>>tanggal;
				system("cls");
				if (tanggal<10)
					cout<<"Tanggal: 0"<<tanggal<<"/xx/xxxx\n";
				else
					cout<<"Tanggal: "<<tanggal<<"/xx/xxxx\n";
			}
			if (session_1>3)
			{
				if (tanggal<10)
					cout<<"Tanggal: 0"<<tanggal;
				else
					cout<<"Tanggal: "<<tanggal;		
			}
		}	
		if (session_1>=2)
		{
			if (session_1==2)
			{
				cout<<"Masukkan bulan\n>";
				cin>>no_bulan;
				system("cls");
			}
			if (session_1==4)
			{
				if (no_bulan<10)
					cout<<"/0"<<no_bulan<<"/xxxx\n";
				else
					cout<<"/"<<no_bulan<<"/xxxx\n";				
			}
			if (session_1>4)
				if (no_bulan<10)
					cout<<"/0"<<no_bulan<<"/";
				else
					cout<<"/"<<no_bulan<<"/";
		}
		if (session_1==4)
		{
			cout<<"Masukkan tahun\n>";
			cin>>tahun;
			system("cls");
		}
		if (session_1>=5)
		{
			if (tahun<10)
				cout<<"000"<<tahun<<endl;
			else if (tahun<100)
				cout<<"00"<<tahun<<endl;
			else if (tahun<1000)
				cout<<"0"<<tahun<<endl;
			else
				cout<<tahun<<endl;
		}
		session_1+=1;
	}
	system("pause");
}
	