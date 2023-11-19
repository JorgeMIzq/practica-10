CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: stats_calculator
stats_calculator: stats_calculator.cc stats_calculator_main.cc vector_generator.cc
	$(CXX) $(CXXFLAGS) -o stats_calculator stats_calculator.cc stats_calculator_main.cc vector_generator.cc

clean:
	rm -f stats_calculator

