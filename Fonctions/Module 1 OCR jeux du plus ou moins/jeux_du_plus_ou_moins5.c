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

void welcome(); // Message de bienvenue
int numbers(int nombre); // Demmande le nombre que le joueur veut rentrer.
int newGame(int choice); // Demmande au joueur si il veut refaire une partie.
void moreOrLess(); // Compare nombre mystere et nombre entrer
void bye(); // Message de fin

int main(int ac, char  **av) {

    srand(time(NULL));  // Fct generateur aleatoire de nombre
    welcome();     
    moreOrLess();
    bye();

    return 0;
}

void welcome() {

     printf("\n===== Bienvenue dans le jeux du plus ou moins =====\n\n");
     printf("Je vais tirer un nombre entre 1 et 100 a vous de deviner lequel ?\n\n");
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

    if (choice == 1) {

        moreOrLess();
    }

    return 0;   
}

void moreOrLess() {

    int nombreMystere = 0, nombreEntree = 0, nombre = 0, compteur = 1, choice = 0, new = 0; // je pense que new es useless
    const int MAX = 100, MIN = 1;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;   // generateur aleatoire de nombre

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

    choice = newGame(new);
}

void bye() {

    printf("===== MERCI AU REVOIR =====\n\n");
}

