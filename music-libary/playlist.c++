#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "editplaylist.h"
using namespace std;

string playlist(){
    int input;
    string actual_playlist;

    while (input !=0){
        cout << "\n*****Playlist:*****\n";
        cout << "(1)Playlist erstellen\n";
        cout << "(2)Playlists anzeigen\n";        
        cout << "(0)Zurück\n";
        cin >> input;
        switch(input){
            case 1:
            editplaylist();
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