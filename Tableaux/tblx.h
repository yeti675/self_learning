#ifndef TBLX_H_
#define TBLX_H_

#include <stdio.h>

int sommeTableau(int tableau[], int tailleTableau);
void parcoursEtPrintTableauAIndex(int tableau[], int tailleTableau);
void printResultatSommeTableau(int tableau[], int tailleTableau, int somme);
double moyenneTableau(int tableau[], int tailleTableau);
void printResultatMoyenneTableau(int tableau[], int tailleTableau, int moyenne);
void copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void printTabxAvCopie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void printTabxApCopie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);
void printMettreTableauValeurZeroMax(int tableau[], int tailleTableau, int valeurMax);
void ordonnerTableau(int tableau[], int tailleTableau);
void printOrdonnerTableauxAv(int tableau[], int tailleTableau);
void printOrdonnerTableauxAp(int tableau[], int tailleTableau);
void my_swap(int *a, int *b);

#endif /* TBLX_H_ */
