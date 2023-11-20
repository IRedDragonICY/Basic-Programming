#include <iostream>
#include <string>

using namespace std;

const int MAX_SEMESTER = 8;
const int MAX_MATKUL = 8;

struct Nilai
{
   int tugas;
   int uts;
   int uas;
   double rataRata;
};

struct Matkul
{
   string nama;
   Nilai nilai;
};

struct Mahasiswa
{
   string nama;
   long long int nim;
   Matkul matkul[MAX_MATKUL];
};

int main()
{
   Mahasiswa mhs;

   cout << "Masukkan nama mahasiswa: ";
   getline(cin, mhs.nama);
   cout << "Masukkan NIM mahasiswa: ";
   cin >> mhs.nim;
   cin.ignore();
   for (int i = 0; i < MAX_SEMESTER; i++)
   {
      cout << "Masukkan nama mata kuliah semester " << i + 1 << ":" << endl;
      getline(cin, mhs.matkul[i].nama);
      cout << "Masukkan nilai mata kuliah " << mhs.matkul[i].nama << ":" << endl;
      cout << "Tugas: ";
      cin >> mhs.matkul[i].nilai.tugas;
      cout << "UTS: ";
      cin >> mhs.matkul[i].nilai.uts;
      cout << "UAS: ";
      cin >> mhs.matkul[i].nilai.uas;
      mhs.matkul[i].nilai.rataRata = (mhs.matkul[i].nilai.tugas + mhs.matkul[i].nilai.uts + mhs.matkul[i].nilai.uas) / 3.0;
   }

   cout << endl
        << "Data nilai mahasiswa:" << endl;
   cout << "Nama: " << mhs.nama << endl;
   cout << "NIM: " << mhs.nim << endl;
   for (int i = 0; i < MAX_SEMESTER; i++)
   {
      cout << "Mata kuliah " << mhs.matkul[i].nama << ": " << mhs.matkul[i].nilai.tugas << ", " << mhs.matkul[i].nilai.uts << ", " << mhs.matkul[i].nilai.uas << ", Rata-rata: " << mhs.matkul[i].nilai.rataRata << endl;
   }

   return 0;
}
