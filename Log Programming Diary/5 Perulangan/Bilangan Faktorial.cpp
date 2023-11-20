#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan Faktorial V1.0\n";
	cout<<"Disini akan menghitung suatu bilangan faktorial\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
    
    int n,x=1,hasil=1;
    cout<<"Masukkan salah satu bilangan yang ingin dicari faktorial\n>";
    cin>>n;
    system("cls");
    cout<<n<<"!"<<"=";

    for (int i=1;i<=n;i++)
    {
        cout<<x;
        hasil*=x;
        x++;
        if (x<=n)
            cout<<"X";
    }
    cout<<"="<<hasil;
    return 0;
}