#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Amélioration a effectuer :
ok -- laisser le choix de faire une autre partie.
OK -- Compteur de coup pour savoir en combien de coup le joueur a trouver le nombre
OK -- Choix de difficulté (1-100;1-1000;1-10000).
*/

/* A Corriger :
OK -- Pas de nouveau nombre quand on refait une partie, random a revoir ou boucle
ok -- le compteur de coup ne ce réinitialise pas apres une nouvelle partie.
-- problème scanf si on met une lettre par exemple = boucle infini.
ok -- ajouter la consigne du niveau choisi !!
ok -- changement coup(s) supprimé ou non le s en fonction du compteurs.
*/

void welcome();          // Message de bienvenue
int numbers(int nombre); // Demmande le nombre que le joueur veut rentrer.
void newGame();          // Demmande au joueur si il veut refaire une partie.
void moreOrLess();       // Compare nombre mystere et nombre entrer
void bye();              // Message de fin
int setLevel();          // choix de la difficulté
int displayDifficulty(int difficulty);
int displayNewGame(int choice);

int main(int ac, char **av)
{

    (void)ac;
    (void)av;

    srand(time(NULL)); // Fct generateur aleatoire de nombre
    welcome();
    moreOrLess();
    bye();
    return 0;
}

void welcome()
{

    printf("\n===== Bienvenue dans le jeux du plus ou moins =====\n\n");
}

int displayDifficulty(int difficulty)
{

    printf("Choisissez un niveau de difficulté.\n\n");
    printf("Niveau 1 : Entre 1 et 100.\nNiveau 2 : Entre 1 et 1000.\nNiveau 3 : Entre 1 et 10000.\n");
    scanf("%d", &difficulty);
    return difficulty;
}

int setLevel()
{

    int difficulty = 0, min = 1, nombreMystere = 0;

    difficulty = displayDifficulty(difficulty);

    while (difficulty < 1 || difficulty > 3)
    {

        printf("Choix incorrect réessayer\n\n");

        difficulty = displayDifficulty(difficulty);
    }

    if (difficulty == 1)
    {

        int max = 100;
        nombreMystere = (rand() % (max - min + 1)) + min; // generateur aleatoire de nombre
        printf("Je vais tirer un nombre entre 1 et %d, a vous de devinez lequel.\n", max);
    }

    else if (difficulty == 2)
    {

        int max = 1000;
        nombreMystere = (rand() % (max - min + 1)) + min; // generateur aleatoire de nombre
        printf("Je vais tirer un nombre entre 1 et %d, a vous de devinez lequel.\n", max);
    }

    else if (difficulty == 3)
    {
        int max = 10000;
        nombreMystere = (rand() % (max - min + 1)) + min; // generateur aleatoire de nombre
        printf("Je vais tirer un nombre entre 1 et %d, a vous de devinez lequel.\n", max);
    }
    return nombreMystere;
}

int numbers(int nombre)
{

    printf("Entrer un nombre ");
    scanf("%d", &nombre);

    return nombre;
}

int displayNewGame(int choice)
{
    printf("Voulez vous faire une autre partie ?\n");
    printf("1. OUI\n2. NON\n");
    scanf("%d", &choice);
    return choice;
}

void newGame()
{

    int choice = 0;
    choice = displayNewGame(choice);

    while (choice < 1 || choice > 2)
    {

        printf("Choix incorrect réessayer\n\n");
        choice = displayNewGame(choice);
    }

    if (choice == 1)
    {
        moreOrLess();
    }
}

void moreOrLess()
{

    int nombreEntree = 0, nombreMystere = 0, nombre = 0, compteur = 1;

    nombreMystere = setLevel();

    do
    {
        nombreEntree = numbers(nombre);

        if (nombreEntree > nombreMystere)
        {
            printf("C'est plus petit !\n");
        }
        else if (nombreEntree < nombreMystere)
        {
            printf("C'est plus grand !\n");
        }
        else
        {
            if (compteur > 1)
            {
                printf("\nBRAVO Vous avez trouver le nombre mystere en %d coups\n\n", compteur);
            }
            else
            {
                printf("\nBRAVO Vous avez trouver le nombre mystere en %d coup\n\n", compteur);
            }
        }

        compteur++;

    } while (nombreEntree != nombreMystere);

    newGame();
}

void bye()
{

    printf("===== MERCI AU REVOIR =====\n\n");
}