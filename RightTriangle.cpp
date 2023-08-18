#include "RightTriangle.h"


RightTriangle::RightTriangle(int a, int b) {
	this->a = a;
	this->b = b;
}


double RightTriangle::square() {
	double result = 0.5 * a * b;
	return result;
}