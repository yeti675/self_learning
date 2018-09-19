#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int resultat = 0, n1 = 0, n2 = 0, n3 = 0;

    printf("Entrez le nombre 1 : ");
        scanf("%d",&n1);
    n1++;

    printf("Entrez le nombre 2 : ");
        scanf("%d",&n2);
    n2--;

    printf("Entrez le nombre 3 : ");
        scanf("%d",&n3);

    resultat = n1 + n2 + n3;
        printf("%d + %d + %d = %d" ,n1,n2,n3,resultat);

    return 0;
}
