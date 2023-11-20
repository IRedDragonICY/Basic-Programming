#include <iostream>
using namespace std;

int main()
{
    int nilai1 = 5, nilai2 = 15;
    int *p1, *p2;
    p1 = &nilai1; // p1 = alamat nilai
    p2 = &nilai2; // p2 = alamat nilai2

    cout << "Nilai awal" << endl;
    cout << "Nilai 1 adalah " << nilai1 << endl;
    cout << "Nilai 2 adalah " << nilai2 << endl;
    *p1 = 10; // nilai alamat yang ditunjuk p1 = 10
    cout << "\nSetelah *p1 = 10" << endl;
    cout << "Nilai 1 adalah " << nilai1 << endl;
    cout << "Nilai 2 adalah " << nilai2 << endl;

    *p2 = *p1; // nilai alamat yang ditunjuk p2 = nilai alamat yang ditunjuk p1
    cout << "\nSetelah *p2 = *p1" << endl;
    cout << "Nilai 1 adalah " << nilai1 << endl;
    cout << "Nilai 2 adalah " << nilai2 << endl;

    p1 = p2; // p1=p2 (mengkopi nilai alamat yang ditunjuk p2 ke p1)
    cout << "\nSetelah p1 = p2" << endl;
    cout << "Nilai 1 adalah " << nilai1 << endl;
    cout << "Nilai 2 adalah " << nilai2 << endl;

    *p1 = 20; // nilai alamat yang ditunjuk p1 = 20
    cout << "\nSetelah *p1 = 20" << endl;
    cout << "Nilai 1 adalah " << nilai1 << endl;
    cout << "Nilai 2 adalah " << nilai2 << endl;
    return 0;
}