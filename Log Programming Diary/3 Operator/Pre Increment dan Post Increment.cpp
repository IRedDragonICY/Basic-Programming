#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Post Increament dan Pre Increcment V1.0\n";
	cout<<"Program ini mencoba kegunaan Icrement operator\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	// Post Increment
	int a=2;
	cout<<"Post Increment"<<endl;
	cout<<"Jika variabel a=2"<<endl;
	cout<<"1. Ini adalah varibel a : "<<a<<endl;
	cout<<"2. Ini adalah varibel a : "<<a++<<endl;
	cout<<"3. Ini adalah varibel a : "<<a<<endl;
	int b=2;
	cout<<"Pre Increment"<<endl;
	cout<<"Jika variabel b=2"<<endl;
	cout<<"1. Ini adalah varibel b : "<<b<<endl;
	cout<<"2. Ini adalah varibel b : "<<++b<<endl;
	cout<<"3. Ini adalah varibel b : "<<b<<endl;
	return(system("pause"));
	
}