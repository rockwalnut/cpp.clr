#include "stdafx.h"
// pi.cpp: 
#include "Pi.h"
#include <cmath>

double Cpp::PI::compute(Cpp::ComputeProgressCallback callback) {
	double sum = 0.;
	for (long n = 0L; n != 100000000L; ++n) {
		sum += 4. * std::pow(-1., n) / (2L * n + 1.);
		callback(10);
	}
	return sum;
}