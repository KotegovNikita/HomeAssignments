PROJECT = Transformers
LIBPROJECT = $(PROJECT).a
TESTPROJECT = test-$(PROJECT)

CXX = g++
A = ar

CXXFLAGS = -g -Werror -Wpedantic -Wall
LDFLAGS = -lgtest -lgtest_main -pthread

DEPS = Autobot.hpp Decepticon.hpp Transformers.hpp
OBJ = Autobot.o Decepticon.o Transformers.o
MAIN_OBJ = main.o

.PHONY: default
default: all

all: $(PROJECT)

$(LIBPROJECT): $(OBJ)
	$(A) rsv $@ $^

$(PROJECT): $(LIBPROJECT) $(MAIN_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(MAIN_OBJ) $(LIBPROJECT) $(LDFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) $(LIBPROJECT) $(LDFLAGS)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

test: $(TESTPROJECT)
	./$(TESTPROJECT)

.PHONY: clean
clean:
	rm -f *.o $(PROJECT).a $(LIBPROJECT) $(TESTPROJECT)

.PHONY: cleanall
cleanall: clean
	rm -f $(PROJECT) $(LIBPROJECT) $(TESTPROJECT)

