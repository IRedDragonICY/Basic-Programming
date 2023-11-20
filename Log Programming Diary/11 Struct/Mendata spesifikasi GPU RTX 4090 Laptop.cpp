#include <iostream>
using namespace std;
struct GPU
{
    string codename;
    string architecture;
    int pipeline;
    int TMUs;
    int ROPs;
    int Raytracing_Cores;
    int Shader_Cores;
    int Memory_Speed;
    string Memory_Type;
    int Max_Memory;
    char Shared_Memory;
    string API;
    int Power_Consumption;
    float transistor;
    int technology;
    string PCIe;
    string Displays;
    string Notebook_Size;
    string Date_of_Announcement;
    string Predecessor;
};
int main()
{
    GPU Nvidia_RTX4090_Laptop;
    Nvidia_RTX4090_Laptop.codename = "GN21-X11";
    Nvidia_RTX4090_Laptop.architecture = "Ada Lovelace";
    Nvidia_RTX4090_Laptop.pipeline = 9728;
    Nvidia_RTX4090_Laptop.TMUs = 304;
    Nvidia_RTX4090_Laptop.ROPs = 112;
    Nvidia_RTX4090_Laptop.Raytracing_Cores = 76;
    Nvidia_RTX4090_Laptop.Shader_Cores = 304;
    Nvidia_RTX4090_Laptop.Memory_Speed = 20000;
    Nvidia_RTX4090_Laptop.Memory_Type = "GDDR6";
    Nvidia_RTX4090_Laptop.Max_Memory = 16;
    Nvidia_RTX4090_Laptop.Shared_Memory = 'N';
    Nvidia_RTX4090_Laptop.API = "DirectX 12 Ultimate, Shader 12_2, OpenGL 4.6, OpenCL 3.0, Vulkan 1.3";
    Nvidia_RTX4090_Laptop.Power_Consumption = 150;
    Nvidia_RTX4090_Laptop.transistor = 76.3;
    Nvidia_RTX4090_Laptop.technology = 4;
    Nvidia_RTX4090_Laptop.PCIe = "4 x16/x8";
    Nvidia_RTX4090_Laptop.Displays = "4 Displays (max.), HDMI 2.1, DisplayPort 1.4a";
    Nvidia_RTX4090_Laptop.Notebook_Size = "large";
    Nvidia_RTX4090_Laptop.Date_of_Announcement = "03.01.2023";
    Nvidia_RTX4090_Laptop.Predecessor = "GeForce RTX 3080 Ti Laptop GPU";

    cout << "Codename             : " << Nvidia_RTX4090_Laptop.codename << endl;
    cout << "Architecture         : " << Nvidia_RTX4090_Laptop.architecture << endl;
    cout << "Pipeline             : " << Nvidia_RTX4090_Laptop.pipeline << endl;
    cout << "TMUs                 : " << Nvidia_RTX4090_Laptop.TMUs << endl;
    cout << "ROPs                 : " << Nvidia_RTX4090_Laptop.ROPs << endl;
    cout << "Raytracing Cores     : " << Nvidia_RTX4090_Laptop.Raytracing_Cores << endl;
    cout << "Shader Cores         : " << Nvidia_RTX4090_Laptop.Shader_Cores << endl;
    cout << "Memory Speed         : " << Nvidia_RTX4090_Laptop.Memory_Speed << endl;
    cout << "Memory Type          : " << Nvidia_RTX4090_Laptop.Memory_Type << endl;
    cout << "Max Memory           : " << Nvidia_RTX4090_Laptop.Max_Memory << endl;
    cout << "Shared Memory        : " << Nvidia_RTX4090_Laptop.Shared_Memory << endl;
    cout << "API                  : " << Nvidia_RTX4090_Laptop.API << endl;
    cout << "Power Consumption    : " << Nvidia_RTX4090_Laptop.Power_Consumption << endl;
    cout << "Transistor           : " << Nvidia_RTX4090_Laptop.transistor << endl;
    cout << "Technology           : " << Nvidia_RTX4090_Laptop.technology << endl;
    cout << "PCIe                 : " << Nvidia_RTX4090_Laptop.PCIe << endl;
    cout << "Displays             : " << Nvidia_RTX4090_Laptop.Displays << endl;
    cout << "Notebook Size        : " << Nvidia_RTX4090_Laptop.Notebook_Size << endl;
    cout << "Date of Announcement : " << Nvidia_RTX4090_Laptop.Date_of_Announcement << endl;
    cout << "Predecessor          : " << Nvidia_RTX4090_Laptop.Predecessor << endl;
    return 0;
}
