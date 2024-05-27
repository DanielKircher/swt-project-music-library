#include <iostream>
#include <string>
using namespace std;

string playlist(){
string actual_playlist;
    int input;
    string results;

    while (input !=0){
        cout << "\n*****Playlist:*****\n";
        cout << "(1)Playlist erstellen\n";
        cout << "(2)Playlists anzeigen\n";        
        cout << "(0)Zurück\n";
        cin >> input;
        switch(input){
            case 1:
            // hier muss eine weitere Funktion erstellt werden,
            // welche Möglichkeiten bietet Eine Playlist zu erstellen
            continue;
            case 2:
            // hier muss eine weitere Funktion erstellt werden,
            // welche Möglichkeiten bietet alle Playlists anzuzeigen
            continue;
            case 0:
            break;
            default:                                      // Ungültige Eingabe
            cout << "\n\nUngültige Eingabe\n";
            continue;
        }
    }
    return actual_playlist;
}