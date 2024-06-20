#include <iostream>
#include <vector>
#include "json.hpp"
#include "struct.hpp"
#include "loadJson.hpp"

using json = nlohmann::json;

std::string WIEDERGABE(std::string actualSong, int play){

    std::string lastSong;
    std::string nextSong;
    if (actualSong.empty()){
        std::cout << "Keine Wiedergabe" << std::endl << std::endl;
        }
    else{
        int choiceWiedergabe = -1;
        while (choiceWiedergabe !=0){  

            std::cout << "\n=============== Wiedergabe ===============" << std::endl << std::endl;
            std::cout << "(1) Letzter Song << " + actualSong + " >> Nächster Song (3)" << std::endl;
            std::cout << "(0) Zurück" << std::endl << std::endl;

            std::cin >> choiceWiedergabe;
            switch(choiceWiedergabe){
                case 1:
                    // lastSong = Funktion die den vorherigen Song aus Lieblingssongs übergibt
                    actualSong = lastSong;
                    continue;
                case 3:
                    // nextSong = Funktion die den nächsten Song aus Lieblingssongs übergibt
                    actualSong = nextSong;
                    continue;
                case 0:
                    break;
                default:
                    std::cout << "FEHLER: Ungültige Eingabe" << std::endl << std::endl;
                    continue;
            }
        }
    }   
    return actualSong;
}