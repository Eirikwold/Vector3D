#include "Vector3DClass.h"
#include <iostream>

int main()
{
    Vector3DClass vector3DClass;
        
    Vector3DClass smult = operator*(10, vector3DClass);


    // Overload ostream opertar "<<" 
    std::cout << smult << std::endl;

    return 0;

}


/*
    Saturday: Fix ostream operator.
    - Test all functions
    - Push to git when everything works (for version control in case you mess up doing template work)
    - Make class "Templated".
    - Sort it based on "absolut value" of the vectors. 

    Get ready for SDL work.
*/