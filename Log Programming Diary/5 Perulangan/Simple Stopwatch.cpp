#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Simple Stopwatch V1.0\n";
	cout<<"Disini akan menampilkan Stopwatch simpel\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	int detik,menit,jam;
	cout<<"Tentukan berapa lama Stopwatch berjalan\n";
	cout<<"Masukkan jam\n>";
	cin>>jam;
	cout<<"Masukkan menit\n>";
	cin>>menit;
	cout<<"Masukkan detik\n>";
	cin>>detik;
	while (detik>=0&&menit>=0&&jam>=0)
	{
		detik-=1;
		if (detik<0)
		{
			menit-=1;
			detik=59;
		}
		if (menit<0)
		{
			jam-=1;
			menit=59;
		}
		if (jam<0)
			jam-=1;
		sleep(1);
		system("cls");
		cout<<"+========+\n";
		if (jam<10&&jam>0)
			cout<<"|0"<<jam<<":";
		if (jam>=10)
			cout<<"|"<<jam<<":";
		if (jam==0)
			cout<<"|00:";
		if (menit<10)
			cout<<"0"<<menit<<":";
		if (menit>=10)
			cout<<menit<<":";
		if (detik<10)
			cout<<"0"<<detik<<"|\n";
		if (detik>=10)
			cout<<detik<<"|\n";
		cout<<"+========+\n";
	}
	system("cls");
	cout<<"TING!!! TING!!! TING!!! TING!!!"<<endl;
	system("pause");
	
	sleep(1.5);
	
	char awal;
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
