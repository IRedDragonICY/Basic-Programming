#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji penambahan unsigned dan long pada masing masing tipe data\n";
	cout<<"Program ini akan mengetest kemampuan penambahan tipe data unsigned dan long pada tipe data lainnya\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	// Penambahan tipe data unsigned
	unsigned data1;
	unsigned char data2;
	unsigned int data3;
	// unsigned string data4; //[Error] expected initializer before 'data4'
	// unsigned void data5(); //[Error]'unsigned' specified with 'void'
	// unsigned float data6; //[Error]'unsigned' specified with 'float'
	// unsigned double data7; //[Error]'unsigned' specified with 'double'
	// unsigned bool data8; //[Error]'unsigned' specified with 'bool'
	// unsigned wchar_t data9; //[Error]'unsigned' specified with 'typeof'
	// unsigned unsigned data10; //[Error]duplicate 'unsigned'
	
	// Penambahan tipe data long
	long data11;
	long long data12;
	//long long long data13; //[Error]'long long long' is too long for GCC
	//long void data14(); //[Error]'long' specified with 'void'
	long int data15;
	long long int data16;
	//long long long int data17; //[Error]'long long long' is too long for GCC
	//long float data18; //[Error]'long' specified with 'float'
	long double data19;
	//long long double data20; //[Error]'long long' specified with 'float'
	//long long long double data21; //[Error]'long long long' is too long for GCC
	//long char data22; //[Error]'long' specified with 'float'
	//long bool data23; //[Error]'long' specified with 'float'
	//long wchar_t data24; //[Error]'long' specified with 'typeof'
	
	//Penambahan tipe data unsigned dan long pada tipe data yang bisa.
	unsigned long data25;
	unsigned long long data26;
	//unsigned long long long data27; //[Error]'long long long' is too long for GCC
	unsigned long int data28;
	unsigned long long int data29;
	//unsigned long long long int data30; //[Error]'long long long' is too long for GCC
	return(system("pause"));
}