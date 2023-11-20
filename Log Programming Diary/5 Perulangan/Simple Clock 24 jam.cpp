#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Simple clock 24 Hours V1.0\n";
	cout<<"Disini akan menampilkan jam simpel\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	//variabel
	int jam,menit,detik;
	cout<<"Masukkan jam\n>";
	cin>>jam;
	cout<<"Masukkan menit\n>";
	cin>>menit;
	cout<<"Masukkan detik\n>";
	cin>>detik;
	while (detik>=0&&menit>=0&&jam>=0)
	{
		detik+=1;
		if (detik>59)
		{
			menit+=1;
			detik=0;
		}
		if (menit>59)
		{
			jam+=1;
			menit=0;
		}
		if (jam>23)
			jam=0;
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
	
}
