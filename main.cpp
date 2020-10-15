#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
	Calculator x;
	std::cout<< "5.8 - 3.6 = " <<x.Sub(5.8, 3.6)<<std::endl;
	return 0;
}