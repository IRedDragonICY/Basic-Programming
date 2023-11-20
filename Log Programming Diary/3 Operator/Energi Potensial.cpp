#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Energi Kinetik V1.0\n";
	cout<<"Program ini akan menghitung energi potensial (EP)\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	// Variabel
	float m,g,h,hasil;
	g = 10;

	cout<<"_____________________"<<endl;
	cout<<"Rumus Energi Potensial"<<endl;
	cout<<"EK = m x g x h"<<endl;
	cout<<"nilai g = 10 m/s"<<endl;
	cout<<"_____________________"<<"\n\n";
	cout<<"Masukkan massa (kg) = ";
	cin>>m;
	cout<<"Masukkan ketinggian (m) = ";
	cin>>h;
	hasil = m*g*h;
	cout<<"Maka energi kinetik adalah sebesar "<<hasil<<" Joule"<<endl;
	cout<<"atau sebesar "<<hasil/1000<<" Kilojoule"<<endl;
	return (system("pause"));


}