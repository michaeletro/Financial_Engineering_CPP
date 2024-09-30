// UniformGenerator.cpp
#include "UniformGenerator.h"

// Constructor definition
UniformGenerator::UniformGenerator() {}

// Definition of getUniformVector method
std::vector<double> UniformGenerator::getUniformVector(long N) {
    std::vector<double> uniformVector;
    uniformVector.reserve(N);
    for (long i = 0; i < N; ++i) {
        uniformVector.push_back(getUniform());
    }
    return uniformVector;
}