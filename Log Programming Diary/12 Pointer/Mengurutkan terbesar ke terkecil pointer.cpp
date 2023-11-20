#include <iostream>
using namespace std;

void urut(int *bil, int n)
{
    int temp;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (bil[i]<bil[j])
            {
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Program mengurutkan bilangan dari yang terbesar ke terkecil\n";
    cout<<"Masukkan jumlah bilangan: ";
    cin>>n;
    int bil[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Masukkan bilangan ke-"<<i+1<<": ";
        cin>>bil[i];
    }
    urut(bil, n);
    cout<<"Hasil pengurutan: ";
    for (int i=0; i<n; i++)
    {
        cout<<bil[i]<<", ";
    }
}