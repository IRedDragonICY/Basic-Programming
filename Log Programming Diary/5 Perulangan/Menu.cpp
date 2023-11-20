#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menu v1.0\n";
	cout<<"Disini akan contoh menu yang ada di game\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");

    int tick=0,session=0,option;
    while (tick==0)
    {
        if (session==0)
        {
            cout<<"+=======================================+\n";
            cout<<"|Options Graphics Genshin Impact Impact |\n";
            cout<<"|1  Start                               |\n";
            cout<<"|2  Multiplayer                         |\n";
            cout<<"|3  Options                             |\n";
            cout<<"|4  Quit Game                           |\n";
            cout<<"+=======================================+\n>";
            cin>>option;
            switch (option)
            {
            case 1:
                session=1;
                break;
            case 2:
                session=2;
                break;
            case 3:
                session=3;
                break;
            case 4:
                cout<<"Game will closed";
                sleep(1);
                cout<<"3\n";
                sleep(1);
                cout<<"2\n";
                sleep(1);
                cout<<"1\n";
                sleep(1);
                cout<<"0\n";
                tick=1;
                break;
            }
        }

        if (session==1)
        {
            cout<<"Options";
            cout<<"1. Antialising : "
            cout<<"9 exit ";
            

        }

    }

}
