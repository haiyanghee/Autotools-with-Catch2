#include <iostream>
#include "testBuild/Input/Input.hpp"

int main()
{
    Input i(3);
    std::cout << "genus is " << i.getGenus() << std::endl;
}
