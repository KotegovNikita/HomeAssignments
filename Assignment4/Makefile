PROJECT = Transformers
LIBPROJECT = $(PROJECT).a
TESTPROJECT = test-$(PROJECT)

CXX = g++
A = ar

CXXFLAGS = -g -Werror -Wpedantic -Wall
LDFLAGS = -lgtest -lgtest_main

DEPS = Alliance.hpp Autobot.hpp Decepticon.hpp Neutral.hpp Transformers.hpp Type.hpp
OBJ = Alliance.o Autobot.o Decepticon.o Neutral.o Transformers.o Type.o
TEST-OBJ = test_alliance.o test_Autobot.o test_Decepticon.o test_Neutral.o \
           test_Transformers.o test_Type.o test_main.o

.PHONY: default
default: all

$(LIBPROJECT): $(OBJ)
	$(A) rsv $@ $^

$(PROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(TEST-OBJ) $(LIBPROJECT) $(LDFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(TEST-OBJ) $(LIBPROJECT) $(LDFLAGS)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TESTPROJECT)
	./$(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean
clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)


