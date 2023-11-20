#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Indikator Nilai V1.0\n";
	cout<<"Program ini akan memberikan nilai berdasarkan nilai yang Anda dapatkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float nilai;
	cout<<"Pembagian Nilai Mata Kuliah Dasar Pemrograman"<<endl;
	cout<<"|Di atas KKM|\n";
	cout<<"|A+ = 100-95|\n";
	cout<<"|A  =  94-90|\n";
	cout<<"|A- =  89-85|\n";
	cout<<"|B+ =  84-80|\n";
	cout<<"|B  =  75-79|\n";
	cout<<"|B- =  74-70|\n";
	cout<<"|Remedial   |\n";
	cout<<"|C  =  <69  |\n";
	sleep(1);
	cout<<"Masukkan akumulasi nilai Anda = ";
	cin>>nilai;
	cout<<"Mengolah nilai . "<<endl;
	sleep(1);
	cout<<"Mengolah nilai . . "<<endl;
	sleep (2);
	cout<<"Mengolah nilai . . . "<<endl;
	if (nilai<=100 && 95<=nilai)
	{
		cout<<"Anda mendapatkan predikat A+, pertahankan!!";
	}
	if (nilai<=95 && 90<=nilai)
	{
		cout<<"Anda mendapatkan predikat A, pertingkatkan untuk mendapatkan A+";
	}
	if (nilai<=89 && 85<=nilai)
	{
		cout<<"Anda mendapatkan predikat A-, pertingkatkan untuk mendapatkan A";
	}
	if (nilai<=84 && 80<=nilai)
	{
		cout<<"Anda mendapatkan predikat B+, pertingkatkan untuk mendapatkan A-";
	}
	if (nilai<=79 && 75<=nilai)
	{
		cout<<"Anda mendapatkan predikat B, pertingkatkan untuk mendapatkan B+";
	}	
	if (nilai<=74 && 70<=nilai)
	{
		cout<<"Anda mendapatkan predikat B-, pertingkatkan untuk mendapatkan B";
	}
	if (nilai<=69 && 0<=nilai)
	{
		cout<<"Anda perlu mengulang mata kuliah Dasar Pemrograman";
	}
	else
	{
		cout<<"Masukkan nilai dengan benar!!"<<endl;
		cout<<"Program ini akan otomatis mengulang"<<endl;
		cout<<"5"<<endl;
		sleep(1);
		cout<<"4"<<endl;
		sleep(1);
		cout<<"3"<<endl;
		sleep(1);
		cout<<"2"<<endl;
		sleep(1);
		cout<<"1"<<endl;
		sleep(1);
		cout<<"0"<<endl<<endl;
		system("cls");
		return (main());
	}
}