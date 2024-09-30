#ifndef TERRIBLERANDGENERATOR_H
#define TERRIBLEANDGENERATOR_H

#include "UniformGenerator.h"

class TerribleRandGenerator : public UniformGenerator {
private:
	double factor;

public:
	// Constructor declaration
	TerribleRandGenerator();

	// Initialize the seed, among others
	void init(long Seed) override;

	// Implement (variant) hook function
	double getUniform() override;
};

#endif