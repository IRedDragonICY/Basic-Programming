#include <iostream>
using namespace std;
struct coordinate
{
    double x;
    double y;
    double z;
};

int main()
{
    coordinate peta;
    peta.x = 6.532;
    peta.y = 5.65;
    peta.z = 2.45;
    cout << "x: " << peta.x << endl;
    cout << "y: " << peta.y << endl;
    cout << "z: " << peta.z << endl;
}