#include "lib.h"
#include <iostream>



int calcul::somme(int a, int b){

std::cout<< a+b <<std::endl;

return 0;
};

int calcul::multiplication(int a, int b){

std::cout<< a*b << std::endl;

return 0;
};

int calcul::division(int a, int b){

if (b==0){

std::cout<< "erreur" <<std::endl;
} else{

std::cout<< a/b << std::endl;
};
return 0;
};
