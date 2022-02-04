#include <iostream>
#include "Base.h"
namespace Malatya
{
    Base::Base()
    {
        std::cout << "inside base contsructor" << std::endl;
    }

    Base::~Base()
    {
        std::cout << "isndie base destructor" << std::endl;
    }

}