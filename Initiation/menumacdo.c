#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ChoixMenu;
    printf(" == Bienvenue chez Mac do Thommy == \n\n");
    printf(" 1. Royal Cheese\n");
    printf(" 2. Mc Deluxe\n");
    printf(" 3. Mc Bacon\n");
    printf(" 4. Big Mac\n\n");
    printf(" == Votre choix ==\n");
    scanf("%d", &ChoixMenu);

    int accompagnement;
    printf(" == Choix accompagnement ==\n");
    printf(" 1. Frites\n 2. Potatoes\n");
    scanf("%d", &accompagnement);

    int sauce;
    printf("== Choix de votre sauce ==\n");
    printf(" 1. Ketchup\n 2. Mayonnaise\n");
    printf(" 3. sans sauce\n");
    scanf("%d", &sauce);

    switch (ChoixMenu)
    {
    case 1 :
        printf("Vous avez choisit le menu royal cheese ");
        break ;
    case 2 :
        printf("Vous avez choisit le menu Mc Deluxe ");
        break ;
    case 3 :
        printf("Vous avez choisi le menu Beacon ");
        break ;
    case 4 :
        printf("Vous avez choisi le menu Big Mac ");
        break ;
    default :
        printf("imbecile j'ai dit un chiffre entre 1 et 4 !! ");
        break ;

    printf("\n\n");
    }

    switch (accompagnement)
    {
    case 1 :
        printf(" avec frites");
        break ;
    case 2 :
        printf(" avec potatoes");
        break ;
    default :
        printf(" merci de ne pas taper nimporte quoi");
        break ;
    }

    switch (sauce)
    {
        case 1 :
            printf(" et sauce Ketchup\n");
            break ;
        case 2 :
            printf(" et Mayonnaise\n");
            break ;
        case 3 :
            printf(" sans sauce\n");
            break ;
        default :
            printf(" decidement vous êtes tetu !!\n");
            break ;
    }

    return 0;
}
