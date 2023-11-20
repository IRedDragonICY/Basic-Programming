#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji string\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data string\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	string data;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"string ";
	SetConsoleTextAttribute(h,15);
	cout<<"data;\n\n";
	
	data="ini adalah string";
	cout<<"Q: data yang dimasukkan (Misalnya data = \"Ini adalah string\")\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='Ini adalah string';
	cout<<"Q: data yang dimasukkan (Misalnya data = 'Ini adalah string')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data="????";
	cout<<"Q: data yang dimasukkan (Misalnya data = \"????\")\n"; // mencoba bahasa arab
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data="??";
	cout<<"Q: data yang dimasukkan (Misalnya data = \"??\")\n"; // mencoba emoji
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data="!@#$%^&*()_+{}:\"<>?\\\"";
	cout<<"Q: data yang dimasukkan (Misalnya data = \"!@#$%^&*()_+{}:\"<>?\\\")\n"; // mencoba emoji
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);	
	return(system("pause"));
}