// mettre valeur a 0 d'un tableau en fonction d'une valeur max

#include "tblx.h"

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;

    for (i = 0; i < tailleTableau; i++)
    {

        if (tableau[i] > valeurMax)
        {
            tableau[i] = 0;
        }
    }
}

void printMettreTableauValeurZeroMax(int tableau[], int tailleTableau, int valeurMax)
{
    printf("Tableau[i] = 0 quand > valeur max = %d\n\n", valeurMax);
    parcoursEtPrintTableauAIndex(tableau, tailleTableau);
}