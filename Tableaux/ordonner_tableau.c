// Ordonner tableau dans l'ordre croissant.

#include "tblx.h"

void my_swap(int *a, int *b);

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int verification = 1;

    while (verification)
    {
        verification = 0;
        for (int i = 0; i < tailleTableau - 1; i++)
        {
            if (tableau[i] > tableau[i + 1])
            {
                my_swap(&tableau[i], &tableau[i + 1]);
                verification = 1;
            }
        }
    }
}

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void printOrdonnerTableauxAv(int tableau[], int tailleTableau)
{
    printf("--- RANGEMENT DANS L'ORDRE CROISSANT LES VALEURS DU TABLEAU ---\n\n");
    printf("Tableau avant mis en ordre \n");
    parcoursEtPrintTableauAIndex(tableau, tailleTableau);
}

void printOrdonnerTableauxAp(int tableau[], int tailleTableau)
{
    printf("Tableau apres mis en ordre \n");
    parcoursEtPrintTableauAIndex(tableau, tailleTableau);
}
