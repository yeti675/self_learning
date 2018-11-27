// Sommes des valeurs dans 1 tableau Exercice 1

#include "tblx.h"

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;

    for (int i = 0; i < tailleTableau; i++)
    {
        somme = somme + tableau[i];
    }

    return somme;
}

void printResultatSommeTableau(int tableau[], int tailleTableau, int somme)
{
    somme = sommeTableau(tableau, tailleTableau);
    printf("somme tableau[] = %d\n", somme);
}

void parcoursEtPrintTableauAIndex(int tableau[], int tailleTableau)
{
    for (int i = 0; i < tailleTableau; i++)
    {
        printf("Tableau[%d] == %d\n", i, tableau[i]);
    }
}