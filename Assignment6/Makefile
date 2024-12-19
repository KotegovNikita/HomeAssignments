PROJECT = main

CXX = g++

CXXFLAGS = -I. -std=c++17 -Wall -Werror -Wpedantic -g -fPIC
TESTFLAGS = -lgtest -lgtest_main -pthread

SRC = main.cpp

$(PROJECT) : $(SRC)
	$(CXX) -o $@ $< $(TESTFLAGS)

all: $(PROJECT)

clean:
	rm $(PROJECT)
