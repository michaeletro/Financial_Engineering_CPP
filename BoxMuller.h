#ifndef BOXMULLER_H
#define BOXMULLER_H

#include "NormalGenerator.h"

class BoxMuller : public NormalGenerator {
private:
	double U1, U2; // Uniform Random Numbers
	double N1, N2; // 2 Normal Numbers as a product of BM

	double W;
	const double tpi;

public:
	BoxMuller(UniformGenerator& uniformGen);

	// Implement (variant) hook function
	double getNormal();
};	

#endif