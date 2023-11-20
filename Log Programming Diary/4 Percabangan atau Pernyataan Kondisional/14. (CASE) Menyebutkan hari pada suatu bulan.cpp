#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menyebutkan hari pada suatu bulan V1.0\n";
	cout<<"Program ini akan menyebutkan hari pada Oktober 2022\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	//var
	int hari;
	
	//Kalender
	cout<<"_____________________"<<endl;
	cout<<"|      Kalender      |"<<endl;
	cout<<"| Oktober tahun 2020 |"<<endl;
	cout<<"|Mi Se Se Ra Ka Ju Sa| "<<endl;
	cout<<"|25 26 27 28 29 30  1|"<<endl;
	cout<<"| 2  3  4  5  6  7  8|"<<endl;
	cout<<"|09 10 11 12 13 14 15|"<<endl;
	cout<<"|16 17 18 19 20 21 22|"<<endl;
	cout<<"|23 24 25 26 27 28 29|"<<endl;
	cout<<"|30 31  1  2  3  4  5|"<<endl;
	cout<<"----------------------"<<"\n\n\n";
	sleep (3);
	
	cout<<"Sebutkan tanggal:  ";
	cin>>hari;
	switch (hari)
	{
		case 1:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Sabtu"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Hari Kesaktian Pancasila";
			break;
		case 2:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Minggu"<<endl;
			break;
		case 3:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Senin"<<endl;
			break;
		case 4:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Selasa"<<endl;
			break;
		case 5:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Rabu"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Muhammadiyyah Expo"<<endl;
			break;
		case 6:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Kamis"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Muhammadiyyah Expo"<<endl;
			break;
		case 7:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Jum'at'"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Muhammadiyyah Expo"<<endl;
			break;
		case 8:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Sabtu"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Muhammadiyyah Expo"<<endl;
			break;
		case 9:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Minggu"<<endl;
			break;
			cout<<"Event:"<<endl;
			cout<<"1. Muhammadiyyah Expo"<<endl;
		case 10:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Senin"<<endl;
			break;
		case 11:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Selasa"<<endl;
			break;
		case 12:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Rabu"<<endl;
			break;
		case 13:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Kamis"<<endl;
			break;
		case 14:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Jum'at'"<<endl;
			break;
		case 15:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Sabtu"<<endl;
			break;
		case 16:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Minggu"<<endl;
			break;
		case 17:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Senin"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Fesbuk (Festival Buku) UAD"<<endl;
			break;
		case 18:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Selasa"<<endl;
			break;
		case 19:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Rabu"<<endl;
			break;
		case 20:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Kamis"<<endl;
			break;
		case 21:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Jum'at'"<<endl;
			break;
		case 22:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Sabtu"<<endl;
			break;
		case 23:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Minggu"<<endl;
			break;
		case 24:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Senin"<<endl;
			break;
		case 25:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Selasa"<<endl;
			break;
		case 26:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Rabu"<<endl;
			break;
		case 27:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Kamis"<<endl;
			break;
		case 28:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Jum'at'"<<endl;
			break;
			cout<<"Event:"<<endl;
			cout<<"1. Hari Sumpah Pemuda"<<endl;
		case 29:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Sabtu"<<endl;
			break;
		case 30:
			cout<<"Tanggal "<<hari<<" Oktober 2022"<<endl;
			cout<<"Loading ."<<endl;
			sleep (1);
			cout<<"Loading . ."<<endl;
			sleep (2);
			cout<<"Hari ini adalah hari Minggu"<<endl;
			cout<<"Event:"<<endl;
			cout<<"1. Hari Hallowen";
			break;
		default:
			cout<<"Lihatlah kalender!!"<<endl;
			return(main());
	}
}