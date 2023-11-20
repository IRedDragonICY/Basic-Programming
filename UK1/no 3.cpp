#include <iostream>
using namespace std;
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Increment V1.0\n";
	cout<<"Disini akan membandingkan post increment dengan pre increment\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	// post increment
	int a = 5;
	cout<<"Misalkan:\nint a=5\nint b=5\n";
	cout<<"-=Post Increment=-"<<endl;
	cout<<"Isi variabel a:"<<a<<endl;
	cout<<"Isi variabel a:"<<a++<<endl;
	cout<<"Isi variabel a:"<<a<<endl<<endl;
	// Pre increment
	int b = 5;
	cout<<"-=Pre Increment=-"<<endl;
	cout<<"Isi variabel b:"<<b<<endl;
	cout<<"Isi variabel b:"<<++b<<endl;
	cout<<"Isi variabel b:"<<b<<endl;
	return 0;
}
