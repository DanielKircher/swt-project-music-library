// Version 2.2.3

#include <iostream>
#include "json.hpp"
#include "text.hpp"

using json = nlohmann::json;


int main(){
    std::string actualSong;     std::string nextSong;       std::string lastSong;
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

            //Funktion zum Laden einer json-Datei

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
                            // Suchfunktion - Übergabe des in Funktion gewählten Titels
                            // Funktion - Hinzufügen zu Lieblingssongs
                            // Funktion - Abspielen Des Titels = Übergabe in actualSong
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