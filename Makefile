CXX = g++
CXXFLAGS = -g

objects = $(files:.cpp=.o)
files = Homework1.cpp Source_Homework1.cpp 
deps = Homework1.hpp

target = Homework1

all: $(target)

$(target): $(objects)
	$(CXX) $(CXXFLAGS) $(objects) -o $(target)

%.o: %.cpp $(deps)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(objects) $(target)
