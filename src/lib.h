#pragma once
class calcul // classe abstraite
{
public:
    calcul();//constructeur
    calcul(int nombre_1, int nombre_2);
    ~calcul();//destructeur
    

        int somme(int nombre_1, int nombre_2);

protected:
    int nombre_1;
    int nombre_2;


private:
};
