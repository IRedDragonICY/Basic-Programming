#include <iostream>
#include <windows.h>
using namespace std;

// variabel

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Operasi Dasar V1.0\n";
	cout<<"Program ini akan menggunaakn operasi dasar aritmatika\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	//Penjumlahan
	cout<<"7+2="<<7+2<<endl;
	
	//Pengurangan
	cout<<"7-2="<<7-2<<endl;
	
	//Perkalian
	cout<<"7x2="<<7*2<<endl;
	
	//Pembagian
	cout<<"6/2="<<6/2<<endl;
	
	//Modular
	cout<<"7%2="<<7%2<<endl;
	return (system("pause"));
	
	
	

}