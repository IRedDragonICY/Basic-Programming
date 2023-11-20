#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji unsigned char\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data unsigned char\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	unsigned char data;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"unsigned char ";
	SetConsoleTextAttribute(h,15);
	cout<<"data;\n\n";

	data=9;
	cout<<"Q: Data yang dimasukkan (Misalnya data = 9)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data=-9;
	cout<<"Q: Data yang dimasukkan (Misalnya data = -9)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data=-999999;
	cout<<"Q: Data yang dimasukkan (Misalnya data = -999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data=-1;
	cout<<"Q: Data yang dimasukkan (Misalnya data = -1)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);	
	data=0.9;
	cout<<"Q: Data yang dimasukkan (Misalnya data = 0.9)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='1';
	cout<<"Q: Data yang dimasukkan (Misalnya data = '1')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='1234567890';
	cout<<"Q: Data yang dimasukkan (Misalnya data = '1234567890')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='-1';
	cout<<"Q: Data yang dimasukkan (Misalnya data = '-1')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='a';
	cout<<"Q: Data yang dimasukkan (Misalnya data = 'a')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	data='sdaiofjawojfsajfknasfjniguenvrndhfbsihfndsjcnskj';
	cout<<"Q: Data yang dimasukkan (Misalnya data = 'sdaiofjawojfsajfknasfjniguenvrndhfbsihfndsjcnskj')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	return(system("pause"));
}