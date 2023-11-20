#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji pengaturan nama variabel\n";
	cout<<"Program ini akan mengetest penamaan variabel\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	//Nama yang dapat digunakan
	int a;
	int A;
	int abc;
	int Abc;
	int _abc;
	int _;
	int abc$;
	int abc$abc$;
	int _abc_abc_abc;
	int $$$$$$$$$$$$$$$$$$$$$$$$;
	int $1214915;
	int a214021592;
	int rqjowrjijronfonaiofnoaeirioanfsioadnakoejaoensaodawmaomeoaeawoemaomfoamsoamfarqjowrjijronfonaiofnoaeirioanfsioadnakoejaoensaodawmaomeoaeawoemaomfoamsoamfarqjowrjijronfonaiofnoaeirioanfsioadnakoejaoensaodawmaomeoaeawoemaomfoamsoamfarqjowrjijronfonaiofnoaeirioanfsioadnakoejaoensaodawmaomeoaeawoemaomfoamsoamfa;
	int ______________________________________________________________________________________________;
	int $;
	int rwara();
	int gdsgds[5];
	int safetta{};

	//Nama yang tidak dapat digunakan
	//int #include; //[Error]stray '#'in program
	//int @; //[Error]stray '@'in program
	//int `; //[Error]stray '~'in program
	//int !; //[Error]expected unqualified-id before '!' token
	//int ?; //[Error]expected unqualified-id before '?' token
	//int %; //[Error]expected unqualified-id before '%' token
	//int ^; //[Error]expected unqualified-id before '^' token
	//int for; //[Error]expected unqualified-id before 'for' token
	//int 0; //[Error]expected unqualified-id before numeric constant
	//int ~; //[Error]expected class-name before ';' token
	//int +; //[Error]expected class-name before ';' token
	//int <; //[Error] 'int' is not a template
	//int >; //[Error] 'int' is not a template
	//int ?; //[Error] expected unqualified-id before '?' token
	//int int; //[Error] multiple types in one declaration
	//int "test"; //[Error] expected unqualified-id before string constant
	int cout = 1; // data di variabel tidak tersimpan
	cout<<cout;
	int cin = 1; // data di variabel tidak tersimpan
	cout<<cin;
	cin>>cin; // tidak dapat memasukkan data ke variabel dan langsung di ignore
	cin>>cout; // tidak dapat memasukkan data ke variabel dan langsung di ignore
	return 0;
}