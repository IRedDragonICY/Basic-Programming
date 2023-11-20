#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	string email,password;
	cout<<"+===========================+\n";
	cout<<"|  ___                _     |\n" ;
	cout<<"| / __|___  ___  __ _| |___ |\n";
	cout<<"|| (_ / _ \\/ _ \\/ _| |    _)|\n";
	cout<<"| \\___\\___/\\___/\\__| |_\\___||\n";
	cout<<"|               |___/       |\n";
	cout<<"|          Sign in          |\n";
	cout<<"|  Use your Google Account  |\n";
	cout<<"+===========================+\n";
	cout<<"Enter your Email or Username\n>";
	cin>>email;
	
	// Database email
	if (email == "hendik.suwoto@gmail.com")
	{
		system("cls");
		cout<<"+===========================+\n";
		cout<<"|  ___                _     |\n" ;
		cout<<"| / __|___  ___  __ _| |___ |\n";
		cout<<"|| (_ / _ \\/ _ \\/ _| |    _)|\n";
		cout<<"| \\___\\___/\\___/\\__| |_\\___||\n";
		cout<<"|               |___/       |\n";
		cout<<"|          Sign in          |\n";
		cout<<"|  Use your Google Account  |\n";
		cout<<"+===========================+\n";
		cout<<"Email: "<<email<<endl;
		cout<<"Enter your Password\n>";
		cout<<"";
		cin>>password;
		if (password == "12345")
			{
			system("cls");
			cout<<"Hello Ndik!!\n";
			cout<<"Welcome to Google!!!\n";
			system("pause");	
			}
		else
			cout<<"Wrong password. Try again";
			sleep(2);
			system("cls");
			return(main());	
	}
	else
		cout<<"Couldn't find your email";
		sleep(2);
		system("cls");
		return(main());
	
}