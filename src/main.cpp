#include <iostream>
#include "lib.h"
//#include <stdlib.h>

int main(){

int a;
int b;
std::cout << "entrer le premier nombre"<<std::endl;
std::cin >> a;
std::cout<< "entrer le second nombre" << std::endl;
std::cin >> b;


std::cout<< "La somme est" << std::endl;


calcul* calcul1 = new calcul(a, b);



return 0;
}
