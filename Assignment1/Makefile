CXX = g++
CXXFLAGS = -g

objects = $(files:.cpp=.o)
files = main_hello.cpp function.cpp
deps = header.hpp

target = main_hello

all: $(target)

$(target): $(objects)
	$(CXX) $(CXXFLAGS) $(objects) -o $(target)

%.o: %.cpp $(deps)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(objects) $(target)
