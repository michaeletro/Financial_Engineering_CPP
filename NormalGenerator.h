#ifndef NORMALGENERATOR_H
#define NORMALGENERATOR_H

#include "NumericMatrix.h"
#include "UniformGenerator.h"

class NormalGenerator {
protected:
	UniformGenerator* ug; // This is a strategy object
public:
	NormalGenerator(UniformGenerator& uniformGen);

	// Getting Random Strucutre (Template Method)
	virtual double getNormal() = 0; // Get a number from the normal distribution

	std::vector<double> getNormalVector(long N); // Get a vector of N numbers from the normal distribution
	NumericMatrix<double> getNormalMatrix(long N, long M); // Get a matrix of N x M numbers from the normal distribution
};

#endif