#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Tabel Kebenaran V1.0\n";
	cout<<"Disini akan membuat tabel kebenaran berdasarkan dua pernyataan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	char perangkai,pernyataan1,pernyataan2,negasi;
	cout<<"Masukkan perangkai logika yang ingin dibuat\n";
	cout<<"+=================+\n";
	cout<<"|perangkai logika:|\n";
	cout<<"|d: dan           |\n";
	cout<<"|a: atau          |\n";
	cout<<"|i: implikasi     |\n";
	cout<<"|b: biimplikasi   |\n";
	cout<<"+=================+\n";
	cout<<"Masukkan perangkai yang ingin dimasukkan (d/a/i/b): ";
	cin>>perangkai;
	cout<<endl<<endl;
	sleep(2);
	switch (perangkai)
	{
		//Logika AND
		case 'D':
		case 'd':
			cout<<"-- Menentukan variabel pada pernyataan atomik --\n";
			sleep(1);
			cout<<"Masukkan variabel pernyataan atomik pertama: ";
			cin>>pernyataan1;
			cout<<"Masukkan variabel pernyataan atomik kedua: ";
			cin>>pernyataan2;
			cout<<"\n\npenggunaan negasi pada pernyataan\n";
			cout<<"+================================+\n";
			cout<<"|    I  II                       |\n";
			cout<<"|1 [~"<<pernyataan1<<"][~"<<pernyataan2<<"]                      |\n";
			cout<<"|2 [~"<<pernyataan1<<"][ "<<pernyataan2<<"]                      |\n";
			cout<<"|3 [ "<<pernyataan1<<"][~"<<pernyataan2<<"]                      |\n";
			cout<<"|4 [ "<<pernyataan1<<"][ "<<pernyataan2<<"]                      |\n";
			cout<<"+================================+\n";
			cout<<"Masukkan no (1|2|3|4|5): ";
			cin>>negasi;
			switch (negasi)
			{
				case '1':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"\n-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"|~"<<pernyataan1<<" |~"<<pernyataan2<<" |~"<<pernyataan1<<"^~"<<pernyataan2<<"|\n";
					cout<<"| F | F |  F  |\n";
					cout<<"| F | T |  F  |\n";
					cout<<"| T | F |  F  |\n";
					cout<<"| T | T |  T  |\n";
					cout<<"+-------------+\n";
					break;
				case '2':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"|~"<<pernyataan1<<" | "<<pernyataan2<<" |~"<<pernyataan1<<"^ "<<pernyataan2<<"|\n";
					cout<<"| F | T |  F  |\n";
					cout<<"| F | F |  F  |\n";
					cout<<"| T | T |  T  |\n";
					cout<<"| T | F |  F  |\n";
					cout<<"+-------------+\n";
					break;
				case '3':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"| "<<pernyataan1<<" |~"<<pernyataan2<<" | "<<pernyataan1<<"^~"<<pernyataan2<<"|\n";
					cout<<"| T | F |  F  |\n";
					cout<<"| T | T |  T  |\n";
					cout<<"| F | F |  F  |\n";
					cout<<"| F | T |  F  |\n";
					cout<<"+-------------+\n";
				case '4':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"| "<<pernyataan1<<" | "<<pernyataan2<<" | "<<pernyataan1<<"^ "<<pernyataan2<<"|\n";
					cout<<"| T | T |  T  |\n";
					cout<<"| T | F |  F  |\n";
					cout<<"| F | T |  F  |\n";
					cout<<"| F | F |  F  |\n";
					cout<<"+-------------+\n";
				default:
				cout<<"Anda tidak memasukkan pernyataan huruf dengan benar!!\n";
					cout<<"Program ini akan mengulang\n";
					cout<<"3\n";
					sleep(1);
					cout<<"2\n";
					sleep(1);
					cout<<"1\n";
					sleep(1);
					cout<<"0\n";
					system("cls");
					return(main());	
			}	
			break;
			
		//Logika OR
		case 'A':
		case 'a':
			cout<<"-- Menentukan variabel pada pernyataan atomik --\n";
			sleep(1);
			cout<<"Masukkan variabel pernyataan atomik pertama: ";
			cin>>pernyataan1;
			cout<<"Masukkan variabel pernyataan atomik kedua: ";
			cin>>pernyataan2;
			cout<<"\n\npenggunaan negasi pada pernyataan\n";
			cout<<"+================================+\n";
			cout<<"|    I  II                       |\n";
			cout<<"|1 [~"<<pernyataan1<<"][~"<<pernyataan2<<"]                      |\n";
			cout<<"|2 [~"<<pernyataan1<<"][ "<<pernyataan2<<"]                      |\n";
			cout<<"|3 [ "<<pernyataan1<<"][~"<<pernyataan2<<"]                      |\n";
			cout<<"|4 [ "<<pernyataan1<<"][ "<<pernyataan2<<"]                      |\n";
			cout<<"+================================+\n";
			cout<<"Masukkan no (1|2|3|4|5): ";
			cin>>negasi;
			switch (negasi)
			{
				case '1':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"\n-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"|~"<<pernyataan1<<" |~"<<pernyataan2<<" |~"<<pernyataan1<<"V~"<<pernyataan2<<"|\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| T | F |   T  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"+-------------+\n";
					break;
				case '2':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"|~"<<pernyataan1<<" | "<<pernyataan2<<" |~"<<pernyataan1<<"V "<<pernyataan2<<"|\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| T | F |   T  |\n";
					cout<<"+-------------+\n";
					break;
				case '3':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"| "<<pernyataan1<<" |~"<<pernyataan2<<" | "<<pernyataan1<<"V~"<<pernyataan2<<"|\n";
					cout<<"| T | F |   T  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"+-------------+\n";
					break;
				case '4':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+-------------+\n";
					cout<<"| "<<pernyataan1<<" | "<<pernyataan2<<" | "<<pernyataan1<<"V "<<pernyataan2<<"|\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| T | F |   T  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"+-------------+\n";
					break;
				default:
				cout<<"Anda tidak memasukkan pernyataan huruf dengan benar!!\n";
					cout<<"Program ini akan mengulang\n";
					cout<<"3\n";
					sleep(1);
					cout<<"2\n";
					sleep(1);
					cout<<"1\n";
					sleep(1);
					cout<<"0\n";
					system("cls");
					return(main());	
				break;
			}
			break;
		
		//Logika Implikasi
		case 'I':
		case 'i':
			switch (negasi)
			{
				case '1':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"\n-- Tabel Kebenaran --\n";
					cout<<"+--------------+\n";
					cout<<"|~"<<pernyataan1<<" |~"<<pernyataan2<<" |~"<<pernyataan1<<"->~"<<pernyataan2<<"|\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| T | F |   F  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"+--------------+\n";
					break;
				case '2':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+--------------+\n";
					cout<<"|~"<<pernyataan1<<" | "<<pernyataan2<<" |~"<<pernyataan1<<"-> "<<pernyataan2<<"|\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| T | F |   F  |\n";
					cout<<"+--------------+\n";
					break;
				case '3':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+--------------+\n";
					cout<<"| "<<pernyataan1<<" |~"<<pernyataan2<<" | "<<pernyataan1<<"->~"<<pernyataan2<<"|\n";
					cout<<"| T | F |   F  |\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"+--------------+\n";
					break;
				case '4':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+--------------+\n";
					cout<<"| "<<pernyataan1<<" | "<<pernyataan2<<" | "<<pernyataan1<<"-> "<<pernyataan2<<"|\n";
					cout<<"| T | T |   T  |\n";
					cout<<"| T | F |   F  |\n";
					cout<<"| F | T |   T  |\n";
					cout<<"| F | F |   F  |\n";
					cout<<"+--------------+\n";
					break;
				default:
				cout<<"Anda tidak memasukkan pernyataan huruf dengan benar!!\n";
					cout<<"Program ini akan mengulang\n";
					cout<<"3\n";
					sleep(1);
					cout<<"2\n";
					sleep(1);
					cout<<"1\n";
					sleep(1);
					cout<<"0\n";
					system("cls");
					return(main());	
				break;
			}
			break;
		
		//Logika Biimplikasi
		case 'b':
		case 'B':
			switch (negasi)
			{
				case '1':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"\n-- Tabel Kebenaran --\n";
					cout<<"+---------------+\n";
					cout<<"|~"<<pernyataan1<<" |~"<<pernyataan2<<" |~"<<pernyataan1<<"<->~"<<pernyataan2<<"|\n";
					cout<<"| F | F |   T   |\n";
					cout<<"| F | T |   F   |\n";
					cout<<"| T | F |   F   |\n";
					cout<<"| T | T |   T   |\n";
					cout<<"+---------------+\n";
					break;
				case '2':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+---------------+\n";
					cout<<"|~"<<pernyataan1<<" | "<<pernyataan2<<" |~"<<pernyataan1<<"<-> "<<pernyataan2<<"|\n";
					cout<<"| F | T |   F   |\n";
					cout<<"| F | F |   T   |\n";
					cout<<"| T | T |   T   |\n";
					cout<<"| T | F |   F   |\n";
					cout<<"+---------------+\n";
					break;
				case '3':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+---------------+\n";
					cout<<"| "<<pernyataan1<<" |~"<<pernyataan2<<" | "<<pernyataan1<<"<->~"<<pernyataan2<<"|\n";
					cout<<"| T | F |   F   |\n";
					cout<<"| T | T |   T   |\n";
					cout<<"| F | F |   F   |\n";
					cout<<"| F | T |   T   |\n";
					cout<<"+---------------+\n";
					break;
				case '4':
					cout<<"\n-- Pernyataan Atomik --\n";
					cout<<"~"<<pernyataan1<<endl;
					cout<<"~"<<pernyataan2<<endl<<endl;
					cout<<"-- Tabel Kebenaran --\n";
					cout<<"+---------------+\n";
					cout<<"| "<<pernyataan1<<" | "<<pernyataan2<<" | "<<pernyataan1<<"<-> "<<pernyataan2<<"|\n";
					cout<<"| T | T |   T   |\n";
					cout<<"| T | F |   F   |\n";
					cout<<"| F | T |   F   |\n";
					cout<<"| F | F |   T   |\n";
					cout<<"+---------------+\n";
					break;
				default:
				cout<<"Anda tidak memasukkan pernyataan huruf dengan benar!!\n";
					cout<<"Program ini akan mengulang\n";
					cout<<"3\n";
					sleep(1);
					cout<<"2\n";
					sleep(1);
					cout<<"1\n";
					sleep(1);
					cout<<"0\n";
					system("cls");
					return(main());	
				break;
			}
			break;
		default:
			cout<<"Anda tidak memasukkan huruf perangkai logika dengan benar!!\n";
			cout<<"Program ini akan mengulang\n";
			cout<<"3\n";
			sleep(1);
			cout<<"2\n";
			sleep(1);
			cout<<"1\n";
			sleep(1);
			cout<<"0\n";
			system("cls");
			return(main());
	}	
}