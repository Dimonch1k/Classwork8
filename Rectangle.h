#pragma once
#include <iostream>
using namespace std;

#include "MathFigures.h"

class Rectangle :
    public MathFigures
{
private:
    int a;
    int b;

public:
    Rectangle(int a, int b);
    double square() override;
};

