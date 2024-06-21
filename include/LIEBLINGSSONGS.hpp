#include <iostream>
#include <vector>
#include "json.hpp"
#include "struct.hpp"
#include "loadJson.hpp"
#include "search.hpp"

using json = nlohmann::json;

std::string LIEBLINGSSONGS(std::vector<Song> lieblingssongs, std::string actualSong, int play){

    std::string searchResult;
    int choiceLieblingssongs = -1;
    int choiceResult = -1;
    while (choiceLieblingssongs !=0){

        std::cout << "=============== Lieblingssongs ===============" << std::endl << std::endl;
        std::cout << "(1) Suche"  << std::endl;
        std::cout << "(2) Alle anzeigen" << std::endl;
        std::cout << "(0) Zurück" << std::endl << std::endl;

        std::cin >> choiceLieblingssongs;
        switch(choiceLieblingssongs){
            case 1:
                searchResult = searchSong(lieblingssongs);
                
                while (choiceResult != 0){
                    if (actualSong.empty()){
                        std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
                        std::cout << "(1) Play" << std::endl;
                        std::cout << "(2) Aus Lieblingssongs löschen" << std::endl;
                        std::cout << "(0) Zurück" << std::endl << std::endl;
                    }
                    else{
                        std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
                        std::cout << "(1) Stop" << std::endl;
                        std::cout << "(2) Aus Lieblingssongs löschen" << std::endl;
                        std::cout << "(0) Zurück" << std::endl << std::endl;
                    }
                    std::cin >> choiceResult;
                    switch(choiceResult){
                        case 1:
                            //actualSong = playSong(actualSong, searchResult);
                            continue;
                        case 2:
                            // Funktion zum löschen aus Lieblingssongs
                            continue;
                        case 0:
                            break;
                        default:
                            std::cout << "FEHLER: Ungültige Eingabe" << std::endl << std::endl;
                            continue;

                    }
                }
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