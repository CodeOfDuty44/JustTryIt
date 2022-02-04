#include "Derived.h"
#include <iostream>

namespace Malatya
{

    Derived::Derived()
    {
        std::cout << "inside derived constructor" << std::endl;
    }

    Derived::~Derived()
    {
        std::cout << "inside derived destructor" << std::endl;
    }

}