#include <iostream>

void printWILLKOMMEN(){
    std::cout << "\nWillkommen im Software-Technik-Projekt" << std::endl;
    std::cout << "von Maximilian und Daniel" << std::endl << std::endl;
}

void printBEENDEN(){
    std::cout << "Musikplayer wird beendet." << std::endl;
}

void printSTART(){
    std::cout << "(1) Musikplayer starten" << std::endl;
    std::cout << "(0) Musikplayer beenden" << std::endl << std::endl;
}

void printHAUPTMENUE(){
    std::cout << "=============== Hauptmenü ===============" << std::endl << std::endl;
    std::cout << "(1) Suche" << std::endl;
    std::cout << "(2) Lieblingssongs" << std::endl;
    std::cout << "(3) Aktuelle Wiedergabe" << std::endl;
    std::cout << "(0) Beenden" << std::endl << std::endl;
}

void printSUCHE(){
    std::cout << "=============== Suche ===============" << std::endl << std::endl;
    std::cout << "(1) In Cloud suchen" << std::endl;
    std::cout << "(0) Zurück" << std::endl << std::endl;
}

void printRESULT(std::string searchResult, int play){
    if (play == 1){
        std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
        std::cout << "(1) Stop" << std::endl;
        std::cout << "(2) zu Lieblingssongs hinzufügen" << std::endl;
        std::cout << "(0) Zurück" << std::endl << std::endl;
    }
    else{
        std::cout << "=============== " + searchResult + " ===============" << std::endl << std::endl;
        std::cout << "(1) Play" << std::endl;
        std::cout << "(2) zu Lieblingssongs hinzufügen" << std::endl;
        std::cout << "(0) Zurück" << std::endl << std::endl;
    }
}

void printLIEBLINGSSONGS(){
    std::cout << "=============== Lieblingssongs ===============" << std::endl << std::endl;
    std::cout << "(1) Suche"  << std::endl;
    std::cout << "(2) Alle anzeigen" << std::endl;
    std::cout << "(0) Zurück" << std::endl << std::endl;
}

void printWIEDERGABE(std::string actualSong){
        std::cout << "\n=============== Wiedergabe ===============" << std::endl << std::endl;
    std::cout << "(1) Letzter Song << " + actualSong + " >> Nächster Song (3)" << std::endl;
    std::cout << "(0) Zurück" << std::endl << std::endl;
}

void printNoWIEDERGABE(){
    std::cout << "Keine Wiedergabe" << std::endl << std::endl;
}

void printFEHLER(){
    std::cout << "FEHLER: Ungültige Eingabe" << std::endl << std::endl;
}