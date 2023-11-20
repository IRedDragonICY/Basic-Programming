#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Keliling Bangun Datar V1.0\n";
	cout<<"Program ini akan menentukan luas suatu bangun datar\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	char keliling;
	cout<<"+====================+\n";
	cout<<"|    Bangun Datar    |\n";
	cout<<"|1. Persegi          |\n";
	cout<<"|2. Persegi panjang  |\n";
	cout<<"|3. Segitiga         |\n";
	cout<<"|4. Trapesium        |\n";
	cout<<"+====================+\n";
	cout<<"Pilih bangun datar yang Anda inginkan \n>";
	cin>>keliling;
	system("cls");
	switch (keliling)
	{
		case '1':
		{
			cout<<"+====================+\n";
			cout<<"|1. Persegi          |\n";
			cout<<"+====================+\n";
			cout<<"Masukkan panjang sisi\n>";
			int sisi;
			cin>>sisi;
			cout<<"Keliling persegi: "<<4*sisi<<endl;
			return (system("pause"));
			break;
			
		}
		case '2':
			cout<<"+====================+\n";
			cout<<"|2. Persegi panjang  |\n";
			cout<<"+====================+\n";
			int panjang,lebar;
			cout<<"Masukkan panjang\n>";
			cin>>panjang;
			cout<<"Masukkan lebar\n>";
			cin>>lebar;
			cout<<"Keliling persegi panjang: "<<2*(panjang+lebar)<<endl;
			return (system("pause"));
			
			break;
		case '3':
			cout<<"+====================+\n";
			cout<<"|3. Segitiga         |\n";
			cout<<"+====================+\n";
			int sisi_1,sisi_2,sisi_3;
			cout<<"Masukkan panjang sisi pertama\n>";
			cin>>sisi_1;
			cout<<"Masukkan panjang sisi kedua\n>";
			cin>>sisi_2;
			cout<<"Masukkan panjang sisi ketiga\n>";
			cin>>sisi_3;
			cout<<"Keliling segitiga: "<<sisi_1+sisi_2+sisi_3<<endl;
			return (system("pause"));
			break;
			
		case '4':
			cout<<"+====================+\n";
			cout<<"|4. Trapesium        |\n";
			cout<<"+====================+\n";
			break;
			int alas_b,alas_a,sisi_miring;
			cout<<"Masukkan alas bawah\n>";
			cin>>alas_b;
			cout<<"Masukkan alas atas\n>";
			cin>>alas_a;
			cout<<"Masukkan sisi miring\n>";
			cin>>sisi_miring;
			cout<<"Keliling Trapesium: "<<alas_a+alas_b+2*sisi_miring;
			return (system("pause"));
			break;
			
	}
}