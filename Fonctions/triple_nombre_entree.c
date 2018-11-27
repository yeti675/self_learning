#include <stdio.h>
#include <stdlib.h>

int triple(int nombreEntre)
{
    return 3 * nombreEntre;
}

int main(int argc, char const *argv[])
{
    int nombreEntre = 0, nombreTriple = 0;
        printf("Entrez un nombre\n");
        scanf("%d", &nombreEntre);

    nombreTriple = triple(nombreEntre);
        printf("Le triple du nombre entre est %d\n",nombreTriple);

    return 0;
}