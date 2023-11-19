CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: vector_generator

vector_generator: vector_generator_main.cc vector_generator.cc
	$(CXX) $(CXXFLAGS) -o vector_generator vector_generator_main.cc vector_generator.cc

clean:
	rm -f vector_generator
