#include <iostream>
using namespace std;

struct Song
{
    string albumName;
    string artistName;
    string artistUrl;
    string songName;
    string artwork;
    string attribution;
    string audioVariants;
    string composerName;
    string contentRating;
    int discNumber;
    int durationInMillis;
    string editorialNotes;
    string genreNames;
    bool hasLyrics;
    bool isAppleDigitalMaster;
    string isrc;
    int movementCount;
    string movementName;
    int movementNumber;
    string name;
    string playParams;
    string previews;
    string releaseDate;
    string trackNumber;
    string url;
    string workName;
};

int main()
{
    Song song[10];

    song[0].albumName = "Ano Yume o Nazotte";
    song[0].artistName = "Yoasobi";
    song[0].artistUrl = "https://music.apple.com/id/artist/yoasobi/1449374775";
    song[0].songName = "Ano Yume o Nazotte";
    song[0].artwork = "https://is2-ssl.mzstatic.com/image/thumb/Music124/v4/b4/a8/81/b4a8819b-4fc2-4c4a-b96d-03d6db5aa6e5/source/100x100bb.jpg";
    song[0].attribution = "";
    song[0].audioVariants = "";
    song[0].composerName = "";
    song[0].contentRating = "";
    song[0].discNumber = 1;
    song[0].durationInMillis = 212000;
    song[0].editorialNotes = "";
    song[0].genreNames = "Anime";
    song[0].hasLyrics = true;
    song[0].isAppleDigitalMaster = false;
    song[0].isrc = "JPJI60800610";
    song[0].movementCount = 0;
    song[0].movementName = "";
    song[0].movementNumber = 0;
    song[0].name = "Ano Yume o Nazotte";
    song[0].playParams = "";
    song[0].previews = "";
    song[0].releaseDate = "2020-10-08";
    song[0].trackNumber = 1;
    song[0].url = "https://music.apple.com/id/album/ano-yume-o-nazotte/1534642024?i=1534642026";

    song[1].albumName = "Encore";
    song[1].artistName = "Yoasobi";
    song[1].artistUrl = "https://music.apple.com/id/artist/yoasobi/1449374775";
    song[1].songName = "Encore";
    song[1].artwork = "https://is5-ssl.mzstatic.com/image/thumb/Music124/v4/91/5f/1d/915f1db9-8a06-cad5-2776-a78be5e3f3a3/source/100x100bb.jpg";
    song[1].attribution = "";
    song[1].audioVariants = "";
    song[1].composerName = "";
    song[1].contentRating = "";
    song[1].discNumber = 1;
    song[1].durationInMillis = 214000;
    song[1].editorialNotes = "";
    song[1].genreNames = "Anime";
    song[1].hasLyrics = true;
    song[1].isAppleDigitalMaster = false;
    song[1].isrc = "JPJI60800640";
    song[1].movementCount = 0;
    song[1].movementName = "";
    song[1].movementNumber = 0;
    song[1].name = "Encore";
    song[1].playParams = "";
    song[1].previews = "";
    song[1].releaseDate = "2020-10-08";
    song[1].trackNumber = 2;
    song[1].url = "https://music.apple.com/id/album/encore/1534642024?i=1534642027";

    song[2].albumName = "Haruka";
    song[2].artistName = "Yoasobi";
    song[2].artistUrl = "https://music.apple.com/id/artist/yoasobi/1449374775";
    song[2].songName = "Haruka";
    song[2].artwork = "https://is3-ssl.mzstatic.com/image/thumb/Music124/v4/7d/2e/43/7d2e43d2-7e38-a9a9-1f56-1e0b5d72cb0f/source/100x100bb.jpg";
    song[2].attribution = "";
    song[2].audioVariants = "";
    song[2].composerName = "";
    song[2].contentRating = "";
    song[2].discNumber = 1;
    song[2].durationInMillis = 214000;
    song[2].editorialNotes = "";
    song[2].genreNames = "Anime";
    song[2].hasLyrics = true;
    song[2].isAppleDigitalMaster = false;
    song[2].isrc = "JPJI60800640";
    song[2].movementCount = 0;
    song[2].movementName = "";
    song[2].movementNumber = 0;
    song[2].name = "Haruka";
    song[2].playParams = "";
    song[2].previews = "";
    song[2].releaseDate = "2020-10-08";
    song[2].trackNumber = 2;
    song[2].url = "https://music.apple.com/id/album/haruka/1534642024.com";

    int choose;
    cout << "+---------------------------------+" << endl;
    cout << " Spotify Song List" << endl;
    for (int i = 0; i < 3; i++)
        cout << i + 1 << " " << song[i].albumName << " - " << song[i].artistName << endl;
    cout << "+---------------------------------+" << endl;
    cout << "Choose song : ";
    cin >> choose;
    cout << "Album Name : " << song[choose - 1].albumName << endl;
    cout << "Artist Name : " << song[choose - 1].artistName << endl;
    cout << "Artist Url : " << song[choose - 1].artistUrl << endl;
    cout << "Song Name : " << song[choose - 1].songName << endl;
    cout << "Artwork : " << song[choose - 1].artwork << endl;
    cout << "Attribution : " << song[choose - 1].attribution << endl;
    cout << "Audio Variants : " << song[choose - 1].audioVariants << endl;
    cout << "Composer Name : " << song[choose - 1].composerName << endl;
    cout << "Content Rating : " << song[choose - 1].contentRating << endl;
    cout << "Disc Number : " << song[choose - 1].discNumber << endl;
    cout << "Duration In Millis : " << song[choose - 1].durationInMillis << endl;
    cout << "Editorial Notes : " << song[choose - 1].editorialNotes << endl;
    cout << "Genre Names : " << song[choose - 1].genreNames << endl;
    cout << "Has Lyrics : " << song[choose - 1].hasLyrics << endl;
    cout << "Is Apple Digital Master : " << song[choose - 1].isAppleDigitalMaster << endl;
    cout << "Isrc : " << song[choose - 1].isrc << endl;
    cout << "Movement Count : " << song[choose - 1].movementCount << endl;
    cout << "Movement Name : " << song[choose - 1].movementName << endl;
    cout << "Movement Number : " << song[choose - 1].movementNumber << endl;
    cout << "Name : " << song[choose - 1].name << endl;
    cout << "Play Params : " << song[choose - 1].playParams << endl;
    cout << "Previews : " << song[choose - 1].previews << endl;
    cout << "Release Date : " << song[choose - 1].releaseDate << endl;
    cout << "Track Number : " << song[choose - 1].trackNumber << endl;
    cout << "Url : " << song[choose - 1].url << endl;
    cout << "+---------------------------------+" << endl;
}