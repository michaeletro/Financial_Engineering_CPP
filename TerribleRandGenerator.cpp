#include "TerribleRandGenerator.h"

TerribleRandGenerator::TerribleRandGenerator() : factor(1.0/RAND_MAX){}

void TerribleRandGenerator::init(long Seed) {
	srand(Seed);
}

double TerribleRandGenerator::getUniform() {
	return rand() * factor;
}