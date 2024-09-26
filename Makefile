CXX = g++
CXXFLAGS = -g

objects = $(files:.cpp=.o)
files = main.cpp Source_Homework1.cpp 
deps = Header.hpp

target = Homework1

all: $(target)

$(target): $(objects)
	$(CXX) $(CXXFLAGS) $(objects) -o $(target)

%.o: %.cpp $(deps)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(objects) $(target)
