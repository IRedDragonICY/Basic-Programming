#include <iostream>
#include <windows.h>
#include <math.h>
#define PI 3.14159265
using namespace std;

float a, b, c, s, sudut1, sudut2, luas;
char tugas;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Segitiga Calculator V1.0\n";
	cout<<"Program ini akan menghitung luas segitiga\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	cout<<"____________________________________________________________________\n";
	cout<<"Masukkan salah satu nomor untuk pengerjaan luas segitiga\n";
	cout<<"1. jika diketahui alas dan tinggi\n";
	cout<<"2. Jika diketahui ketiga sisi\n";
	cout<<"3. Jika diketahui kedua sisi dan salah satu sudut\n";
	cout<<"4. Jika diketahui kedua sudut dan salah satu sisi\n";
	cout<<"____________________________________________________________________\n";
	cout<<"Anda ingin melakukan apa?\n";
	cout<<"Masukkan nomor = ";
	cin>>tugas;
	cout<<"\n\n\n";
	
	//Rumus
	switch(tugas)
	{
		case '1':
			cout<<"Masukkan alas segitiga = ";
			cin>>a;
			cout<<"Masukkan tinggi segitiga = ";
			cin>>b;
			luas = a*b/2;
			break;
		case '2':
			cout<<"Masukkan sisi pertama = ";
			cin>>a;
			cout<<"Masukkan sisi kedua = ";
			cin>>b;
			cout<<"Masukkan sisi ketiga = ";
			cin>>c;
			s = (a+b+c)/2;
			luas = sqrt(s*(s-a)*(s-b)*(s-c));
			break;
		case '3':
			cout<<"Masukkan sisi pertama = ";
			cin>>a;
			cout<<"Masukkan sisi kedua = ";
			cin>>b;
			cout<<"Masukkan sudut = ";
			cin>>sudut1;
			luas =(a*b*sin(sudut1*PI/180))/2;
			break;
		case '4':
			cout<<"Masukkan sudut pertama = ";
			cin>>sudut1;
			cout<<"Masukkan sudut kedua = ";
			cin>>sudut2;
			cout<<"Masukkan sisi = ";
			cin>>a;
			luas =(a*a*(sin(sudut1*PI/180))*sin(sudut2*PI/180))/(2*sin((180-sudut1-sudut2)*PI/180));
			break;
		default:
			cout<<"kamu tidak menulis angka dengan benar!!";
			break;
	}
	cout<<"Luas segitiga adalah "<<luas;
	return(system("pause"));


}