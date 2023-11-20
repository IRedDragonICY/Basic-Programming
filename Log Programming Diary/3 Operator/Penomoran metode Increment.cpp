#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE z= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(z,10);
	cout<<"Penomoran metode increment V1.0\n";
	cout<<"Program ini akan memberikan penomoran dengan menggukaan pre increment maupun post increment\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(z,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	int n=1;
	cout<<"Penggunaan increment pada penomoran"<<endl;
	cout<<n<<". "<<"Ini adalah nomor 1\n";
	cout<<++n<<". "<<"Ini adalah nomor 2\n";
	cout<<++n<<". "<<"Ini adalah nomor 3\n";
	cout<<++n<<". "<<"Ini adalah nomor 4\n";
	cout<<++n<<". "<<"Ini adalah nomor 5\n";
	cout<<++n<<". "<<"dan seterusnya\n";
	return (system("pause"));
}