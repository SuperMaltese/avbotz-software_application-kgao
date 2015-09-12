
#include <iostream>
#include <vector>

using std::vector;
vector<int> errors;

int Current_Angle = -45;
int feedback = 0;
int error;
int sum_of_errors = 0;

double K_i = .02;
double K_d = .0001;
double K_p = .3;
double maximum = 127;
double minimum = -127;



int main(){
		Current_Angle = getPitch();
	  error = getError();
		feedback = getFeedback();
		if(error<2 && error>-3)
            break;
    }
}

int8_t getPitch(){
    Current_Angle += (int)feedback;
    std::cout<<"angle "<<Current_Angle<<std::endl;
    return Current_Angle;
}

int getError(){
	error = 0 - Current_Angle;
	std::cout<<"error "<<error<<std::endl;
	return error;
}

int getFeedback(){
    sum_of_errors += error;

    double integral   = sum_of_errors;
	  double derivative = feedback;
	  std::cout<<"deriv "<<derivative<<std::endl;
	  double proportion = error;
    std::cout<<"proportion "<<proportion<<std::endl;
	  double feedback = K_p*proportion + K-i*integral + K-d*derivative;

	std::cout<<"integral "<<integral<<std::endl;
   //     if (feedback<minimum)
     //       feedback = minimum;
  //      if (feedback>maximum)
   //         feedback = maximum;
  //      std::cout<<"derivative "<<derivative<<std::endl;

        std::cout<<"feedback "<<feedback<<std::endl;
        std::cout<<""<<std::endl;
        return (int)feedback;

}

