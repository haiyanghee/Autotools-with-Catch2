#include "testBuild/Poly/Poly.hpp"

std::string Poly::getIndex(unsigned int i)
{
    if (i >= p.size()) {
	std::cout << "invalid index! will return empty string\n";
    }
    return p[i];
}

