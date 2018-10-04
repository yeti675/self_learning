#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char const *argv[])
{
    int nombreMystere = 0;
    int nombreChoisi = 0;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));                                                          //génération du nombre aléatoire donnée exos
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Bonjour, nous allons jouer as un jeux aujourd'hui\n");
    printf("Je vais tirer un nombre entre 1 et 100, a vous de devinez lequel.\n");

    do
    {

        printf("Choisissez un nombre ?\n");
        scanf("%d",&nombreChoisi);

        if (nombreChoisi < nombreMystere)
            printf("c'est plus grand\n");
        else if (nombreChoisi > nombreMystere)
            printf("c'est plus petit\n");
        else
            printf("FELICITATION VOUS AVEZ TROUVER LE NOMBRRE MYSTERE!!\n");

    }while (nombreChoisi != nombreMystere);

        return 0;
}
