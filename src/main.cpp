#include <iostream>                     // ===== Version 3.0.1 =====
#include <vector>
#include "json.hpp"
#include "text.hpp"
#include "struct.hpp"
#include "loadJson.hpp"
#include "search.hpp"

using json = nlohmann::json;

int main(){
    std::string actualSong;     std::string nextSong;       std::string lastSong;
    std::string searchResult;   int choiceResult;           int play;
    int start;                  int choiceMenue;            int choiceSuche;
    int choiceWiedergabe;       int choiceLieblingssongs;   

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
                        
                        case 1:
                            // Suchfunktion
                            searchResult = searchSong(songs);
                            choiceResult = -1;
                            while (choiceResult != 0){
                                printRESULT(searchResult, play);
                                std::cin >> choiceResult;
                                switch(choiceResult){
                                    case 1:
                                        if  (play == 1){
                                            play = 0;
                                            actualSong = "";
                                        }
                                        else {
                                            play = 1;
                                            actualSong = searchResult;
                                        }
                                    case 2:
                                        // Funktion zum hinzufügen zu Lieblingssongs
                                    case 0:
                                        break;
                                    default:
                                        printFEHLER();
                                        continue;

                                }
                            }
                            continue;
                        
                        case 0:
                            break;
                        default:
                            printFEHLER();
                            continue;
                    }
                }
                continue;

            case 2: // LIEBLINGSSONGS
                choiceLieblingssongs = -1;
                while (choiceLieblingssongs !=0){
                    printLIEBLINGSSONGS();
                    std::cin >> choiceLieblingssongs;
                    switch(choiceLieblingssongs){
                        case 1:
                            // Suchfunktion - Übergabe des in Funktion gewählten Titels
                            actualSong = searchSong(lieblingssongs);
                            if(!actualSong.empty()){
                                // Menü zum Ausgewälten Song
                                // Funktion - Löschen des Titels aus den Lieblingssongs
                                // Funktion - Abspielen Des Titels = Übergabe in actualSong
                                std::cout << "Lieblingssong gefunden: " << actualSong << std::endl;
                            }
                            continue;
                        case 2:
                            // Alle Lieblingssongs anzeigen
                            continue;
                        case 0:
                            break;
                        default:
                            printFEHLER();
                            continue;
                    }
                }
                continue;

            case 3: // WIEDERGABE
                if (actualSong.empty()){
                    printNoWIEDERGABE();
                }
                else{
                    choiceWiedergabe = -1;
                    while (choiceWiedergabe !=0){       
                        printWIEDERGABE(actualSong);
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
                                printFEHLER();
                                continue;
                        }
                    }
                }   
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
