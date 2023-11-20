#include <iostream>
#include <string>

using namespace std;

const int MAX_EPISODE = 50;

struct Studio
{
    string nama;
    string alamat;
};

struct Anime
{
    string judul;
    string genre;
    int tahunRilis;
    int jumlahEpisode;
    Studio studio;
};

int main()
{
    Anime anime;

    cout << "Masukkan judul anime: ";
    getline(cin, anime.judul);
    cout << "Masukkan genre anime: ";
    getline(cin, anime.genre);
    cout << "Masukkan tahun rilis anime: ";
    cin >> anime.tahunRilis;
    cout << "Masukkan jumlah episode anime: ";
    cin >> anime.jumlahEpisode;
    cout << "Masukkan nama studio produksi: ";
    getline(cin, anime.studio.nama);
    cout << "Masukkan alamat studio produksi: ";
    getline(cin, anime.studio.alamat);

    cout << endl
         << "Data anime:" << endl;
    cout << "Judul: " << anime.judul << endl;
    cout << "Genre: " << anime.genre << endl;
    cout << "Tahun rilis: " << anime.tahunRilis << endl;
    cout << "Jumlah episode: " << anime.jumlahEpisode << endl;
    cout << "Studio produksi: " << anime.studio.nama << ", " << anime.studio.alamat << endl;

    return 0;
}