#include "Base.h"
#include "Derived.h"
#include <iostream>

using namespace Malatya;
int main()
{
    Derived* drv  =  new Derived();
    std::cout << "Derived contsrtucotr successfukl" << std::endl;
}