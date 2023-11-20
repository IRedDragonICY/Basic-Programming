#include <iostream>
#include "startup.h"
using namespace std;

const int MAX_N = 0;

int n;           // jumlah piring
int t[3][MAX_N]; // t[i][j] = j-th piring di tiang i
int atas[3];     // atas[i] = jumlah piring di tiang i

// Pindahkan piring dari tiang awal ke tiang tujuan
void pindah(int tiang_awal, int tiang_tujuan)
{
    // Pindahkan piring teratas dari tiang awal ke tiang tujuan
    int piring = t[tiang_awal][atas[tiang_awal] - 1];
    t[tiang_tujuan][atas[tiang_tujuan]++] = piring;
    atas[tiang_awal]--;

    // Tampilkan tiang awal, tiang tujuan, dan piring yang dipindahkan
    cout << "Pindahkan piring " << piring << " dari menara " << tiang_awal + 1 << " ke menara " << tiang_tujuan + 1 << endl;
}

// Rekursif memindahkan piring dari tiang tiang_awal ke tiang tiang_tujuan menggunakan tiang bantuan
void hanoi(int n, int tiang_awal, int tiang_bantuan, int tiang_tujuan)
{
    if (n == 0)
        return;
    hanoi(n - 1, tiang_awal, tiang_tujuan, tiang_bantuan);
    pindah(tiang_awal, tiang_tujuan);
    hanoi(n - 1, tiang_bantuan, tiang_awal, tiang_tujuan);
}

int main()
{
    judul("Array 2 Dimensi", "Menara Hanoi", "1.0");
    // Baca input jumlah piring
    cout << "Masukkan banyak piring yang ingin dibuat menara: ";
    cin >> n;

    // Inisialisasi tiang awal dengan piring yang terurut dari besar ke kecil
    for (int i = 0; i < n; i++)
    {
        t[0][i] = n - i;
    }
    atas[0] = n;

    // Pindahkan semua piring ke tiang 3
    hanoi(n, 0, 1, 2);

    return 0;
}
