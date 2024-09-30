#ifndef UNIFORMGENERATOR_H
#define UNIFORMGENERATOR_H
#include <vector>

class UniformGenerator {

private:

public:
	UniformGenerator(); // Constructor declaration

	// Initialization and setting the seed
	virtual void init(long Seed) = 0;

	// Getting Random Structure
	virtual double getUniform() = 0; // Number in range (0,1), variant
	std::vector<double> getUniformVector(long N); // Vector of n numbers in range (0,1), variant
};

#endif