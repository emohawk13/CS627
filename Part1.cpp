#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Ternary Search Algorithm
int Search(const vector<string>& playlist, const string& song, int left, int right) {
    if (left > right) {
        return -1; // Song not found
    }

    // Divide the list into three parts
    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    // Check the first mid-point
    if (playlist[mid1] == song) {
        return mid1;
    }

    // Check the second mid-point
    if (playlist[mid2] == song) {
        return mid2;
    }

    // If the song is in the first third of the list
    if (song < playlist[mid1]) {
        return Search(playlist, song, left, mid1 - 1);
    }
    // If the song is in the last third of the list
    else if (song > playlist[mid2]) {
        return Search(playlist, song, mid2 + 1, right);
    }
    // Search in the middle third
    else {
        return Search(playlist, song, mid1 + 1, mid2 - 1);
    }
}

// Wrapper function to start the search
int searchSong(const vector<string>& playlist, const string& song) {
    return Search(playlist, song, 0, playlist.size() - 1);
}

int main() {
    vector<string> playlist = {
        "A Day in the Life", "Aqualung", "Baba O'Riley", "Back in Black", "Bad Moon Rising", 
        "Barracuda", "Black Dog", "Born to Be Wild", "Boys Are Back in Town", "Break on Through", 
        "Brown Eyed Girl", "Carry On Wayward Son", "China Grove", "Comfortably Numb", "Come Together", 
        "Crossroads", "Desperado", "Don't Stop Believin'", "Dream On", "Fortunate Son", 
        "Free Bird", "Gimme Shelter", "Heartbreaker", "Hotel California", "I Can't Get No Satisfaction", 
        "Immigrant Song", "Jump", "La Grange", "Let It Be", "Life in the Fast Lane", 
        "Light My Fire", "Livin' on a Prayer", "Long Train Runnin'", "Maggie May", "Magic Carpet Ride", 
        "More Than a Feeling", "Night Moves", "Paint It Black", "Paranoid", "Purple Haze", 
        "Radar Love", "Rebel Rebel", "Rock and Roll", "Runnin' Down a Dream", "Smoke on the Water", 
        "Space Oddity", "Stairway to Heaven", "Sweet Child O' Mine", "Takin' Care of Business", "The Chain", 
        "The Joker", "Tom Sawyer", "Twist and Shout", "Under Pressure", "Wish You Were Here", 
        "You Really Got Me"
    };

    // Song to search for
    string song = "Hotel California";

    // Perform the search
    int index = searchSong(playlist, song);

    if (index != -1) {
        cout << "Song found at index: " << index << endl;
    } else {
        cout << "Song not found in the playlist." << endl;
    }

    return 0;
}
