#include <iostream>
using namespace std;

struct CPU
{
    string Series;
    string Codename;
    int clock_Min;
    int clock_Max;
    float lvl1_Cache;
    float lvl2_Cache;
    float lvl3_Cache;
    int core;
    int thread;
    int TDP;
    int Manufacturing_Technology;
    string Socket;
    string Features;
    string GPU;
    string architecture;
    string Date_of_Announcement;
}

int
main()
{
    Intel_i7_12800H.Series = "Intel Alder Lake-S";
    Intel_i7_12800H.Codename = "Alder Lake-P";
    Intel_i7_12800H.clock_Min = 1700;
    Intel_i7_12800H.clock_Max = 4700;
    Intel_i7_12800H.lvl1_Cache = 1.2;
    Intel_i7_12800H.lvl2_Cache = 11.5;
    Intel_i7_12800H.lvl3_Cache = 24;
    Intel_i7_12800H.core = 14;
    Intel_i7_12800H.thread = 20;
    Intel_i7_12800H.TDP = 45;
    Intel_i7_12800H.Manufacturing_Technology = 10;
    Intel_i7_12800H.Socket = "FCBGA1744";
    Intel_i7_12800H.Features = "Thread Director";
    Intel_i7_12800H.GPU = "Intel Iris Xe Graphics G7 96EUs (-1400 MHz)";
    Intel_i7_12800H.architecture = "x86";
    Intel_i7_12800H.Date_of_Announcement = "01/04/2022";

    cout << "Series                   : " << Intel_i7_12800H.Series << endl;
    cout << "Codename                 : " << Intel_i7_12800H.Codename << endl;
    cout << "Clock Min                : " << Intel_i7_12800H.clock_Min << endl;
    cout << "Clock Max                : " << Intel_i7_12800H.clock_Max << endl;
    cout << "Lvl1 Cache               : " << Intel_i7_12800H.lvl1_Cache << endl;
    cout << "Lvl2 Cache               : " << Intel_i7_12800H.lvl2_Cache << endl;
    cout << "Lvl3 Cache               : " << Intel_i7_12800H.lvl3_Cache << endl;
    cout << "Core                     : " << Intel_i7_12800H.core << endl;
    cout << "Thread                   : " << Intel_i7_12800H.thread << endl;
    cout << "TDP                      : " << Intel_i7_12800H.TDP << endl;
    cout << "Manufacturing Technology : " << Intel_i7_12800H.Manufacturing_Technology << endl;
}