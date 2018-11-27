// Exercices tableaux openclassroom

#include "tblx.h"

int main(int argc, char const *argv[])
{

    int tableau[17] = {12, 30, 63, 20, -11, 14, 85, 0, 2, 11, 6, 5, 78, 2, 12, 1, 5};
    int tailleTableau = 17;
    int tableauCopie[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int mettreValeurAZeroValeurMax = 200;

    parcoursEtPrintTableauAIndex(tableau, tailleTableau);
    printf("\n");
    sommeTableau(tableau, tailleTableau);                                                    // additionne les valeur du tableau.
    printResultatSommeTableau(tableau, tailleTableau, sommeTableau(tableau, tailleTableau)); // print la valeur de l'addition des valeurs du tableau
    moyenneTableau(tableau, tailleTableau);
    printResultatMoyenneTableau(tableau, tailleTableau, moyenneTableau(tableau, tailleTableau));
    printf("\n");
    printTabxAvCopie(tableau, tableauCopie, tailleTableau);
    copieTableau(tableau, tableauCopie, tailleTableau);
    printTabxApCopie(tableau, tableauCopie, tailleTableau);
    printf("\n");
    maximumTableau(tableau, tailleTableau, mettreValeurAZeroValeurMax);
    printMettreTableauValeurZeroMax(tableau, tailleTableau, mettreValeurAZeroValeurMax);
    printf("\n");
    printOrdonnerTableauxAv(tableau, tailleTableau);
    ordonnerTableau(tableau, tailleTableau);
    printf("\n");
    printOrdonnerTableauxAp(tableau, tailleTableau);

    return 0;
}