#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

char tipe_suhu_awal,tipe_suhu_akhir,home;
float suhu_awal,suhu_akhir;

int main ()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Suhu Konverter V1.0\n";
	cout<<"Program ini akan mengubah satuan suhu\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);

	cout<<"_________________\n";
	cout<<"C : Celcius\n";
	cout<<"R : Reamur\n";
	cout<<"F : Fahrenheit\n";
	cout<<"K : Kelvin\n";
	cout<<"_________________\n";
	cout<<"Satuan awal suhu (C/R/F/K)\n>";
	cin>>tipe_suhu_awal;
	cout<<"Satuan akhir suhu (C/R/F/K)\n>";
	cin>>tipe_suhu_akhir;
	
	switch (tipe_suhu_awal)
	{
// AWAL CELCIUS
		case 'C':
		case 'c':
			cout<<"Suhu Awal (Celcius)\n>";
			cin>>suhu_awal;
			switch (tipe_suhu_akhir)
			{
			// CELCIUS AKHIR CELCIUS
			case 'C':
			case 'c':
				cout<<"Suhu Akhir (Celcius)\n>";
				suhu_akhir=suhu_awal;
				cout<<suhu_akhir<<" derajat Celcius"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			// CELCIUS AKHIR REAMUR
			case 'R':
			case 'r':
				cout<<"Suhu Akhir (Reamur)\n>";
				suhu_akhir=suhu_awal*4/5;
				cout<<suhu_akhir<<" derajat Reamur"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			// CELCIUS AKHIR FAHRENHEIT
			case 'F':
			case 'f':
				cout<<"Suhu Akhir (Fahrenheit)\n>";
				suhu_akhir=suhu_awal*9/5+32;
				cout<<suhu_akhir<<" derajat Fahrenheit"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			// CELCIUS AKHIR KELVIN
			case 'K':
			case 'k':
				cout<<"Suhu Akhir (Kelvin)\n>";
				suhu_akhir=suhu_awal+273;
				cout<<suhu_akhir<<" Kelvin"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			}
			break;

// AWAL REAMUR
		case 'R':
		case 'r':
			cout<<"Suhu Awal (Reamur)\n>";
			cin>>suhu_awal;
			switch (tipe_suhu_akhir)
			{
			// REAMUR AKHIR CELCIUS
			case 'C':
			case 'c':
				cout<<"Suhu Akhir (Celcius)\n>";
				suhu_akhir=suhu_awal*5/4;
				cout<<suhu_akhir<<" derajat Celcius"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// REAMUR AKHIR REAMUR
			case 'R':
			case 'r':
				cout<<"Suhu Akhir (Reamur)\n>";
				suhu_akhir=suhu_awal;
				cout<<suhu_akhir<<" derajat Reamur"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// REAMUR AKHIR FAHRENHEIT
			case 'F':
			case 'f':
				cout<<"Suhu Akhir (Fahrenheit)\n>";
				suhu_akhir=suhu_awal*9/4+32;
				cout<<suhu_akhir<<" derajat Fahrenheit"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// REAMUR AKHIR KELVIN
			case 'K':
			case 'k':
				cout<<"Suhu Akhir (Kelvin)\n>";
				suhu_akhir=suhu_awal*5/4+273;
				cout<<suhu_akhir<<" Kelvin"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			}
			break;			
// AWAL FAHRENHEIT
		case 'F':
		case 'f':
			cout<<"Suhu Awal (Fahrenheit)\n>";
			cin>>suhu_awal;
			switch (tipe_suhu_akhir)
			{
			// FAHRENHEIT AKHIR CELCIUS
			case 'C':
			case 'c':
				cout<<"Suhu Akhir (Celcius)\n>";
				suhu_akhir=(suhu_awal-32)*5/9;
				cout<<suhu_akhir<<" derajat Celcius"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// FAHRENHEIT AKHIR REAMUR
			case 'R':
			case 'r':
				cout<<"Suhu Akhir (Reamur)\n>";
				suhu_akhir=(suhu_awal-32)*4/9;
				cout<<suhu_akhir<<" derajat Reamur"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// FAHRENHEIT AKHIR FAHRENHEIT
			case 'F':
			case 'f':
				cout<<"Suhu Akhir (Fahrenheit)\n>";
				suhu_akhir=suhu_awal;
				cout<<suhu_akhir<<" derajat Fahrenheit"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// FAHRENHEIT AKHIR KELVIN
			case 'K':
			case 'k':
				cout<<"Suhu Akhir (Kelvin)\n>";
				suhu_akhir=((suhu_awal-32)*5/9)+273;
				cout<<suhu_akhir<<" Kelvin"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			}
			break;			

// AWAL KELVIN
		case 'K':
		case 'k':
			cout<<"Suhu Awal (Kelvin)\n>";
			cin>>suhu_awal;
			switch (tipe_suhu_akhir)
			{
			// KELVIN AKHIR CELCIUS
			case 'C':
			case 'c':
				cout<<"Suhu Akhir (Celcius)\n>";
				suhu_akhir=suhu_awal-273;
				cout<<suhu_akhir<<" derajat Celcius"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// KELVIN AKHIR REAMUR
			case 'R':
			case 'r':
				cout<<"Suhu Akhir (Reamur)\n>";
				suhu_akhir=(suhu_awal-273)*4/5;
				cout<<suhu_akhir<<" derajat Reamur"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// KELVIN AKHIR FAHRENHEIT
			case 'F':
			case 'f':
				cout<<"Suhu Akhir (Fahrenheit)\n>";
				suhu_akhir=(suhu_awal-273)*9/5+32;
				cout<<suhu_akhir<<" derajat Fahrenheit"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			
			// KELVIN AKHIR KELVIN
			case 'K':
			case 'k':
				cout<<"Suhu Akhir (Kelvin)\n>";
				suhu_akhir=suhu_awal;
				cout<<suhu_akhir<<" Kelvin"<<endl;
				sleep(2);
				cout<<"Apakah anda ingin menghitung suhu lagi? (Y/N)\n>";
				cin>>home;
				switch (home)
				{
					case 'Y':
					case 'y':
						cout<<"Program akan merestart ulang\n";
						cout<<"3\n";
						sleep(1);
						cout<<"2\n";
						sleep(1);
						cout<<"1\n";
						sleep(1);
						cout<<"0\n";
						sleep(1);
						system("cls");
						return(main());
						break;
					case 'N':
					case 'n':
						return(system("pause"));
						break;
					default:
						cout<<"Masukkan huruf dengan benar!!!";
						sleep(2);
						system("cls");	
				}
				break;
			}
			break;			
			break;
		default:
			cout<<"Masukkan huruf dengan benar!!!";
			sleep(2);
			system("cls");	
	}

