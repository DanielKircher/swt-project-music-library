// Version 2.0.1

#include <iostream>


int main(){
    std::string actualSong;
    std::string nextSong;
    std::string lastSong;
    int choiceWiedergabe;
    std::cout << "\nWillkommen im Software-Technik-Projekt\n";
    std::cout << "von Maximilian und Daniel\n\n";
// Start der Anwendung;
    int start=2;
    while(start != 1){
        std::cout << "(1) Musikplayer starten.\n";
        std::cout << "(0) Musikplayer beenden.\n\n";
        std::cin >> start;
            switch (start){
                case 1:
                    break;
                case 0:
                    std::cout << "Musikplayer wird beendet.";            
                    return 0;
                default:
                    std::cout << "FEHLER: Ungültige Eingabe\n";
                    continue;
        }  
    }
// Hauptmenü:
    int input;
    while(input != 0){
        std::cout << "\n*****Hauptmenü:*****\n";
        std::cout << "(1) Suche\n";
        std::cout << "(2) Lieblingssongs\n";
        std::cout << "(3) Aktuelle Wiedergabe\n";
        std::cout << "(0) Beenden\n\n";
        std::cin >> input;
        switch(input){
    // Suche
            case 1:
                int choiceSuche;
                while (choiceSuche !=0){
                    std::cout << "\n*****Suche:*****\n";
                    std::cout << "(1) In Cloud suchen\n";
                    std::cout << "(0) Zurück\n\n";
                    std::cin >> choiceSuche;
                    switch(choiceSuche){
                        case 1:
                            std::cout << "Suchfunktion";
                            continue;
                        case 0:
                            break;
                        default:
                            std::cout << "FEHLER: Ungültige Eingabe\n";

                            continue;
                    }
                }
                continue;
    // Lieblingssongs
            case 2:
                int choiceLieblingssongs;
                while (choiceLieblingssongs !=0){
                    std::cout << "\n*****Lieblingssongs:*****\n";
                    std::cout << "(1) Suche\n";
                    std::cout << "(2) Alle anzeigen\n";
                    std::cout << "(0) Zurück\n\n";
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
                        std::cout << "FEHLER: Ungültige Eingabe\n";
                        continue;
                    }
                }
                continue;
    // Aktuelle Wiedergabe
            case 3:
                if (actualSong.empty()){
                    std::cout << "Keine Wiedergabe\n";
                }
                else{
                    while (choiceWiedergabe !=0){
                        std::cout << "\n*****Aktuelle Wiedergabe:*****\n";
                        std::cout << actualSong << std::endl;
                        std::cout << "(1) Letzter Song\n\n";
                        std::cout << "(3) Nächster Song\n\n";
                        std::cout << "(0) Zurück\n\n";
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
                            std::cout << "FEHLER: Ungültige Eingabe\n";
                            continue;
                        }
                    }
                }   
                continue;
            case 0:
                std::cout << "Musikplayer wird beendet.";
                break;
            default:
                std::cout << "FEHLER: Ungültige Eingabe\n";
                continue;
        }
    }
    return 0;
}