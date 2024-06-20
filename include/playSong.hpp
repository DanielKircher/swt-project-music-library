#include <iostream>
#include <vector>
#include "json.hpp"
#include "struct.hpp"
#include "loadJson.hpp"

using json = nlohmann::json;

std::string playSong(std::string actualSong, std::string searchResult){
    if  (actualSong == searchResult){
        actualSong = "";
        }
    else {
        actualSong = searchResult;
        }
    return actualSong;
}