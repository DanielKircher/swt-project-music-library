#ifndef JSON_READER_HPP
#define JSON_READER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

// Struktur zum Speichern der Liedinformationen
struct Song {
    std::string titel;
    std::string interpret;
    int erscheinungsjahr;
    std::string album;
};

// Definition der Funktion zum Einlesen der JSON-Datei
std::vector<Song> readSongsFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Fehler beim Öffnen der Datei: " + filename << std::endl;
        return {};
    }

    json j;
    file >> j;

    std::vector<Song> songs;
    for (const auto& item : j) {
        Song song;
        song.titel = item.at("Titel").get<std::string>();
        song.interpret = item.at("Interpret").get<std::string>();
        song.erscheinungsjahr = item.at("Erscheinungsjahr").get<int>();
        song.album = item.at("Album").get<std::string>();
        songs.push_back(song);
    }
    return songs;
}
#endif // JSON_READER_HPP
