#include <iostream>
#include <string>
using namespace std;

void suche(){
    int input;
    while (input !=0){
        cout << "\nSuche:\n";
        cout << "(1)In Cloud suchen\n";
        cout << "(0)Zurück\n";

    cin >> input;
        switch(input){
            case 1:
                continue;
            case 0:
                break;
            default:                                        // Ungültige Eingabe
                cout << "\n\nUngültige Eingabe\n";
                continue;
        }
    }
}