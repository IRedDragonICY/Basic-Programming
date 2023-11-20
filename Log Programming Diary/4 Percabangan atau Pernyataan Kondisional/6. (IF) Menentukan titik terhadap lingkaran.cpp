#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menentukan titik terhadap lingkaran V1.0\n";
	cout<<"Disini akan menentukan titik lingkaran berdasarkan user yang dimasukkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int rumus,titik_a,titik_b,jari,var_a,var_b,var_A,var_B,var_C;
	cout<<"+=======================+\n";
	cout<<"|1 x^2+y^2=r^2          |\n";
	cout<<"|2 (x-a)^2+(y-b)^2=r^2  |\n";
	cout<<"|3 x^2+y^2+Ax+By+c=0    |\n";
	cout<<"+=======================+\n";
	cout<<"Pilih rumus lingkaran yang anda ingin masukkan\n>";
	cin>>rumus;
	system("cls");
	
	if (rumus==1)
	{
		cout<<"+=======================+\n";
		cout<<"|1 x^2+y^2=r^2          |\n";
		cout<<"+=======================+\n";
		cout<<"Tentukan letak suatu titik (p,q)\n";
		cout<<"Titik p\n>";
		cin>>titik_a;
		cout<<"Titik q\n>";
		cin>>titik_b;
		cout<<"Masukkan jari-jari lingkaran\n>";
		cin>>jari;
		if (titik_a*titik_a+titik_b*titik_b==jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak pada lingkaran dengan persamaan x^2+y^2="<<jari<<"^2";
		}
		if (titik_a*titik_a+titik_b*titik_b>jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di luar lingkaran dengan persamaan x^2+y^2="<<jari<<"^2";
		}
		if (titik_a*titik_a+titik_b*titik_b<jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di di dalam lingkaran dengan persamaan x^2+y^2="<<jari<<"^2";
		}
	}
	if (rumus==2)
	{
		cout<<"+=======================+\n";
		cout<<"|2 (x-a)^2+(y-b)^2=r^2  |\n";
		cout<<"+=======================+\n";
		cout<<"Tentukan letak suatu titik (p,q)\n";
		cout<<"Titik p\n>";
		cin>>titik_a;
		cout<<"Titik q\n>";
		cin>>titik_b;
		cout<<"Masukkan nilai a\n>";
		cin>>var_a;
		cout<<"Masukkan nilai b\n>";
		cin>>var_b;
		cout<<"Masukkan jari-jari lingkaran\n>";
		cin>>jari;
		if ((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)==jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak pada lingkaran dengan persamaan (x-"<<var_a<<")^2+(y-"<<var_b<<")^2="<<jari<<"^2";
		}
		if ((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)>jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di luar lingkaran dengan persamaan (x-"<<var_a<<")^2+(y-"<<var_b<<")^2="<<jari<<"^2";	
		}
		if((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)<jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di dalam lingkaran dengan persamaan (x-"<<var_a<<")^2+(y-"<<var_b<<")^2="<<jari<<"^2";
		}
		
	}
	if (rumus==3)
	{
		cout<<"+=======================+\n";
		cout<<"|3 x^2+y^2+Ax+By+c=0    |\n";
		cout<<"+=======================+\n";
		cout<<"Tentukan letak suatu titik (p,q)\n";
		cout<<"Titik p\n>";
		cin>>titik_a;
		cout<<"Titik q\n>";
		cin>>titik_b;
		cout<<"Masukkan nilai A\n>";
		cin>>var_A;
		cout<<"Masukkan nilai B\n>";
		cin>>var_B;
		cout<<"Masukkan nilai C\n>";
		cin>>var_C;
		titik_a=var_A/-2;
		titik_b=var_B/-2;
		jari=sqrt((titik_a*titik_a)+(titik_b*titik_b)-var_C);
		cout<<"Masukkan jari-jari lingkaran\n>";
		if ((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)==jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak pada lingkaran dengan persamaan x^2+y^2+"<<var_A<<"x+"<<var_B<<"y+"<<var_C<<"=0";
		}
		if ((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)>jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di luar lingkaran dengan persamaan x^2+y^2+"<<var_A<<"x+"<<var_B<<"y+"<<var_C<<"=0";
		}
		if((titik_a-var_a)*(titik_a-var_a)+(titik_b-var_b)*(titik_b-var_b)<jari*jari)
		{
			cout<<"Titik ("<<titik_a<<", "<<titik_b<<") terletak di dalam lingkaran dengan persamaan x^2+y^2+"<<var_A<<"x+"<<var_B<<"y+"<<var_C<<"=0";
		}
	}
}