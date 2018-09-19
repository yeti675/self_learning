#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NombresDeVies, AgeDuJoueur, Niveau;
    NombresDeVies = 5, AgeDuJoueur = 27, Niveau = 1;

    printf("Vous avez %d vies\n", NombresDeVies), printf("Vous avez %d ans\n", AgeDuJoueur), printf("Vous etes au niveau %d \n\n", Niveau);                //Ce que j'ai fais en réfléchissant par moi-meme.
    printf("=== BAM === Un troll saute et vous explose la geule a coup de masse\n\n");
    NombresDeVies = 4;
    printf("Vous venez de perdre une vie, il vous reste %d vies maintenant\n\n", NombresDeVies);

    printf("Ce que j'aurai du ecrire en realite : Vous avez %d vies, Vous avez %d ans, vous etes au niveau %d \n\n", NombresDeVies, AgeDuJoueur, Niveau);  // J'aurais du simplifier comme ça

    // je vais tenter par la suite de m'amuser avec toi ;) et le programme voyons voir

    printf("Je vais avoir besoin d'information pour continuer, quel age avez vous ?\n");
    scanf("%d", &AgeDuJoueur);
    printf("Ah cool vous avez %d ans comme moi !!\n\n",AgeDuJoueur);

    // Jour 2 : 09:00 - 10:25

    return 0;
}
