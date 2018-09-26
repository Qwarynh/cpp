/*! \file lib.h
* \brief fichier de la classe calcul
* \author Paul
* \version
*/

#pragma once


/*! \class calcul
* \brief classe calcul contenant plusieurs methodes pour opération entre deux nombres
*/

class calcul // classe abstraite
{
public:

/*! \brief fonction somme, affiche le résultat de la somme de a et b
* \param a integer
* \param b integer
* \return 0
*/
        int somme(int a, int b);


/*! \brief fonction multiplication, affiche le résultat de la multiplication de a et b
* \param a integer
* \param b integer
* \return 0
*/
	int multiplication(int a, int b);


/*! \brief fonction division, affiche le résultat de la division de a et b
* \param a integer
* \param b integer, doit être différent de 0 sinon retourne une erreur
* \return 0
*/
	int division(int a, int b);

protected:


private:
};


