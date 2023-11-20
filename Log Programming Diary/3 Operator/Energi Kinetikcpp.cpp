#include <iostream>
#include <windows.h>
using namespace std;

// Variabel
float m,v,hasil;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Energi Kinetik V1.0\n";
	cout<<"Program ini akan menghitung energi kinetik (EK)\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	cout<<"_____________________"<<endl;
	cout<<"Rumus Energi Kinetik"<<endl;
	cout<<"EK = 1/2 x m x v^2"<<endl;
	cout<<"_____________________"<<"\n\n";
	cout<<"Masukkan massa (kg) = ";
	cin>>m;
	cout<<"Masukkan kecepatan (v) = ";
	cin>>v;
	hasil = m*v*v/2;
	cout<<"Maka energi kinetik adalah sebesar "<<hasil<<" Joule"<<endl;
	cout<<"atau sebesar "<<hasil/1000<<" Kilojoule"<<endl;
	return (system("pause"));


}