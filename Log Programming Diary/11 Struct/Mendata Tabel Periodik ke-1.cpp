#include <iostream>
using namespace std;

int no_atom;

struct elemen
{
    string nama_atom;
    string lambang_atom;
    int nomor_atom;
    string penampilan;
    int golongan;
    int periode;
    string blok;
    string kategori_unsur;
    double berat_atom;
    string konfigurasi_elektron;
    string elektron_per_kelopak;
    string warna;
    string fase_STS;
    double titik_lebur;
    double titik_didih;
    double kepadatan_STS;
    double kepadatan_cair;
    double kepadatan_titiklebur;
    double titik_tripel;
    double titik_kritis;
    double kalor_peleburan;
    double kalor_penguapan;
    double kapasitas_molar;
    string bilangan_oksidasi;
    double elektronegativitas;
    double energi_ionisasi;
    double jari_jari_atom;
    double jari_jari_kovalen;
    double jari_jari_vanderwaals;
};
elemen atom[118];
// mendata tabel periodik periode ke 1
// Hidrogen

int main()
{
    // Hidrogen
    atom[0].nama_atom = "Hidrogen";
    atom[0].lambang_atom = "H";
    atom[0].penampilan = "gas tak berwarna dengan nyala ungu dalam keadaan plasma";
    atom[0].nomor_atom = 1;
    atom[0].golongan = 1;
    atom[0].periode = 1;
    atom[0].blok = "S";
    atom[0].kategori_unsur = "Nonlogam diatomik";
    atom[0].titik_lebur = -259.14;
    atom[0].berat_atom = 1.008;
    atom[0].konfigurasi_elektron = "1s1";
    atom[0].elektron_per_kelopak = "1";
    atom[0].warna = "Tak berwarna";
    atom[0].fase_STS = "Gas";
    atom[0].titik_lebur = 14.01;
    atom[0].titik_didih = -252.87;
    atom[0].kepadatan_STS = 0.00008988;
    atom[0].kepadatan_cair = 70.85;
    atom[0].kepadatan_titiklebur = 0.07;
    atom[0].titik_tripel = -259.16;
    atom[0].titik_kritis = 20.28;
    atom[0].kalor_peleburan = 0.00;
    atom[0].kalor_penguapan = 0.00;
    atom[0].kapasitas_molar = 28.836;
    atom[0].bilangan_oksidasi = "1";
    atom[0].elektronegativitas = 2.20;
    atom[0].energi_ionisasi = 1312.00;
    atom[0].jari_jari_atom = 53;
    atom[0].jari_jari_kovalen = 31;
    atom[0].jari_jari_vanderwaals = 120;

    // Litium
    atom[2].nama_atom = "Litium";
    atom[2].lambang_atom = "Li";
    atom[2].penampilan = "putih keperakan";
    atom[2].nomor_atom = 3;
    atom[2].golongan = 1;
    atom[2].periode = 2;
    atom[2].blok = "S";
    atom[2].kategori_unsur = "Logam alkali";
    atom[2].titik_lebur = 180.54;
    atom[2].berat_atom = 6.94;
    atom[2].konfigurasi_elektron = "1s2 2s1";
    atom[2].elektron_per_kelopak = "2";
    atom[2].warna = "Putih keperakan";
    atom[2].fase_STS = "Padat";
    atom[2].titik_lebur = 180.5;
    atom[2].titik_didih = 1347;
    atom[2].kepadatan_STS = 0.534;
    atom[2].kepadatan_cair = 170.6;
    atom[2].kepadatan_titiklebur = 0.354;
    atom[2].titik_tripel = 1347;
    atom[2].titik_kritis = 1615;
    atom[2].kalor_peleburan = 3.58;
    atom[2].kalor_penguapan = 145.9;
    atom[2].kapasitas_molar = 3.82;
    atom[2].bilangan_oksidasi = "1, 2";
    atom[2].elektronegativitas = 0.98;
    atom[2].energi_ionisasi = 520.2;
    atom[2].jari_jari_atom = 167;
    atom[2].jari_jari_kovalen = 134;
    atom[2].jari_jari_vanderwaals = 182;

    // Natrium
    atom[10].nama_atom = "Natrium";
    atom[10].lambang_atom = "Na";
    atom[10].penampilan = "metalik putih keperakan";
    atom[10].nomor_atom = 11;
    atom[10].golongan = 1;
    atom[10].periode = 3;
    atom[10].blok = "S";
    atom[10].kategori_unsur = "Logam alkali";
    atom[10].berat_atom = 22.990;
    atom[10].konfigurasi_elektron = "[Ne] 3s1";
    atom[10].elektron_per_kelopak = "1";
    atom[10].warna = "Putih";
    atom[10].fase_STS = "Solid";
    atom[10].titik_lebur = 97.72;
    atom[10].titik_didih = 883.95;
    atom[10].kepadatan_STS = 0.968;
    atom[10].kepadatan_cair = 0.86;
    atom[10].kepadatan_titiklebur = 0.51;
    atom[10].titik_tripel = -5.5;
    atom[10].titik_kritis = 1144;
    atom[10].kalor_peleburan = 2.6;
    atom[10].kalor_penguapan = 97.72;
    atom[10].kapasitas_molar = 23.70;
    atom[10].bilangan_oksidasi = "1";
    atom[10].elektronegativitas = 0.93;
    atom[10].energi_ionisasi = 495.87;
    atom[10].jari_jari_atom = 154;
    atom[10].jari_jari_kovalen = 180;
    atom[10].jari_jari_vanderwaals = 227;

    // Natrium
    atom[10].nama_atom = "Natrium";
    atom[10].lambang_atom = "Na";
    atom[10].nomor_atom = 11;
    atom[10].penampilan = "metalik putih keperakan";
    atom[10].golongan = 1;
    atom[10].periode = 3;
    atom[10].blok = "S";
    atom[10].kategori_unsur = "Alkali metal";
    atom[10].berat_atom = 22.9898;
    atom[10].konfigurasi_elektron = "[Ne] 3s1";
    atom[10].elektron_per_kelopak = "1, 2";
    atom[10].warna = "Tidak berwarna";
    atom[10].fase_STS = "Solid";
    atom[10].titik_lebur = 97.72;
    atom[10].titik_didih = 883.0;
    atom[10].kepadatan_STS = 0.971;
    atom[10].kepadatan_cair = 0.861;
    atom[10].kepadatan_titiklebur = 0.971;
    atom[10].titik_tripel = 371.0;
    atom[10].titik_kritis = 1041.0;
    atom[10].kalor_peleburan = 23.9;
    atom[10].kalor_penguapan = 97.9;
    atom[10].kapasitas_molar = 24.2;
    atom[10].bilangan_oksidasi = "1, 2";
    atom[10].elektronegativitas = 0.93;
    atom[10].energi_ionisasi = 495.9;
    atom[10].jari_jari_atom = 154;
    atom[10].jari_jari_kovalen = 180;
    atom[10].jari_jari_vanderwaals = 227;

    // Kalium
    atom[18].nama_atom = "Kalium";
    atom[18].lambang_atom = "K";
    atom[18].nomor_atom = 19;
    atom[18].penampilan = "metalik putih keperakan";
    atom[18].golongan = 1;
    atom[18].periode = 4;
    atom[18].blok = "S";
    atom[18].kategori_unsur = "Alkali metal";
    atom[18].berat_atom = 39.0983;
    atom[18].konfigurasi_elektron = "[Ar] 4s1";
    atom[18].elektron_per_kelopak = "1, 2";
    atom[18].warna = "Tidak berwarna";
    atom[18].fase_STS = "Solid";
    atom[18].titik_lebur = 63.65;
    atom[18].titik_didih = 759.0;
    atom[18].kepadatan_STS = 0.862;
    atom[18].kepadatan_cair = 0.720;
    atom[18].kepadatan_titiklebur = 0.864;
    atom[18].titik_tripel = 653.0;
    atom[18].titik_kritis = 2033.0;
    atom[18].kalor_peleburan = 36.4;
    atom[18].kalor_penguapan = 76.7;
    atom[18].kapasitas_molar = 29.6;
    atom[18].bilangan_oksidasi = "1, 2";
    atom[18].elektronegativitas = 0.82;
    atom[18].energi_ionisasi = 418.8;
    atom[18].jari_jari_atom = 227;
    atom[18].jari_jari_kovalen = 196;
    atom[18].jari_jari_vanderwaals = 275;

    // Rubidium
    atom[36].nama_atom = "Rubidium";
    atom[36].lambang_atom = "Rb";
    atom[36].nomor_atom = 37;
    atom[36].penampilan = "abu-abu putih";
    atom[36].golongan = 1;
    atom[36].periode = 5;
    atom[36].blok = "S";
    atom[36].kategori_unsur = "Alkali metal";
    atom[36].berat_atom = 85.4678;
    atom[36].konfigurasi_elektron = "[Kr] 5s1";
    atom[36].elektron_per_kelopak = "2, 8, 18, 8, 1";
    atom[36].warna = "Tidak berwarna";
    atom[36].fase_STS = "Solid";
    atom[36].titik_lebur = 312.46;
    atom[36].titik_didih = 961.0;
    atom[36].kepadatan_STS = 1.53;
    atom[36].kepadatan_cair = 1.532;
    atom[36].kepadatan_titiklebur = 1.528;
    atom[36].titik_tripel = 961.0;
    atom[36].titik_kritis = -1.0;
    atom[36].kalor_peleburan = 2.75;
    atom[36].kalor_penguapan = 72.4;
    atom[36].kapasitas_molar = 29.2;
    atom[36].bilangan_oksidasi = "1, 2";
    atom[36].elektronegativitas = 0.82;
    atom[36].energi_ionisasi = 403.0;
    atom[36].jari_jari_atom = 248;
    atom[36].jari_jari_kovalen = 210;
    atom[36].jari_jari_vanderwaals = 303;

    // Sesium
    atom[54].nama_atom = "Sesium";
    atom[54].lambang_atom = "Cs";
    atom[54].nomor_atom = 55;
    atom[54].penampilan = "emas pucat";
    atom[54].golongan = 1;
    atom[54].periode = 6;
    atom[54].blok = "S";
    atom[54].kategori_unsur = "Alkali metal";
    atom[54].berat_atom = 132.9054519;
    atom[54].konfigurasi_elektron = "[Xe] 6s1";
    atom[54].elektron_per_kelopak = "2, 8, 18, 18, 8, 1";
    atom[54].warna = "Tidak berwarna";
    atom[54].fase_STS = "Solid";
    atom[54].titik_lebur = 301.7;
    atom[54].titik_didih = 944;
    atom[54].kepadatan_STS = 1.879;
    atom[54].kepadatan_cair = 1.56;
    atom[54].kepadatan_titiklebur = 1.93;
    atom[54].titik_tripel = -116.995;
    atom[54].titik_kritis = -1;
    atom[54].kalor_peleburan = 2.09;
    atom[54].kalor_penguapan = 79;
    atom[54].kapasitas_molar = 36.7;
    atom[54].bilangan_oksidasi = "1";
    atom[54].elektronegativitas = 0.79;
    atom[54].energi_ionisasi = 375.7;
    atom[54].jari_jari_atom = 267;
    atom[54].jari_jari_kovalen = -1;
    atom[54].jari_jari_vanderwaals = 343;

    // Fransium
    atom[86].nama_atom = "Fransium";
    atom[86].lambang_atom = "Fr";
    atom[86].nomor_atom = 87;
    atom[86].penampilan = "Tidak diketahui";
    atom[86].golongan = 1;
    atom[86].periode = 7;
    atom[86].blok = "S";
    atom[86].kategori_unsur = "Alkali metal";
    atom[86].berat_atom = 0; // Tidak diketahui
    atom[86].konfigurasi_elektron = "Tidak diketahui";
    atom[86].elektron_per_kelopak = "Tidak diketahui";
    atom[86].warna = "Tidak diketahui";
    atom[86].fase_STS = "Tidak diketahui";
    atom[86].titik_lebur = 0;          // Tidak diketahui
    atom[86].titik_didih = 0;          // Tidak diketahui
    atom[86].kepadatan_STS = 0;        // Tidak diketahui
    atom[86].kepadatan_cair = 0;       // Tidak diketahui
    atom[86].kepadatan_titiklebur = 0; // Tidak diketahui
    atom[86].titik_tripel = 0;         // Tidak diketahui
    atom[86].titik_kritis = 0;         // Tidak diketahui
    atom[86].kalor_peleburan = 0;      // Tidak diketahui
    atom[86].kalor_penguapan = 0;      // Tidak diketahui
    atom[86].kapasitas_molar = 0;      // Tidak diketahui
    atom[86].bilangan_oksidasi = "Tidak diketahui";
    atom[86].elektronegativitas = 0;    // Tidak diketahui
    atom[86].energi_ionisasi = 0;       // Tidak diketahui
    atom[86].jari_jari_atom = 0;        // Tidak diketahui
    atom[86].jari_jari_kovalen = 0;     // Tidak diketahui
    atom[86].jari_jari_vanderwaals = 0; // Tidak diketahui

    cout << "+---------------------------------------------------------------------------------+" << endl;
    cout << " Periode 1" << endl;
    cout << " 1 Hidrogen" << endl;
    cout << " 3 Lithium" << endl;
    cout << "11 Natrium" << endl;
    cout << "19 Kalium" << endl;
    cout << "37 Rubidium" << endl;
    cout << "55 Sesium" << endl;
    cout << "87 Fransium" << endl;
    cout << "+---------------------------------------------------------------------------------+" << endl;

    cout << "Pilih nomor atom: ";
    cin >> no_atom;
    cout << "+---------------------------------------------------------------------------------+" << endl;
    cout << "Nama Atom: " << atom[no_atom - 1].nama_atom << endl;
    cout << "Lambang Atom: " << atom[no_atom - 1].lambang_atom << endl;
    cout << "Nomor Atom: " << atom[no_atom - 1].nomor_atom << endl;
    cout << "Penampilan: " << atom[no_atom - 1].penampilan << endl;
    cout << "Golongan: " << atom[no_atom - 1].golongan << endl;
    cout << "Periode: " << atom[no_atom - 1].periode << endl;
    cout << "Blok: " << atom[no_atom - 1].blok << endl;
    cout << "Kategori Unsur: " << atom[no_atom - 1].kategori_unsur << endl;
    cout << "Titik Lembut: " << atom[no_atom - 1].titik_lebur << endl;
    cout << "Berat Atom: " << atom[no_atom - 1].berat_atom << endl;
    cout << "Konfigurasi Elektron: " << atom[no_atom - 1].konfigurasi_elektron << endl;
    cout << "Elektron Per Kelopak: " << atom[no_atom - 1].elektron_per_kelopak << endl;
    cout << "Warna: " << atom[no_atom - 1].warna << endl;
    cout << "Fase STS: " << atom[no_atom - 1].fase_STS << endl;
    cout << "Titik Lebur: " << atom[no_atom - 1].titik_lebur << endl;
    cout << "Titik Didih:" << atom[no_atom - 1].titik_didih << endl;
    cout << "Kepadatan STS: " << atom[no_atom - 1].kepadatan_STS << endl;
    cout << "Kepadatan Cair: " << atom[no_atom - 1].kepadatan_cair << endl;
    cout << "Kepadatan Titik Lembur: " << atom[no_atom - 1].kepadatan_titiklebur << endl;
    cout << "Titik Tripel: " << atom[no_atom - 1].titik_tripel << endl;
    cout << "Titik Kritis: " << atom[no_atom - 1].titik_kritis << endl;
    cout << "Kalor Peleburan: " << atom[no_atom - 1].kalor_peleburan << endl;
    cout << "Kalor Penguapan: " << atom[no_atom - 1].kalor_penguapan << endl;
    cout << "Kapasitas Molar: " << atom[no_atom - 1].kapasitas_molar << endl;
    cout << "Bilangan Oksidasi: " << atom[no_atom - 1].bilangan_oksidasi << endl;
    cout << "Elektronegativitas: " << atom[no_atom - 1].elektronegativitas << endl;
    cout << "Energi Ionisasi: " << atom[no_atom - 1].energi_ionisasi << endl;
    cout << "Jari-jari Atom: " << atom[no_atom - 1].jari_jari_atom << endl;
    cout << "Jari-jari Kovalen: " << atom[no_atom - 1].jari_jari_kovalen << endl;
    cout << "Jari-jari Vanderwaals: " << atom[no_atom - 1].jari_jari_vanderwaals << endl;
    cout << "+---------------------------------------------------------------------------------+" << endl;
}