#pragma once
#include <iostream>
#include <vector>

typedef std::vector<std::string> poly;

class Poly
{
    poly p;

public:
    Poly(poly pp) : p(pp)
    {
    }
    std::string getIndex(unsigned int i);
};
