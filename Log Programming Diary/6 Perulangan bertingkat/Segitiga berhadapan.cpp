#include <iostream>
using namespace std;
int main()
{
      int n, x, y, k;
      cout << "Masukkan jumlah baris: ";
      cin >> n;
      for (x = 1; x <= n; x++)
      {
            for (y = 1; y <= n; y++)
            {
                  if (y <= x)
                        cout << "*";
                  else
                        cout << " ";
            }
            for (y = n; y >= 1; y--)
            {
                  if (y <= x)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}
