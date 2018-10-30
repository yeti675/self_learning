#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Amélioration a effectuer :
OK -- Compteur de coup pour savoir en combien de coup le joueur a trouver le nombre
-- Choix de difficulté (1-100;1-1000;1-10000).
*/

/* A Corriger :
OK -- Pas de nouveau nombre quand on refait une partie, random a revoir ou boucle
ok -- le compteur de coup ne ce réinitialise pas apres une nouvelle partie.
-- problème scanf si on met une lettre par exemple boucle infini.
*/

int numbers(int nombre); // Demmande le nombre que le joueur veut rentrer.
int newGame(int choice); // Demmande au joueur si il veut refaire une partie.

int main(int ac, char  **av) {

    const int MAX = 100, MIN = 1;
    int nombreMystere = 0;

    srand(time(NULL));  // Fct generateur aleatoire de nombre

    int nombreEntree = 0, nombre = 0, choice = 0, new = 0;
    int compteur = 0;


    printf("\n===== Bienvenue dans le jeux du plus ou moins =====\n\n");

do {

    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;   // generateur aleatoire de nombre
    compteur = 1;

    do {

            nombreEntree = numbers(nombre);

            if (nombreEntree > nombreMystere) {
            printf("C'est plus petit !\n");
            }
            else if (nombreEntree < nombreMystere) {
            printf("C'est plus grand !\n");
            }
            else {
            printf("\nBRAVO Vous avez trouver le nombre mystere en %d coup(s)\n\n", compteur);
            }

            compteur ++;
            
        } while (nombreEntree != nombreMystere);

    //printf("En %d coup(s)\n\n", compteur);
        
    choice = newGame(new);

        } while (choice != 2);
    
    printf("===== MERCI AU REVOIR =====\n\n");

    return 0;
}

int numbers(int nombre) {  

    printf("Entrer un nombre ");
    scanf("%d", &nombre);

    return nombre;
}

int newGame(int choice) {

    printf("Voulez vous faire une autre partie ?\n");
    printf("1. OUI  2. NON\n");
    scanf("%d", &choice);

    return choice;
}



