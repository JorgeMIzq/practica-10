CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: reduce_sum 
reduce_sum: reduce_sum.cc reduce_sum_main.cc vector_generator.cc
	$(CXX) $(CXXFLAGS) -o reduce_sum reduce_sum.cc reduce_sum_main.cc vector_generator.cc

clean:
	 rm -f reduce_sum
