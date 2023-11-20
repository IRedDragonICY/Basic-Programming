#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Rumus Heron V1.0\n";
	cout<<"Program ini akan mencari luas segitiga dengan rumus Heron\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	cout<<"______________________________________\n";
	cout<<"Rumus Heron\n";
	cout<<"akar dua  dari s*(s-a)*(s-b)*(s-c)\n";
	cout<<"______________________________________\n";
	
	// variabel
	float a,b,c,s,luas;
	cout<<"Masukkan sisi pertama = ";
	cin>>a;
	cout<<"Masukkan sisi kedua = ";
	cin>>b;
	cout<<"Masukkan sisi ketiga = ";
	cin>>c;
	s = (a+b+c)/2;
	luas = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Luas segitiga adalah "<<luas<<endl;
	return(system("pause"));
}