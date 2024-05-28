#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

string test(){
    int input;
    string results;

    while (input !=0){
        cout << "\n*****Test:*****\n";
        cout << "(1)In Cloud suchen\n";
        cout << "(0)Zurück\n";
        cin >> input;
        switch(input){
            case 1:
            // hier muss eine weitere Funktion erstellt werden,
            // welche Möglichkeiten bietet etwas mit dem gefundenen Song zu machen
            continue;
            case 0:
            break;
            default:                                        // Ungültige Eingabe
            cout << "\n\nUngültige Eingabe\n";
            continue;
        }
    }
    return results;
}