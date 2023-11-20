#include <iostream>
using namespace std;
int main()
{
    // program segitiga bolong terbalik
    int i, j, k, n;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
            cout << " ";
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if (i == 1 || k == 1 || k == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}