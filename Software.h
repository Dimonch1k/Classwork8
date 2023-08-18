#pragma once
#include <iostream>
using namespace std;

#include "ProductDevelopment.h"



class Software :
    public ProductDevelopment
{
public:
    string design() override;
    string produce() override;
};

