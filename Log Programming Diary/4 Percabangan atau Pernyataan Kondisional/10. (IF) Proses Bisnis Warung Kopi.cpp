#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Proses Bisnis Warung Kopi V1.0\n";
	cout<<"Disini akan membelikan produk pada warung kopi\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
	
	int uang;
	int menu,menu_1,menu_2,menu_3,menu_4,menu_5,menu_6,menu_7,menu_8,menu_9;
	char proses;
	uang=25000; // Uang
	menu_1=10000; // nasi goreng
	menu_2=12000; // nasi goreng spesial + nasi
	menu_3=10000; // Ayam Geprek + nasi
	menu_4=8000; // Lele Goreng
	menu_5=4000; // Nasi
	menu_6=1500; // Air Putih
	menu_7=2000; // Teh Tawar
	menu_8=4000; // Teh Manis
	menu_9=5000; // Kopi
	
	string menu_1a,menu_2a,menu_3a,menu_4a,menu_5a,menu_6a,menu_6b,menu_6c,menu_7a,menu_7b,menu_7c,menu_8a,menu_8b,menu_8c,menu_9a;
	menu_1a="Nasi Goreng";
	menu_2a="Nasi Goreng Spesial";
	menu_3a="Ayam Geprek + Nasi";
	menu_4a="Lele Goreng + Nasi";
	menu_5a="Nasi";
	menu_6a="Air Putih Hangat";
	menu_6b="Air Putih Dingin";
	menu_6c="Air Putih Hangat";
	menu_7a="Teh Tawar Biasa";
	menu_7b="Es Teh Tawar";
	menu_7c="Teh Tawar Hangat";
	menu_8a="Teh Tawar Biasa";
	menu_8b="Es Teh Tawar";
	menu_8c="Teh Tawar Hangat";
	
	cout<<"-= WARKOP PODOMORO =-\n";
	cout<<"+============================================+\n";
	cout<<"|                    MENU                    |\n";
	cout<<"|[] Makanan                                  |\n";			
	cout<<"|1. Nasi Goreng                  Rp 10.000,00|\n";
	cout<<"|2. Nasi Goreng Spesial          Rp 12.000,00|\n";
	cout<<"|3. Ayam Geprek + Nasi           Rp 10.000,00|\n";
	cout<<"|4. Lele Goreng + Nasi           Rp 8.000,00 |\n";
	cout<<"|5. Nasi                         Rp 4.000,00 |\n";
	cout<<"|[] Minuman                                  |\n";
	cout<<"|6. Air Putih Biasa/Es/Hangat    Rp 1.500,00 |\n";
	cout<<"|7. Teh Tawar Biasa/Es/Hangat    Rp 2.000,00 |\n";
	cout<<"|8. Teh Manis Biasa/Es/Hangat    Rp 4.000,00 |\n";
	cout<<"|9. Kopi                         Rp 5.000,00 |\n";
	cout<<"+============================================+\n";
	cout<<"Ingat!! Anda mempunyai uang sebesar Rp "<<uang<<",00"<<endl;
	cout<<"Masukkan menu yang ingin Anda beli (tulis angka)\n>";
	cin>>menu;
	system("cls");
	if (uang>0)
	{
		if (menu==1)
		{	
			cout<<"Anda membeli "<<menu_1a<<endl;
			uang-=menu_1;
			cout<<"Sisa uang Anda: Rp "<<uang<<",00"<<endl;
			cout<<"Apakah Anda ingin membeli lagi?? (Y|N)\n>";
			cin>>proses;
			system("cls");
			if (proses=='Y'||proses=='y')
			{
				if (uang>0)
				{
					cout<<"-= WARKOP PODOMORO =-\n";
					cout<<"+============================================+\n";
					cout<<"|                    MENU                    |\n";
					cout<<"|[] Makanan                                  |\n";			
					cout<<"|1. Nasi Goreng                  Rp 10.000,00|\n";
					cout<<"|2. Nasi Goreng Spesial          Rp 12.000,00|\n";
					cout<<"|3. Ayam Geprek + Nasi           Rp 10.000,00|\n";
					cout<<"|4. Lele Goreng + Nasi           Rp 8.000,00 |\n";
					cout<<"|5. Nasi                         Rp 4.000,00 |\n";
					cout<<"|[] Minuman                                  |\n";
					cout<<"|6. Air Putih Biasa/Es/Hangat    Rp 1.500,00 |\n";
					cout<<"|7. Teh Tawar Biasa/Es/Hangat    Rp 2.000,00 |\n";
					cout<<"|8. Teh Manis Biasa/Es/Hangat    Rp 4.000,00 |\n";
					cout<<"|9. Kopi                         Rp 5.000,00 |\n";
					cout<<"+============================================+\n";
					cout<<"Ingat!! Anda mempunyai uang sebesar Rp "<<uang<<",00"<<endl;
					cout<<"Masukkan menu yang ingin Anda beli (tulis angka)\n>";
					cin>>menu;
					if (menu==1)
					{
						cout<<"Anda membeli "<<menu_1a<<endl;
						uang-=menu_1;
						cout<<"Sisa uang Anda: Rp "<<uang<<",00"<<endl;
						cout<<"Apakah Anda ingin membeli lagi?? (Y|N)\n>";
						cin>>proses;
						system("cls");
						if (proses=='Y'||proses=='y')
						{
							if (uang>0)
							{
								cout<<"-= WARKOP PODOMORO =-\n";
								cout<<"+============================================+\n";
								cout<<"|                    MENU                    |\n";
								cout<<"|[] Makanan                                  |\n";			
								cout<<"|1. Nasi Goreng                  Rp 10.000,00|\n";
								cout<<"|2. Nasi Goreng Spesial          Rp 12.000,00|\n";
								cout<<"|3. Ayam Geprek + Nasi           Rp 10.000,00|\n";
								cout<<"|4. Lele Goreng + Nasi           Rp 8.000,00 |\n";
								cout<<"|5. Nasi                         Rp 4.000,00 |\n";
								cout<<"|[] Minuman                                  |\n";
								cout<<"|6. Air Putih Biasa/Es/Hangat    Rp 1.500,00 |\n";
								cout<<"|7. Teh Tawar Biasa/Es/Hangat    Rp 2.000,00 |\n";
								cout<<"|8. Teh Manis Biasa/Es/Hangat    Rp 4.000,00 |\n";
								cout<<"|9. Kopi                         Rp 5.000,00 |\n";
								cout<<"+============================================+\n";
								cout<<"Ingat!! Anda mempunyai uang sebesar Rp "<<uang<<",00"<<endl;
								cout<<"Masukkan menu yang ingin Anda beli (tulis angka)\n>";
								cin>>menu;
								if (menu==1)
								{
									cout<<"Anda membeli "<<menu_1a<<endl;
									uang-=menu_1;
									cout<<"Sisa uang Anda: Rp "<<uang<<",00"<<endl;
									cout<<"Apakah Anda ingin membeli lagi?? (Y|N)\n>";
									cin>>proses;
									system("cls");
								}
							}
						}
				
						else
						{
							cout<<"Uang anda tidak cukup untuk membeli produk ini\n";
							cout<<"Terimakasih sudah membeli produk di Warung Kopi Podomoro.\nSaya tunggu Anda di pembelian selanjutnya OwO";
							return (system("pause"));
						}
			}	
			if (proses=='N'||proses=='n')
			{
				cout<<"Terimakasih sudah membeli produk di Warung Kopi Podomoro.\nSaya tunggu Anda di pembelian selanjutnya OwO";
				return (system("pause"));
			}	
					}
				}
				
				else
				{
					cout<<"Uang anda tidak cukup untuk membeli produk ini\n";
					cout<<"Terimakasih sudah membeli produk di Warung Kopi Podomoro.\nSaya tunggu Anda di pembelian selanjutnya OwO";
					return (system("pause"));
				}
			}	
			if (proses=='N'||proses=='n')
			{
				cout<<"Terimakasih sudah membeli produk di Warung Kopi Podomoro.\nSaya tunggu Anda di pembelian selanjutnya OwO";
				return (system("pause"));
			}
		}
		if (menu==2)
		{
			uang-=menu_2;
			uang;
		}	
	}
	else
		cout<<"Uang anda tidak cukup untuk membeli produk ini";
	
}