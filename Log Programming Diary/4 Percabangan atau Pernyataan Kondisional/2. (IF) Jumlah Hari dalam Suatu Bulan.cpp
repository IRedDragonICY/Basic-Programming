#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Jumlah Hari dalam Suatu Bulan V1.0\n";
	cout<<"Program ini akan menyebutkan hari pada suatu bulan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	// var
	string Bulan1="Januari",Bulan2="Februari",Bulan3="Maret",Bulan4="April",Bulan5="Mei",Bulan6="Juni",Bulan7="Juli",Bulan8="Agustus",Bulan9="September",Bulan10="Oktober",Bulan11="November",Bulan12="Desember";
	string bulan1="januari",bulan2="februari",bulan3="maret",bulan4="april",bulan5="mei",bulan6="juni",bulan7="juli",bulan8="agustus",bulan9="september",bulan10="oktober",bulan11="november",bulan12="desember";
	string bulan;
	char jumlah_hari;
	cout<<"Masukkan bulan : ";
	cin>>bulan;
	//Jumlah 31 Hari
	if (bulan==Bulan1||bulan==bulan1||bulan==Bulan3||bulan==bulan3||bulan==Bulan5||bulan==bulan5||bulan==Bulan7||bulan==bulan7||bulan==Bulan8||bulan==bulan8||bulan==Bulan10||bulan==bulan10||bulan==Bulan12||bulan==bulan12)
	{
		cout<<"Bulan "<<bulan<<" memiliki jumlah hari sebanyak ";
		cout<<"31 hari";
	}
	//Jumlah 30 Hari
	if (bulan==Bulan4||bulan==bulan4||bulan==Bulan6||bulan==bulan6||bulan==Bulan9||bulan==bulan9||bulan==Bulan11||bulan==bulan11)
	{
		cout<<"Bulan "<<bulan<<" memiliki jumlah hari sebanyak ";
		cout<<"30 hari";
	}
	//Jumlah 29/30 Hari
	if (bulan==Bulan2||bulan==bulan2)
	{
		cout<<"Bulan "<<bulan<<" memiliki jumlah hari sebanyak ";
		cout<<"29/30 hari";
	}	
		
}