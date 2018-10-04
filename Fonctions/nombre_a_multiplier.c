#include <stdio.h>
#include <stdlib.h>

double addition(double nombre1, double nombre2);
double triple(double nombre);

int main(int ac, char **av) {

    double nombre1 = 0;
    double nombre2 = 0;
    
    printf(" Nombre 1 = ");
    scanf("%lf", &nombre1);
    printf(" Nombre 2 = ");
    scanf("%lf", &nombre2);
    printf(" X3 ?\n");

    double resultat = addition(nombre1, nombre2);       // ne pas redéclarer une variable
    resultat = triple(resultat);
  
    printf(" Resultat = %0.2lf \n", resultat);

    return 0;
}

double addition(double nombre1, double nombre2) {

    double resultat = nombre1 + nombre2;

    return resultat;
}

double triple(double nombreAMultiplier) { // bien nommer les variable

    return nombreAMultiplier * 3;
}