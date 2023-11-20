#include <iostream>
#include <windows.h>
using namespace std;

void daftar_waktu()
{
	cout<<"+==============+\n";
	cout<<"|KONVERSI WAKTU|\n";
	cout<<"|1. Jam        |\n";
	cout<<"|2. Menit      |\n";
	cout<<"|3. Detik      |\n";
	cout<<"+==============+\n";
}
int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Konversi WaktuV1.0\n";
	cout<<"Program ini akan mengkonversi waktu detik, menit dan jam\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	int detik,menit,jam;
	int waktu,waktu_2;
	char awal;

	cout<<"+==============+\n";
	cout<<"|KONVERSI WAKTU|\n";
	cout<<"|1. Jam        |\n";
	cout<<"|2. Menit      |\n";
	cout<<"|3. Detik      |\n";
	cout<<"+==============+\n";
	
	cout<<"Pilih konversi waktu pertama yang diinginkan! (1|2|3)\n>";
	cin>>waktu;
	system("cls");
	
	switch (waktu)
	{
		case 1:
			daftar_waktu();
			cout<<"Pilih konversi waktu kedua yang diinginkan! (1|2|3)\n>";
			cin>>waktu_2;
			switch (waktu_2)
			{
				case 1:
					cout<<"+============================+\n";
					cout<<"|Mengubah jam ke jam         |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan jam\n>";
					cin>>jam;
					cout<<"Hasil: "<<jam<<" jam\n";
					break;
				case 2:
					cout<<"+============================+\n";
					cout<<"|Mengubah jam ke menit       |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan jam\n>";
					cin>>jam;
					cout<<"Hasil: "<<jam*60<<" menit\n";
					break;
				case 3:
					cout<<"+============================+\n";
					cout<<"|Mengubah jam ke detik       |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan jam\n>";
					cin>>jam;
					cout<<"Hasil: "<<jam*3600<<" detik\n";
					break;	
			}
			break;
		case 2:
			daftar_waktu();
			cout<<"Pilih konversi waktu kedua yang diinginkan! (1|2|3)\n>";
			cin>>waktu_2;
			switch (waktu_2)
			{
				case 1:
					cout<<"+============================+\n";
					cout<<"|Mengubah menit ke jam       |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan menit\n>";
					cin>>menit;
					cout<<"Hasil: "<<menit/60<<" jam\n";
					break;
				case 2:
					cout<<"+============================+\n";
					cout<<"|Mengubah detik ke menit     |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan menit\n>";
					cin>>menit;
					cout<<"Hasil: "<<menit<<" menit\n";
					break;
				case 3:
					cout<<"+============================+\n";
					cout<<"|Mengubah detik ke detik     |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan menit\n>";
					cin>>menit;
					cout<<"Hasil: "<<menit*60<<" detik\n";
					break;	
			}
			break;
		case 3:
			daftar_waktu();
			cout<<"Pilih konversi waktu kedua yang diinginkan! (1|2|3)\n>";
			cin>>waktu_2;
			switch (waktu_2)
			{
				case 1:
					cout<<"+============================+\n";
					cout<<"|Mengubah detik ke jam       |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan detik\n>";
					cin>>detik;
					cout<<"Hasil: "<<detik/3600<<" jam\n";
					break;
				case 2:
					cout<<"+============================+\n";
					cout<<"|Mengubah detik ke menit     |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan detik\n>";
					cin>>detik;
					cout<<"Hasil: "<<detik/60<<" menit\n";
					break;
				case 3:
					cout<<"+============================+\n";
					cout<<"|Mengubah detik ke detik     |\n";
					cout<<"+============================+\n";
					cout<<"Masukkan detik\n>";
					cin>>detik;
					cout<<"Hasil: "<<detik<<" detik\n";
					break;	
			}
			break;
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