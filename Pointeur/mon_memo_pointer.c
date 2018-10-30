#include <stdio.h>
#include <stdlib.h>

void mesureAndAge(int *ptrMesure, int *ptrAge);

int main(int argc, char const *argv[])
{
    int age, mesure;

    int *ptrAge = &age;
    int *ptrMesure = &mesure;

    int **ptrSurPtrSurAge = &ptrAge;

    mesureAndAge(&mesure, &age);

    printf("\nla personne mesure %d cm et as : %d ans\n\n", *ptrMesure, *ptrAge);

    printf("VARIABLES adresse et valeurs :\n\n");

    printf("&mesure : Affiche l adresse de mesure : %p\n", &mesure);
    printf("&age : Affiche l adresse de age : %p\n\n", &age);

    printf("mesure : Affiche la valeur de mesure : %d\n", mesure);
    printf("age : Affiche la valeur de age : %d\n\n", age);

    printf("POINTEURS adresse, valeurs, dereferencement :\n\n");

    printf("&ptrMesure : Affiche l adresse de ptrMesure : %p\n", &ptrMesure);
    printf("&ptrAge : Affiche l adresse de ptrAge : %p\n\n", &ptrAge);

    printf("ptrMesure : Affiche la valeur de ptrMesure : %p\n", ptrMesure);
    printf("ptrAge : Affiche la valeur de ptrAge : %p\n\n", ptrAge);

    printf("*ptrMesure : Affiche le dereferencement (donnee pointee) de ptrMesure : %d\n", *ptrMesure);
    printf("*ptrAge : Affiche le dereferencement (donnee pointee) de ptrAge : %d\n\n", *ptrAge);



printf("POINTEUR SUR POINTEUR\n\n");

    printf("&ptrSurPtrAge : Affiche l adresse de ptrSurPtrSurAge : %p\n", &ptrSurPtrSurAge);

    printf("ptrSurPtrAge : Affiche la valeur de ptrSurPtrSurAge : %p\n", ptrSurPtrSurAge);

    printf("**ptrSurPtrAge : Affiche le dereferencement (donnee pointee) ptrSurPtrSurAge : %d\n\n", **ptrSurPtrSurAge);

    return 0;
}

void mesureAndAge(int *ptrMesure, int *ptrAge)
{
    *ptrMesure = 180;
    *ptrAge = 27;
}