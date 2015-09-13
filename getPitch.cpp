#include "quad.h"

int8_t getPitch(){
    Current_Angle += (int)feedback;
    std::cout<<"angle "<<Current_Angle<<std::endl;
    return Current_Angle;
}
