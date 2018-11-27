#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *ptrheures, int *ptrminutes);

int main(int argc, char const *argv[]) {

    int heures = 0, minutes = 90;
    int *ptrheures = &heures;
    int *ptrminutes = &minutes;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes\n", *ptrheures, *ptrminutes);
    return 0;
}

void decoupeMinutes(int *ptrheures, int *ptrminutes) {


    *ptrheures = *ptrminutes / 60;
    *ptrminutes = *ptrminutes % 60;
}