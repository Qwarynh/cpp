#include "lib.h"
#include <iostream>


calcul::calcul(int nombre_1, int nombre_2)
{
    somme(nombre_1, nombre_2);

}

int calcul::somme(int nombre_1, int nombre_2){

std::cout<< nombre_1+nombre_2 <<std::endl;

return 0;
}
