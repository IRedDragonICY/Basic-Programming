#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Energi Kinetik V1.0\n";
	cout<<"Program ini akan menghitung energi mekanik (EM)\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	// Variabel
	float m,g,h,v,ep,ek,em;
	g = 10;

	cout<<"_____________________"<<endl;
	cout<<"Rumus Energi Potensial"<<endl;
	cout<<"EK = m x g x h"<<endl;
	cout<<"nilai g = 10 m/s"<<endl;
	cout<<"Rumus Energi Kinetik"<<endl;
	cout<<"EK = 1/2 x m x v^2"<<endl;
	cout<<"Rumus Energi Mekanik"<<endl;
	cout<<"EM = EP + EK"<<endl;
	cout<<"_____________________"<<"\n\n";
	cout<<"1. Mencari energi potensial"<<endl;
	cout<<"Masukkan massa (kg) = ";
	cin>>m;
	cout<<"Masukkan ketinggian (m) = ";
	cin>>h;
	ek = m*g*h;
	cout<<"Maka energi kinetik adalah sebesar "<<ep<<" Joule"<<endl;
	cout<<"atau sebesar "<<ep/1000<<" Kilojoule"<<endl;
	
	cout<<"2. Mencari energi potensial"<<endl;
	
	cout<<"Masukkan massa (kg) = ";
	cin>>m;
	cout<<"Masukkan kecepatan (v) = ";
	cin>>v;
	ek = m*v*v/2;
	cout<<"Maka energi kinetik adalah sebesar "<<ek<<" Joule"<<endl;
	cout<<"atau sebesar "<<ek/1000<<" Kilojoule"<<endl;
	
	cout<<"3. Mencari energi Mekanik"<<endl;
	em=ek+ep;
	cout<<"Maka energi kinetik adalah sebesar "<<em<<" Joule"<<endl;
	cout<<"atau sebesar "<<em/1000<<" Kilojoule"<<endl;
	return (system("pause"));


}