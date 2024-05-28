// Musikbibliothek
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "suche.c++"
#include "playlist.c++"
#include "test.c++"
using namespace std;

int main (){ 
    cout << "\n\nWillkommen im Software-Technik-Projekt\n";
    cout << "von Maximilian und Daniel\n\n";
    
// Starten der Musikbibliotek 
    int start=2;
    while(start != 1){
        cout << "Drücke (1) um den\n";
        cout << "Musikplayer zu starten.\n";
        cout << "Drücke (0) um den.\n";
        cout << "Musikplayer zu zu beenden.\n\n";
        cin >> start;
        switch (start){
            case 1:
            break;
            case 0:
            cout << "Musikplayer wird beendet.";            
            return 0;
            default:
            cout << "\nUngültige Eingabe\n\n";              // Ungültige Eingabe
            continue;
        }  
    }

// Hauptmenü
    int input;
    while(input != 0){
        cout << "\n*****Hauptmenü:*****\n";
        cout << "(1) Suche\n";
        cout << "(2) Playlists\n";
        cout << "(3) Aktuelle Wiedergabe\n";
        cout << "(0) Beenden\n"; 
        cin >> input;
        switch(input){                      
            case 1:
            suche();
            continue;
            case 2:
            playlist();
            continue;
            case 3:                                         // Aktuelle Wiedergabe
            test();                                              
            continue;
            case 0:                                         // Beenden
            cout << "Musikplayer wird beendet.";
            break;
            default:                                        // Ungültige Eingabe
            cout << "\n\nUngültige Eingabe\n";
            continue;
        }
    }
    return 0;
}