// Version 2.1.0

#include <iostream>
#include "externTEXT.cpp"


int main(){
    std::string actualSong;     std::string nextSong;       std::string lastSong;
    int choiceWiedergabe;

    printWILKOMMEN();
// Start der Anwendung;
    int start;
    while(start != 1){
        printSTART();
        std::cin >> start;
            switch (start){
                case 1:
                    break;
                case 0:
                    std::cout << "Musikplayer wird beendet.";            
                    return 0;
                default:
                    printFEHLER();
                    continue;
        }  
    }
// Hauptmenü:
    int choiceMenue;
    while(choiceMenue != 0){
        std::cout << "===============Hauptmenü:===============" << std::endl;
        std::cout << "(1) Suche\n";
        std::cout << "(2) Lieblingssongs\n";
        std::cout << "(3) Aktuelle Wiedergabe\n";
        std::cout << "(0) Beenden\n\n";
        std::cin >> choiceMenue;

        switch(choiceMenue){

            case 1: // SUCHE
                int choiceSuche;
                while (choiceSuche !=0){
                    std::cout << "===============Suche:===============" << std::endl;
                    std::cout << "(1) In Cloud suchen" << std::endl;
                    std::cout << "(0) Zurück" << std::endl;
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
                    std::cout << "\n===============Lieblingssongs:===============" << std::endl;
                    std::cout << "(1) Suche" << std::endl;
                    std::cout << "(2) Alle anzeigen" << std::endl;
                    std::cout << "(0) Zurück" << std::endl;
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
                    std::cout << "Keine Wiedergabe\n";
                }
                else{
                    while (choiceWiedergabe !=0){       
                        std::cout << "\n===============Aktuelle Wiedergabe:==============="  << std::endl;
                        std::cout << actualSong << std::endl;
                        std::cout << "(1) Letzter Song" << std::endl;
                        std::cout << "(3) Nächster Song" << std::endl;
                        std::cout << "(0) Zurück"  << std::endl;
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
                std::cout << "Musikplayer wird beendet.";
                break;
            default:
                printFEHLER();
                continue;
        }
    }
    return 0;
}