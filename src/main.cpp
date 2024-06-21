#include <iostream>                     // ===== Version 3.2.0 =====
#include <vector>
#include "json.hpp"
#include "text.hpp"
#include "struct.hpp"
#include "loadJson.hpp"
#include "SUCHE.hpp"
#include "LIEBLINGSSONGS.hpp"
#include "WIEDERGABE.hpp"

using json = nlohmann::json;

int main(){
    std::string actualSong;     std::string nextSong;       std::string lastSong;
    std::string searchResult;   int play = -1;
    int start;                  int choiceMenue;            int choiceSuche;

    // WILKOMMEN:
    printWILLKOMMEN();

    // START:
    start = -1;
    while(start != 1){
        printSTART();
        std::cin >> start;
        switch (start){
            case 1:
                break;
            case 0:
                printBEENDEN();            
                return 0;
            default:
                printFEHLER();
                continue;
        }  
    }
    // LADEN DER DATEIEN:
    std::vector<Song> songs = readSongsFromFile("songs.json");
    std::vector<Song> lieblingssongs = readSongsFromFile("lieblingssongs.json");

    // HAUPTMENUE:
    choiceMenue = -1;
    while(choiceMenue != 0){
        printHAUPTMENUE();
        std::cin >> choiceMenue;
        switch(choiceMenue){

            case 1: // SUCHE
                choiceSuche = -1;
                while (choiceSuche !=0){
                    printSUCHE(); 
                    std::cin >> choiceSuche;
                    switch(choiceSuche){ 
                        case 1: //Suche in Cloud
                            actualSong = SUCHE(songs, actualSong);
                            continue;
                        case 0: //Zurück
                            break;
                        default:
                            printFEHLER();
                            continue;
                    }
                }
                continue;

            case 2: // LIEBLINGSSONGS
                LIEBLINGSSONGS(lieblingssongs, actualSong, play);
                continue;

            case 3: // WIEDERGABE
                WIEDERGABE(actualSong, play);
                continue;
            case 0:
                printBEENDEN();
                break;
            default:
                printFEHLER();
                continue;
        }
    }
    return 0;
}
