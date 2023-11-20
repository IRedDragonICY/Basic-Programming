#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Sistem Nilai V1.0\n";
	cout<<"Program ini akan memberikan target berdasarkan  \n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int bulan;
	cout<<"Sekarang bulan ke berapa?\n>";
	cin>>bulan;
	cout<<"Bulan ke-"<<bulan<<" adalah ";
	switch(bulan)
	{
		case 1:
			cout<<"bulan Januari\n";	
			break;
		case 2:
			cout<<"bulan Februari\n";	
			break;
		case 3:
			cout<<"bulan Maret\n";	
			break;
		case 4:
			cout<<"bulan April\n";
			break;
		case 5:
			cout<<"bulan Mei\n";
			break;
		case 6:
			cout<<"bulan Juni\n";
			break;
		case 7:
			cout<<"bulan Juli\n";
			break;
		case 8:
			cout<<"bulan Agustus\n";
			break;
		case 9:
			cout<<"bulan September\n";
			break;
		case 10:
			cout<<"bulan Oktober\n";
			break;
		case 11:
			cout<<"bulan November\n";
			break;
		case 12:
			cout<<"bulan Desember\n";
			break;
		default:
			cout<<"bukan termasuk penomoran bulan\n";
	}
	return(system("pause"));
	
}