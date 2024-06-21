#include <iostream>
#include <vector>
#include "json.hpp"
#include "struct.hpp"
#include "loadJson.hpp"
#include "search.hpp"
#include "playSong.hpp"

using json = nlohmann::json;

std::string SUCHE(std::vector<Song> songs,std::string actualSong){
    // Suchfunktion
    std::string searchResult = searchSong(songs);
    int choiceResult = -1;
    while (choiceResult != 0){
        if (actualSong.empty()){
            std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
            std::cout << "(1) Play" << std::endl;
            std::cout << "(2) zu Lieblingssongs hinzufügen" << std::endl;
            std::cout << "(0) Zurück" << std::endl << std::endl;            
        }
        else{
            std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
            std::cout << "(1) Stop" << std::endl;
            std::cout << "(2) zu Lieblingssongs hinzufügen" << std::endl;
            std::cout << "(0) Zurück" << std::endl << std::endl;
        }
        std::cin >> choiceResult;
        switch(choiceResult){
            case 1:
                actualSong = playSong(actualSong, searchResult);
                continue;
            case 2:
                // Funktion zum hinzufügen zu Lieblingssongs
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