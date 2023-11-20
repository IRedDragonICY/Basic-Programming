#include <iostream>
#include <windows.h>

using namespace std;

char a,b;
float c,d;

void akhir()
{
	cout<<"Suhu akhir adalah "<<d;
}
void celcius()
{
	akhir();
	cout<<" derajat Celcius\n";
	system("pause");
}

void reamur()
{
	akhir();
	cout<<" derajat Reamur\n";
}
void fahrenheit()
{
	akhir();
	cout<<" derajat Fahrenheit\n";
}
void kelvin()
{
	akhir();
	cout<<" Kelvin\n";
	system("pause");
}
	

int main ()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Suhu Konverter V1.0\n";
	cout<<"Program ini akan mengubah satuan suhu\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);

	cout<<"_________________\n";
	cout<<"C : Celcius\n";
	cout<<"R : Reamur\n";
	cout<<"F : Fahrenheit\n";
	cout<<"K : Kelvin\n";
	cout<<"_________________\n";
	cout<<"Satuan awal suhu (C/R/F/K) = ";
	cin>>a,"\n";
	cout<<"Satuan akhir suhu (C/R/F/K) = ";
	cin>>b;
	if (a == 'C' || a == 'c')
	{
		cout<<"Suhu Awal (Celcius) = ";
		cin>>c;		
		if (b == 'C' || b == 'c')
		{
			d = c;
			celcius();
		}
		if (b == 'R' || b == 'r')
		
		{
			d = c*4/5;
			reamur();
		}
		if (b == 'F' || b == 'f')
		{
			d = c*9/5+32;
			fahrenheit();
		}
		if (b == 'K' || b == 'k')
		{
			d = c+273;
			kelvin();
		}
	}
	if (a == 'R' || a == 'r')
	{
		cout<<"Suhu Awal (Reamur) = ";
		cin>>c;
		if (b == 'C' || b == 'c')
		{
			d = c*5/4;
			celcius();
		}
		if (b == 'R' || b == 'r')
		{
			d = c;
			reamur();
		}
		if (b == 'F' || b == 'f')
		{
			d = c*9/4+32;
			fahrenheit();
		}
		if (b == 'K' || b == 'k')
		{
			d = c*5/4+273;
			kelvin();
		}
	}
	if (a == 'F' || a == 'f')
	{
		cout<<"Suhu awal (Fahrenheit) = ";
		cin>>c;
		if (b == 'C' || b == 'c')
		{
			d = (c-32)*5/9;
			celcius();
		}
		if (b == 'R' || b == 'r')
		{
			d = (c-32)*4/9;
			reamur();
		}
		if (b == 'F' || b == 'f')
		{
			d = c;
			fahrenheit();
		}
		if (b == 'K' || b == 'k')
		{
			d = (c-32)*5/9+273;
			kelvin();
		}
	}
	if (a == 'K' || a == 'k')
	{
		cout<<"Suhu awal (Kelvin) = ";
		cin>>c;
		if (b == 'C' || b == 'c')	
		{
			d = c-273;
			celcius(); 
		}
		if (b == 'R' || b == 'r')
		{
			d = (c-273)*4/5;
			reamur();
		}
		if (b == 'F' || b == 'f')
		{
			d = (c-273)*9/5+32;
			fahrenheit();
		}
		if (b == 'K' || b == 'k')
		{
			d = c;
			kelvin();
		}
	}
}
