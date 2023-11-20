#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Ukuran Almameter V1.0\n";
	cout<<"Program ini memilih ukuran Almameter sesuai user yang di inginkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	char ukuran;
	cout<<"+====================+\n";
	cout<<"|Ukuran Almameter UAD|\n";
	cout<<"|1. XXl              |\n";
	cout<<"|2. Xl               |\n";
	cout<<"|3. L                |\n";
	cout<<"|4. M                |\n";
	cout<<"+====================+\n";
	cout<<"Pilih ukuran almameter yang anda inginkan\n>";
	cin>>ukuran;
	switch (ukuran)
	{
		case '1':
			cout<<"Anda memilih almameter berukuran XXL\n";
			break;
		case '2':
			cout<<"Anda memilih almameter berukuran XL\n";
			break;
		case '3':
			cout<<"Anda memilih almameter berukuran L\n";
			break;
		case '4':
			cout<<"Anda memilih almameter berukuran M\n";
			break;
	}
	return (system("pause"));
}