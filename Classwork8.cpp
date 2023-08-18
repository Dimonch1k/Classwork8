#include <iostream>
using namespace std;



// Task 1

/*
#include "ProductDevelopment.h"
#include "Product.h"
#include "Software.h"



int main() {
	Product hardware;
	Software software;


	cout << software.design();
	cout << software.produce();
	cout << "\n\n\n";

	cout << hardware.design();
	cout << hardware.produce();
}*/


////////////////////////////////////////////

// Task 2

#include "MathFigures.h"
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"
#include "Trapeze.h"




int main() {
	int rectangleA = 0;
	int rectangleB = 0;

	int rightTriangleA = 0;
	int rightTriangleB = 0;

	int circleA = 0;
	int circleB = 0;

	int trapeze = 0;



	

	// Finding the square of rectangle
	cout << "Enter the side A in rectangle: "; cin >> rectangleA;
	cout << "Enter the side B in rectangle: "; cin >> rectangleB;
	Rectangle rectangle(rectangleA, rectangleB);
	Rectangle* newRectangle = new Rectangle(rectangle);
	cout << "The square of rectangle is: " << newRectangle->square() << "\n\n\n";



	// Finding the square of right triangle
	cout << "Enter the side A in right triangle: "; cin >> rightTriangleA;
	cout << "Enter the side B in right triangle: "; cin >> rightTriangleB;
	RightTriangle triangle(rightTriangleA, rightTriangleB);
	RightTriangle* newRightTriangle = new RightTriangle(triangle);
	cout << "The square of right triangle is: " << newRightTriangle->square() << "\n\n\n";
}



