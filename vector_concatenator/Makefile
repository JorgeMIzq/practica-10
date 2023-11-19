CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: vector_concatenator
 
vector_concatenator: vector_concatenator.cc vector_concatenator_main.cc vector_generator.cc
	$(CXX) $(CXXFLAGS) -o vector_concatenator vector_concatenator.cc vector_concatenator_main.cc vector_generator.cc

clean:
	rm -f vector_concatenator
