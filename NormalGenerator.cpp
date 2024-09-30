#include "NormalGenerator.h"
#include <vector>

Vector<double, long> NormalGenerator::getNormalVector(long N) {
	// Invariatn Part

	std::vector<double, long> vec(N);

	for (long i = vec.minIndex(); i <= vec.MaxIndex(); i++) {
		vec[i] = getNormal();
	}
	return vec;
}