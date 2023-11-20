#include <iostream>
#include <windows.h>
#define K 9000000000
using namespace std;

// variabel
double q1,q2,r,hasil;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Hukum Coulomb V1.0\n";
	cout<<"Program ini akan menghitung gaya tolak menolak\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	cout<<"Pastikan!!!\n";
	cout<<"==============================\n";
	cout<<"1. Pastikan satuan sudah Coulomb\n";
	cout<<"2. Masukkan variabel dengan tepat\n";
	cout<<"3. Nilai desimal, dipastikan dituliskan dengna angka desimal! (Misalnya 10^-1 ditulis 0.1)\n";
	cout<<"==============================\n";
	cout<<"Langkah Pengerjaan\n";
	cout<<"Rumus Coulomb adalah\n";
	cout<<"     q_1xq_2\n";
	cout<<" K x -------\n";
	cout<<"      r^2\n";
	cout<<"q1 = .... C\n";
	cout<<"Masukkan nilai q1 = ";
	cin>>q1;
	cout<<"q2 = .... C\n";
	cout<<"Masukkan nilai q2 = ";
	cin>>q2;
	
	cout<<"r = .... m\n";
	cout<<"masukkan nilai r = ";
	cin>>r;
	cout<<"========================\n";
	cout<<"Data yang dimasukkan\n";
	cout<<"q1 = "<<q1<<endl;
	cout<<"q2 = "<<q2<<endl;
	cout<<"r = "<<r<<endl;
	cout<<"========================\n";
	hasil = K*(q1*q2)/(r*r);
	cout<<"Maka, besar gaya tolak-menolak antara kedua muatan tersebut adalah "<<hasil<<" Newton"; 
	
}