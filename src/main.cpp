#include <iostream>
#include "lib.h"
#include "ecole.h"
//#include <stdlib.h>

int main(){

int a;
int b;
std::cout << "entrer le premier nombre"<<std::endl;
std::cin >> a;
std::cout<< "entrer le second nombre" << std::endl;
std::cin >> b;


std::cout<< "La somme est" << std::endl;


calcul* calcul1 = new calcul;
calcul calcul2;
ecole ecole1;

calcul1->somme(a,b);

std::cout << "la date de creation de l'ecole est " << ecole1.date()<<std::endl;


calcul2.multiplication(a, b);
calcul2.division(a, b);


return 0;
}
