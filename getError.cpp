#include "quad.h"

int getError(){
	error = 0 - Current_Angle;

	std::cout<<"error "<<error<<std::endl;
	return error;
}
