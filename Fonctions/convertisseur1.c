#include <stdio.h>
#include <stdlib.h>

double conversion(double euros)
{
    double francs = 0;
    
    francs = 6.55957 * euros;
    return francs;
}    

int main(int argc, char *argv[])
{    
    printf("saisir le montant a convertir");
    scanf("%d", &francs);
    printf("%d euros = %fF\n", conversion(%d));
    
    return 0;
}