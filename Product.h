#pragma once
#include <iostream>
using namespace std;

#include "ProductDevelopment.h"


class Product :
    public ProductDevelopment
{
public:
    string design() override;
    string produce() override;
};

