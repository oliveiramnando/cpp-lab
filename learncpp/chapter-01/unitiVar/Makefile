CXX = g++

CXXFLAGS = -std=c++23 \
           -Wall \
           -Wextra \
           -Weffc++ \
           -Wconversion \
           -Wsign-conversion \
           -Wpedantic \
           -pedantic-errors \
           -Wshadow

TARGET = build/main
SRC = main.cpp

all:
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -rf build
