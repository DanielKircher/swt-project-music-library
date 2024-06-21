#define CATCH_CONFIG_SEARCH
#include "catch.hpp"
#include "search.hpp"
#include <iostream>
#include <sstream>

TEST_CASE("Song suche", "[searchSong]") {

    std::string erwarteteAusgabe = "Titel gefunden:\n"
                                   "Imagine - John Lennon\n"
                                   "=============== Imagine ===============\n\n"
                                   "(1) Play\n"
                                   "(2) zu Lieblingssongs hinzufügen\n"
                                   "(0) Zurück\n\n";

    REQUIRE(searchSong("Imagine") == erwarteteAusgabe);
}
