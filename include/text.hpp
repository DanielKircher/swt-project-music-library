#include <iostream>

void printWILLKOMMEN(){
    std::cout << "\nWillkommen im Software-Technik-Projekt\n";
    std::cout << "von Maximilian und Daniel\n\n";
}

void printBEENDEN(){
    std::cout << "Musikplayer wird beendet.\n";
}

void printSTART(){
    std::cout << "(1) Musikplayer starten.\n";
    std::cout << "(0) Musikplayer beenden.\n\n";
}

void printHAUPTMENUE(){
    std::cout << "===============Hauptmenü:===============\n";
    std::cout << "(1) Suche\n";
    std::cout << "(2) Lieblingssongs\n";
    std::cout << "(3) Aktuelle Wiedergabe\n";
    std::cout << "(0) Beenden\n\n";
}

void printSUCHE(){
    std::cout << "===============Suche:===============\n";
    std::cout << "(1) In Cloud suchen\n";
    std::cout << "(0) Zurück\n";
}

void printLIEBLINGSSONGS(){
    std::cout << "\n===============Lieblingssongs:===============\n";
    std::cout << "(1) Suche\n";
    std::cout << "(2) Alle anzeigen\n";
    std::cout << "(0) Zurück\n";
}

void printWIEDERGABE(std::string actualSong){
    std::cout << "\n===============Aktuelle Wiedergabe:===============\n";
    std::cout << actualSong << std::endl;
    std::cout << "(1) Letzter Song\n";
    std::cout << "(3) Nächster Song\n";
    std::cout << "(0) Zurück\n\n";
}

void printNoWIEDERGABE(){
    std::cout << "Keine Wiedergabe\n\n";
}

void printFEHLER(){
    std::cout << "FEHLER: Ungültige Eingabe\n\n";
}

