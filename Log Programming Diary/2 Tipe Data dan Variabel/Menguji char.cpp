#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Ujicoba char\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data char\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	char data;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"char ";
	SetConsoleTextAttribute(h,15);
	cout<<"data;\n\n";

	data='a';
	cout<<"Q: data yang dimasukkan (Misalnya data = 'a')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='abcd';
	cout<<"Q: data yang dimasukkan (Misalnya data = 'abcd')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='asdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjlasdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjl';
	cout<<"Q: data yang dimasukkan (Misalnya data = 'asdasfjoefhowqjpqwjepqwjriehfaijpwjqipdoewopawdjasjidladjkladjlaiwqojeoajdslkajdqwojeoaijfaskljdwqoijejdsaljdsaljwiqjl')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='1';
	cout<<"Q: data yang dimasukkan (Misalnya data = '1')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);	
	data='1234567890';
	cout<<"Q: data yang dimasukkan (Misalnya data = '1234567890')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);
	data='1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890';
	cout<<"Q: data yang dimasukkan (Misalnya data = '1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890')\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<data<<endl;
	sleep(1);	
		
	return(system("pause"));
}
