#include "quad.h"

int getFeedback(){
//	errors.push_back(error);                        //adds error to error vector
    	//feed.push_back(feedback);

                //adds angle to angles vector
    sum_of_errors += error;


 /*   for(vector<int>::iterator j=errors.begin();j!=errors.end();++j){
            sum_of_errors += *j;
        */

    double integral   = K_i*sum_of_errors;



//	std::cout<<K_d*angles[angles.size()-1]<<" - "<<K_d*angles[angles.size()-2]<<std::endl;
//problem is that the first run through there is no angles[angles.size()-1]; i have to make an if loop against that
	double derivative = K_d*feedback;
	//feed[feed.size()-1];//K_d*errors[errors.size()-1]-errors[errors.size()];
	//K_d*angles[angles.size()-1]-K_d*angles[angles.size()-2]; //since delta is one unit or iteration of main
	//OMG I THINK I KNOW WHATS WRONG THE DERIVATIVE SHOULD BE BASED ON THE ANGLE NOT ERROR
	std::cout<<"deriv "<<derivative<<std::endl;
	double proportion = K_p*error;
    std::cout<<"proportion "<<proportion<<std::endl;
	double feedback = proportion + integral + derivative;

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
