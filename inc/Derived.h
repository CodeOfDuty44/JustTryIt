#ifndef _DERIVED_H_
#define _DERIVED_H_


#include "Base.h"

namespace Malatya
{

class Derived: public Base
{

public: 
    Derived();
    ~Derived();

    //void AdditonalFunc(); //does not create a problem althoguh you dont implement it


}; //end of class

} //end of namespace







#endif