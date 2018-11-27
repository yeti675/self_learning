#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numbers(int nombre);

int main(int ac, char  **av) {

    const int MAX = 100, MIN = 1;
    int nombreMystere = 0;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    int nombreEntree = 0, nombre = 0;

    printf("\n===== Bienvenue dans le jeux du plus ou moins =====\n");

    do {

            nombreEntree = numbers(nombre);

            if (nombreEntree > nombreMystere) {
            printf("C'est plus petit !\n");
            }
            else if (nombreEntree < nombreMystere) {
            printf("C'est plus grand !\n");
            }
            else {
            printf("\nBRAVO Vous avez trouver le nombre mystere\n\n");
            }
            
        } while (nombreEntree != nombreMystere);
        

    return 0;
}

int numbers(int nombre) {  

    printf("\nEntrer un nombre\n");
    scanf("%d", &nombre);

    return nombre;
}





