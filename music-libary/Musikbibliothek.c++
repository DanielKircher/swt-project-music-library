// Musikbibliothek

#include <iostream>
#include "suche.h"
using namespace std;


int main (){
    
    cout << "\n\nWilkommen im Software-Technik-Projekt\n";
    cout << "von Maximilian und Daniel\n\n";

// Starten der Musikbibliotek
int start =1;
    while(start != 0){
        cout << "Drücke \"0\" um den\n";
        cout << "Musikplayer zu starten.\n";
        cin >> start;
        if (start != 0){
            cout << "\nUngültige Eingabe\n\n";              // Ungültige Eingabe
            continue;
        }  
    }

// Hauptmenü
int input;
    while(input != 0){
        cout << "\nHauptmenü:\n";
        cout << "(1) Suche\n";
        cout << "(2) Playlists\n";
        cout << "(3) Aktuelle Wiedergabe\n";
        cout << "(0) Beenden\n";
        
        cin >> input;                                       // Funktionen
        switch(input){                      
            case 1:                                         // Suche
            suche();
                continue;

            case 2:                                         // Playlists
            
                continue;

            case 3:                                         // Aktuelle Wiedergabe
            
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