#include <iostream>
#include <vector>
#include "json.hpp"
#include "struct.hpp"
#include "loadJson.hpp"
#include "search.hpp"


using json = nlohmann::json;

std::string LIEBLINGSSONGS(std::string actualSong, int play){

    int choiceLieblingssongs = -1;
    while (choiceLieblingssongs !=0){

        std::cout << "=============== Lieblingssongs ===============" << std::endl << std::endl;
        std::cout << "(1) Suche"  << std::endl;
        std::cout << "(2) Alle anzeigen" << std::endl;
        std::cout << "(0) Zurück" << std::endl << std::endl;

        std::cin >> choiceLieblingssongs;
        switch(choiceLieblingssongs){
            case 1:
                // Suchfunktion - Übergabe des in Funktion gewählten Titels
                // Menü zum Ausgewälten Song
                // Funktion - Löschen des Titels aus den Lieblingssongs
                // Funktion - Abspielen Des Titels = Übergabe in actualSong
                continue;
            case 2:
                // Alle Lieblingssongs anzeigen
                continue;
            case 0:
                break;
            default:
                std::cout << "FEHLER: Ungültige Eingabe" << std::endl << std::endl;
                continue;
        }
    }
    return actualSong;
}