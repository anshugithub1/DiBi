# Makefile for DiBi
CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRC = src/main.cpp src/dibi.cpp src/parser.cpp
INC = -Iinclude

TARGET = dibi

all:
	$(CXX) $(CXXFLAGS) $(SRC) $(INC) -o $(TARGET)

clean:
	rm -f dibi
