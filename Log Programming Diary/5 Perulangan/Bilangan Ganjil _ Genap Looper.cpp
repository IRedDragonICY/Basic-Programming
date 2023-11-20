#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan ganjil & genap looper V1.0\n";
	cout<<"Disini akan menampilkan bilangan ganjil maupun genap dengan batas tertentu\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	int bilangan,jenis_bilangan,batas_bwh,batas_ats,loop_bilangan;
    char cek;
	string str_bilangan;
    session_0:
	cout<<"+=================+\n";
	cout<<"| Bilangan Looper |\n";
	cout<<"|1 Bilangan ganjil|\n";
	cout<<"|2 Bilangan genap |\n";
	cout<<"+=================+\n";
	cout<<"Pilih jenis bilangan yang akan diperulangkan\n>";
	cin>>jenis_bilangan;
	switch (jenis_bilangan)
	{
		case 1:
            loop_bilangan=1;
			str_bilangan="ganjil";
			break;
		case 2:
			loop_bilangan=2;
            str_bilangan="genap";
			break;
	}	
	cout<<"Output: Anda memilih bilangan "<<str_bilangan<<endl;
    sleep(1);
    session_1:
	cout<<"Pilih batas bawah bilangan\n>";
	cin>>batas_bwh;
	cout<<"Pilih batas atas bilangan\n>";
    cin>>batas_ats;
    if (batas_bwh>batas_ats)
    {
        cout<<"Angka pada batas bawah lebih besar daripada batas atas"<<
        sleep(1);
        system("cls");
        goto session_1;
    }
    cout<<"{x |"<<batas_bwh<<"<x<"<<batas_ats<<", x merupakan bilangan "<<str_bilangan<<"}\n";

    cout<<"apakah sudah yakin??(Y|N)\n>";
    cin>>cek;
    switch (cek)
    {
        case 'y':
        case 'Y':
            break;
        case 'n':
        case 'N':
            system ("cls");
            goto session_0;
            break;
    }
    cout<<"bilangan "<<str_bilangan<<":\n";
	for (int x=batas_bwh+1;batas_bwh<x&&batas_ats>x;x++)
    {
        if (jenis_bilangan==1)
        {
            if (x%2!=0)
                cout<<x<<endl;
        }
        else
            if (x%2==0)
                cout<<x<<endl;
        
    }
    return 0;
}	