//	if (a == 'C' || a == 'c')
//	{
//		cout<<"Suhu Awal (Celcius) = ";
//		cin>>c;		
//		if (b == 'C' || b == 'c')
//		{
//			d = c;
//			celcius();
//		}
//		if (b == 'R' || b == 'r')
//		
//		{
//			d = c*4/5;
//			reamur();
//		}
//		if (b == 'F' || b == 'f')
//		{
//			d = c*9/5+32;
//			fahrenheit();
//		}
//		if (b == 'K' || b == 'k')
//		{
//			d = c+273;
//			kelvin();
//		}
//	}
//	if (a == 'R' || a == 'r')
//	{
//		cout<<"Suhu Awal (Reamur) = ";
//		cin>>c;
//		if (b == 'C' || b == 'c')
//		{
//			d = c*5/4;
//			celcius();
//		}
//		if (b == 'R' || b == 'r')
//		{
//			d = c;
//			reamur();
//		}
//		if (b == 'F' || b == 'f')
//		{
//			d = c*9/4+32;
//			fahrenheit();
//		}
//		if (b == 'K' || b == 'k')
//		{
//			d = c*5/4+273;
//			kelvin();
//		}
//	}
//	if (a == 'F' || a == 'f')
//	{
//		cout<<"Suhu awal (Fahrenheit) = ";
//		cin>>c;
//		if (b == 'C' || b == 'c')
//		{
//			d = (c-32)*5/9;
//			celcius();
//		}
//		if (b == 'R' || b == 'r')
//		{
//			d = (c-32)*4/9;
//			reamur();
//		}
//		if (b == 'F' || b == 'f')
//		{
//			d = c;
//			fahrenheit();
//		}
//		if (b == 'K' || b == 'k')
//		{
//			d = (c-32)*5/9+273;
//			kelvin();
//		}
//	}
//	if (a == 'K' || a == 'k')
//	{
//		cout<<"Suhu awal (Kelvin) = ";
//		cin>>c;
//		if (b == 'C' || b == 'c')	
//		{
//			d = c-273;
//			celcius(); 
//		}
//		if (b == 'R' || b == 'r')
//		{
//			d = (c-273)*4/5;
//			reamur();
//		}
//		if (b == 'F' || b == 'f')
//		{
//			d = (c-273)*9/5+32;
//			fahrenheit();
//		}
//		if (b == 'K' || b == 'k')
//		{
//			d = c;
//			kelvin();
//		}
//	}
}
