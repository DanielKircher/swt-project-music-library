#ifndef SEARCH_HPP
#define SEARCH_HPP

#include <vector>
#include <string>
#include "struct.hpp"

std::string searchSong(const std::vector<Song>& songs) {
    std::string searchTerm;
    std::cout << "Titel suchen: ";
    std::cin >> searchTerm;
    
    for (const auto& song : songs) {
        if (song.title.find(searchTerm) != std::string::npos ||
        song.artist.find(searchTerm) != std::string::npos ||
        song.album.find(searchTerm) != std::string::npos) {
            std::cout << "Titel gefunden: " << std::endl;
            std::cout << song.title << " - " << song.artist << std::endl;;
            return song.title;
        }
    }
    
    std::cout << "Kein Song gefunden." << std::endl;
    return "";
}

#endif // SEARCH_HPP
