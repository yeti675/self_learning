// Moyenne des valeurs dans un tableau Exercice 2

#include "tblx.h"

double moyenneTableau(int tableau[], int tailleTableau)
{

    double moyenne;

    moyenne = sommeTableau(tableau, tailleTableau);

    return moyenne / tailleTableau;
}

void printResultatMoyenneTableau(int tableau[], int tailleTableau, int moyenne)
{
    moyenne = moyenneTableau(tableau, tailleTableau);
    printf("moyenne tableau[] = %d\n", moyenne);
}
