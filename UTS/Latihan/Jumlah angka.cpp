#include <iostream>
using namespace std;
int main()
{
    int i=0;
    int total1,total2,total3;
    total1 = 0;
    total2 = 0;
    total3 = 0;
    while( i<20)
    {
        if (i%3== 0)
            {total1 = total1+i;}
        else if (i%3 == 1)
            {total2 = total2+i;}
        else
            {total3 = total3+i;}
        i=i+1;
    }

    cout<<"Total1 :"<<total1<<endl;
    cout<<"Total2 :"<<total2<<endl;
    cout<<"Total3 :"<<total3<<endl;
}