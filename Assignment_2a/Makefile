CXX = g++
CXXFLAGS = -g

objects = $(files:.cpp=.o)
files = main_2a.cpp
deps = header_2a.hpp

target = main_2a

all: $(target)

$(target): $(objects)
	$(CXX) $(CXXFLAGS) $(objects) -o $(target)

%.o: %.cpp $(deps)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(objects) $(target)
