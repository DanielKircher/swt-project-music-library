// Version 2.2.0

#include <iostream>
#include "text.hpp"


int main(){
    std::string actualSong;     std::string nextSong;       std::string lastSong;
    int choiceWiedergabe;

// Willkommen:
    printWILLKOMMEN();

// Start der Anwendung:
    int start;
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
// Hauptmenü:
    int choiceMenue;
    while(choiceMenue != 0){
        printHAUPTMENUE();
        std::cin >> choiceMenue;
        switch(choiceMenue){

            case 1: // SUCHE
                int choiceSuche;
                while (choiceSuche !=0){
                    printSUCHE(); 
                    std::cin >> choiceSuche;
                    switch(choiceSuche){
                        case 1:
                            std::cout << "Suchfunktion";
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
                int choiceLieblingssongs;
                while (choiceLieblingssongs !=0){
                    printLIEBLINGSSONGS();
                    std::cin >> choiceLieblingssongs;
                    switch(choiceLieblingssongs){
                        case 1:
                            std::cout << "Suche";
                            continue;
                        case 2:
                            std::cout << "Lieblingslieder";
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
                    while (choiceWiedergabe !=0){       
                        printWIEDERGABE(actualSong);
                        std::cin >> choiceWiedergabe;
                        switch(choiceWiedergabe){
                        case 1:
                            actualSong = lastSong;
                            continue;
                        case 3:
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