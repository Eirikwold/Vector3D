#include "Vector3DClass.h"
#include <iostream>

int main()
{
    Vector3DClass vector3DClass(0, 0, 0);
    
    Vector3DClass firstVector(5, 5, 5);
    Vector3DClass secondVector(10, 10, 10);
    Vector3DClass vMult = operator*(10, secondVector);

    std::cout << "Dot product: " << firstVector * secondVector << std::endl;
    std::cout << "Vector addition: " << firstVector + secondVector << std::endl;
    std::cout << "Vector subtraction: " << firstVector - secondVector << std::endl;
    std::cout << "Scalar multiplication: " << vMult << std::endl;
    std::cout << "Vector length: " << firstVector.Length() << std::endl;

    std::cout << "Float pointer: " << firstVector.GetFloatPtr() << std::endl;
    std::cout << "Float pointer: " << secondVector.GetFloatPtr() << std::endl;






    //TEST Vector3DClass constructor (const float coords[3]);
    //This is the constructor delegation (which i haven't completely figured out).
    Vector3DClass coordsObject(firstVector);
    //Vector3DClass coordsObject(secondVector); Cannot use same name for this construct (so it doesnt fill indexes of array)

    std::cout << "Constructor Vector3DClass(const float coords[3]); " << "(x,y,z): " << coordsObject << std::endl;
    std::cout << "coords[0]: "<< "X: " <<coordsObject[0] << std::endl; 
    std::cout << "coords[1]: " << "Y: " << coordsObject[1] << std::endl;
    std::cout << "coords[2]: " << "Z: " << coordsObject[2] << std::endl;

    /*EDIT
        It seems like the purpose of this is to be able to feed it with an object already built
        from the other constructor. In essence this creates no duplication of code (in terms of
        variable initialization). Which is quite nice.
    */

    return 0;

}


/*
    //

    Backlog:
    - Push to git when everything works (for version control in case you mess up doing template work)
    - Make class "Templated".
    - Sort it based on "absolut value" of the vectors. 
    - Make a "Answer Vector" that can store different answer to different tasks when you work with maths.
    
    Get ready for SDL work.
*/