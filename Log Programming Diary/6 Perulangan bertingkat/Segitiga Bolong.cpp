#include <iostream>
using namespace std;
int main()
{
      int r, i, j, s;
      cout << "Masukkan jumlah baris: ";
      cin >> r;
      for (i = 1; i <= r; i++)
        {
            for (s = i; s < r; s++)
                  cout << " ";
            for (j = 1; j <= (2 * r - 1); j++)
            {
                  if (i == r || j == 1 || j == 2 * i - 1)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}