CXX = g++
CXXFLAGS = -g


files = Alliance.cpp Autobot.cpp Decepticon.cpp Neutral.cpp Transformers.cpp Type.cpp \
	test_alliance.cpp test_Autobot.cpp test_Decepticon.cpp test_Neutral.cpp \
	test_Transformers.cpp test_Type.cpp test_main.cpp
objects = $(files:.cpp=.o)
deps = Alliance.hpp Autobot.hpp Decepticon.hpp Neutral.hpp Transformers.hpp Type.hpp

target = Transformers

LIBS = -lgtest -lgtest_main

all: $(target)

$(target): $(objects)
	$(CXX) $(CXXFLAGS) -o $(target) $(objects) $(LIBS)

%.o: %.cpp $(deps)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(objects) $(target)

test: $(target)
	./$(target)
