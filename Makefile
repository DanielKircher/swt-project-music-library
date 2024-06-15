CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = 
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = include
TEST_DIR = test
BIN_DIR = bin

# Die Dateien für Ihre Anwendung, ausgenommen die main.cpp
APP_SOURCES = $(filter-out $(SRC_DIR)/main.cpp, $(wildcard $(SRC_DIR)/*.cpp))
APP_OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(APP_SOURCES))
APP_EXECUTABLE = $(BIN_DIR)/my_app

# Die Quelle für Ihre Hauptfunktion
MAIN_SOURCE = $(SRC_DIR)/main.cpp
MAIN_OBJECT = $(OBJ_DIR)/main.o

# Die Dateien für Ihre Tests
TEST_SOURCES = $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJECTS = $(patsubst $(TEST_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(TEST_SOURCES))
TEST_EXECUTABLE = $(BIN_DIR)/test_app

# Standardmäßige build-Ziel
all: $(APP_EXECUTABLE)

# Ziel zum Erstellen der Hauptanwendung
$(APP_EXECUTABLE): $(APP_OBJECTS) $(MAIN_OBJECT)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Ziel zum Erstellen der Test-Anwendung
test: $(TEST_EXECUTABLE)

$(TEST_EXECUTABLE): $(APP_OBJECTS) $(TEST_OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Generische Regel für das Erstellen von Objekten
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Generische Regel für das Erstellen von Test-Objekten
$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

$(BIN_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/* $(APP_EXECUTABLE) $(TEST_EXECUTABLE)

.PHONY: all test clean
