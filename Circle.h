#pragma once
#include <iostream>
using namespace std;

#include "MathFigures.h"

class Circle :
    public MathFigures
{
public:
    double square() override;
};

