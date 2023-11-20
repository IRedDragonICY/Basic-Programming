#include <iostream>
using namespace std;

int main()
{
    // instruksi memukul dengan perulangan, apabila mukul maka perulangan berhenti
    do
    {
        cout<<"Mukul! (tekan enter untuk mukul)"<<endl;
        cin.get();
    } while (cin.get() != 'n');
    
}