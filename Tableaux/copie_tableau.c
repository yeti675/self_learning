// Copier un tableaux dans un autre tableau Exercice 3

#include "tblx.h"

void copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i = 0;

    for (i = 0; i < tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }
}

void printTabxAvCopie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    printf("----- AVANT COPIE -----\n\n");
    printf("ORIGINAL\n");
    parcoursEtPrintTableauAIndex(tableauOriginal, tailleTableau);
    printf("COPIE\n");
    parcoursEtPrintTableauAIndex(tableauCopie, tailleTableau);
    printf("\n");
}

void printTabxApCopie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    printf("----- APRES COPIE -----\n\n");
    printf("COPIE\n");
    parcoursEtPrintTableauAIndex(tableauCopie, tailleTableau);
}
