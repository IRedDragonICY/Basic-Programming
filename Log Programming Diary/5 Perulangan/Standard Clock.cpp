#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{

	int tanggal,max_tanggal,no_bulan,tahun;
	int detik,menit,jam;
	int clock=0,session_1=0,session_2=0,tipe_jam;
	string format;
	string bulan;
	cout<<"Tanggal: xx/xx/xxxx\n";
	session_1=1;
	
	while (session_1>=0&&session_1<6)
	{
		if (session_1>=1)
		{
			if (session_1==1)
			{
				cout<<"Masukkan tanggal\n>";
				cin>>tanggal;
				system("cls");
				if (tanggal<10)
					cout<<"Tanggal: 0"<<tanggal<<"/xx/xxxx\n";
				else
					cout<<"Tanggal: "<<tanggal<<"/xx/xxxx\n";
			}
			if (session_1>3)
			{
				if (tanggal<10)
					cout<<"Tanggal: 0"<<tanggal;
				else
					cout<<"Tanggal: "<<tanggal;		
			}
		}	
		if (session_1>=2)
		{
			if (session_1==2)
			{
				cout<<"Masukkan bulan\n>";
				cin>>no_bulan;
				system("cls");
			}
			if (session_1==4)
			{
				if (no_bulan<10)
					cout<<"/0"<<no_bulan<<"/xxxx\n";
				else
					cout<<"/"<<no_bulan<<"/xxxx\n";				
			}
			if (session_1>4)
				if (no_bulan<10)
					cout<<"/0"<<no_bulan<<"/";
				else
					cout<<"/"<<no_bulan<<"/";
		}
		if (session_1==4)
		{
			cout<<"Masukkan tahun\n>";
			cin>>tahun;
			system("cls");
		}
		if (session_1>=5)
		{
			if (tahun<10)
				cout<<"000"<<tahun<<endl;
			else if (tahun<100)
				cout<<"00"<<tahun<<endl;
			else if (tahun<1000)
				cout<<"0"<<tahun<<endl;
			else
				cout<<tahun<<endl;
		}
		session_1+=1;
	}
	system("pause");
	
	cout<<"+=========+\n";
	cout<<"|TIPE  JAM|\n";	
	cout<<"|1  24 Jam|\n";
	cout<<"|2  12 Jam|\n";
	cout<<"+=========+\n";
	cout<<"Masukkan tipe jam yang diinginkan!(1|2)\n>";
	cin>>tipe_jam;
	
	cout<<"Memilih tipe jam: ";
	switch (tipe_jam)
	{
		case 1:
			cout<<"24 Jam"<<endl;
			break;
		case 2:
			cout<<"12 Jam"<<endl;
			break;
		default:
			cout<<"Error!!"<<endl;
			return 0;
			break;
	}
	if (tipe_jam==2)
	{
		cout<<"Masukkan format waktu (PM|AM)\n>";
		cin>>format;	
	}
	
	cout<<"Masukkan jam\n>";
	cin>>jam;
	cout<<"Masukkan menit\n>";
	cin>>menit;
	cout<<"Masukkan detik\n>";
	cin>>detik;	
	system("cls");
	
	switch (tipe_jam)
	{
		case 1:
			session_2=1;
			break;
		case 2:
			session_2=2;
			break;
	}
	

	while (clock==0)
	{
		switch (no_bulan)
		{
			case 1: // Januari
				bulan="Januari";
				max_tanggal=31;
				break;
			case 2: // Februari
				bulan="Februari";
				if (tahun%4==0)
					max_tanggal=29;
				else
					max_tanggal=28;
				break;
			case 3: // Maret
				bulan="Maret";
				max_tanggal=31;
				break;
			case 4: // April
				bulan="April";
				max_tanggal=30;
				break;
			case 5: // Mei
				bulan="Mei";
				max_tanggal=31;
				break;
			case 6: // Juni
				bulan="Juni";
				max_tanggal=30;
				break;
			case 7: // Juli
				bulan="Juli";
				max_tanggal=31;
				break;
			case 8: // Agustus
				bulan="Agustus";
				max_tanggal=31;
				break;
			case 9: // September
				bulan="September";
				max_tanggal=30;
				break;
			case 10: // Oktober
				bulan="Oktober";
				max_tanggal=31;
				break;
			case 11: // November
				bulan="November";
				max_tanggal=30;
				break;
			case 12: // Desember
				bulan="Desember";
				max_tanggal=31;
				break;
		}				

		if (tanggal>max_tanggal)
		{
			no_bulan+=1;
			tanggal=1;
		}
				
		if (no_bulan>12)
		{
			no_bulan=1;
			tahun+=1;
		}
		switch (no_bulan)
		{
			case 1: // Januari
				bulan="Januari";
				max_tanggal=31;
				break;
			case 2: // Februari
				bulan="Februari";
				if (tahun%4==0)
					max_tanggal=29;
				else
					max_tanggal=28;
				break;
			case 3: // Maret
				bulan="Maret";
				max_tanggal=31;
				break;
			case 4: // April
				bulan="April";
				max_tanggal=30;
				break;
			case 5: // Mei
				bulan="Mei";
				max_tanggal=31;
				break;
			case 6: // Juni
				bulan="Juni";
				max_tanggal=30;
				break;
			case 7: // Juli
				bulan="Juli";
				max_tanggal=31;
				break;
			case 8: // Agustus
				bulan="Agustus";
				max_tanggal=31;
				break;
			case 9: // September
				bulan="September";
				max_tanggal=30;
				break;
			case 10: // Oktober
				bulan="Oktober";
				max_tanggal=31;
				break;
			case 11: // November
				bulan="November";
				max_tanggal=30;
				break;
			case 12: // Desember
				bulan="Desember";
				max_tanggal=31;
				break;
		}
		cout<<tanggal<<" "<<bulan<<" "<<tahun<<endl;
		// 24 jam
		if (session_2==1)
		{
			detik+=1;
			if (detik>59)
			{
				menit+=1;
				detik=0;
			}
			if (menit>59)
			{
				jam+=1;
				menit=0;
			}
			if (jam>23)
			{
				jam=0;
				tanggal+=1;
			}
			cout<<"+========+\n";
			if (jam<10&&jam>0)
				cout<<"|0"<<jam<<":";
			if (jam>=10)
				cout<<"|"<<jam<<":";
			if (jam==0)
				cout<<"|00:";
			if (menit<10)
				cout<<"0"<<menit<<":";
			if (menit>=10)
				cout<<menit<<":";
			if (detik<10)
				cout<<"0"<<detik<<"|\n";
			if (detik>=10)
				cout<<detik<<"|\n";
			cout<<"+========+\n";
		}
	
		
		// 12 jam
		if (session_2==2)
		{
			if (format=="AM")
			{
				detik+=1;
				if (detik>59)
				{
					menit+=1;
					detik=0;
				}
				if (menit>59)
				{
					jam+=1;
					menit=0;
				}
				if (jam>11)
				{
					jam=0;
					format="PM";
				}
				
				cout<<"+===========+\n";
				if (jam<10&&jam>0)
					cout<<"|0"<<jam<<":";
				if (jam>=10)
					cout<<"|"<<jam<<":";
				if (jam==0)
					cout<<"|00:";
				if (menit<10)
					cout<<"0"<<menit<<":";
				if (menit>=10)
					cout<<menit<<":";
				if (detik<10)
					cout<<"0"<<detik<<" "<<format<<"|\n";
				if (detik>=10)
					cout<<detik<<" "<<format<<"|\n";
				cout<<"+===========+\n";
			}
			if (format=="PM")
			{
				detik+=1;
				if (detik>59)
				{
					menit+=1;
					detik=0;
				}
				if (menit>59)
				{
					jam+=1;
					menit=0;
				}
				if (jam>11)
				{
					jam=0;
					format="AM";
					tanggal+=1;
				}
				sleep(1);
				system("cls");
				
				cout<<"+===========+\n";
				if (jam<10&&jam>0)
					cout<<"|0"<<jam<<":";
				if (jam>=10)
					cout<<"|"<<jam<<":";
				if (jam==0)
					cout<<"|00:";
				if (menit<10)
					cout<<"0"<<menit<<":";
				if (menit>=10)
					cout<<menit<<":";
				if (detik<10)
					cout<<"0"<<detik<<" "<<format<<"|\n";
				if (detik>=10)
					cout<<detik<<" "<<format<<"|\n";
				cout<<"+===========+\n";
			}
		}	
	sleep(1);
	system("cls");
	}
}