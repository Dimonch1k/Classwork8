#pragma once
#include <iostream>
using namespace std;

#include "MathFigures.h"

class RightTriangle :
    public MathFigures
{
private:
	int a;
	int b;

public:
	RightTriangle(int a, int b);
	double square() override;
};

