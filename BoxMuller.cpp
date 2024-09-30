#include "BoxMuller.h"
#include <cmath>

double BoxMuller::getNormal() {
	U1 = ug->getUniform();
	U2 = ug->getUniform();
	W = sqrtt(-2.0 * log(U1));
	
	N1 = W * cos(tpi * U2);
	N2 = W * sin(tpi * U2);

	return N1;
}