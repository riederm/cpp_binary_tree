# Makefile for compiling the BinaryTree and SafeBinaryTree examples

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

SRC = main.cpp
HEADERS = Data.h BinaryTree.h
TARGET = binary_tree

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)