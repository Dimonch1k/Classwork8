#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) {
	this->a = a;
	this->b = b;
}


double Rectangle::square() {
	double result = a * b;
	return result;
}