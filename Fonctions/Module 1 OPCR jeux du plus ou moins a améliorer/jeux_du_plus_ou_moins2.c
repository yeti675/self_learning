#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Amélioration a effectuer :
-- Compteur de coup pour savoir en combien de coup le joueur a trouver le nombre
-- Choix de difficulté (1-100;1-1000;1-10000).
*/

/* A Corriger :
-- Pas de nouveau nombre quand on refait une partie, random a revoir ou boucle
*/

int numbers(int nombre); // Demmande le nombre que le joueur veut rentrer.
int newGame(int choice); // Demmande au joueur si il veut refaire une partie.

int main(int ac, char  **av) {

    const int MAX = 100, MIN = 1;
    int nombreMystere = 0;

    srand(time(NULL));  // generateur aleatoire de nombre
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    int nombreEntree = 0, nombre = 0, choice = 0, new = 0;

    printf("\n===== Bienvenue dans le jeux du plus ou moins =====\n");

do {
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
        
    choice = newGame(new);

        } while (choice != 2);
    
    printf("===== MERCI AU REVOIR =====\n");

    return 0;
}

int numbers(int nombre) {  

    printf("\nEntrer un nombre\n");
    scanf("%d", &nombre);

    return nombre;
}

int newGame(int choice) {

    printf("Voulez vous faire une autre partie ?\n");
    printf("1. OUI  2. NON\n");
    scanf("%d", &choice);

    return choice;
}



