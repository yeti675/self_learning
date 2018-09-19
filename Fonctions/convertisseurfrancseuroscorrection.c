#include <stdio.h>
#include <stdlib.h>

void choiceOfConversionType();
double conversionEurosToFrancs(double euros);
double conversionFrancsToEuros(double francs);
void printAmountAfterConvert(double amoutAfterConvert);
void call(char* name, char* name1, int age);
double convert(int cho, double am);

int main(int ac, char **av) {
    choiceOfConversionType();
    
    call("Thomas", "Dutru", 28);
    
    return 0;
}

void call(char* name, char* name1, int age) {
    printf("%s %s %d\n", name, name1, age);
}

void choiceOfConversionType() {
    int choice = 0;
    double amount = 0, amountAfterConvert = 0;
    
    printf("Choix de la conversion\n 1. Euros en Francs\n 2. Francs en Euros\n");
    
    scanf("%d", &choice);
    
    if (choice != 1 && choice != 2) {
        printf ("Choix incorrect\n");
        return; // pour quitter apres faux ...
    } else {
        printf("Entrer le montant\n");
        scanf("%lf", &amount);
        
        if (choice == 1) {
            amountAfterConvert = conversionEurosToFrancs(amount);
        } else if (choice == 2) {
            amountAfterConvert = conversionFrancsToEuros(amount);
        }
        //amountAfterConvert = convert(choice, amount);

        printAmountAfterConvert(amountAfterConvert);
        //printAmountAfterConvert(convert(choice, amount));
    }
}

double convert(int cho, double am) {
    
    if (cho == 1) {
        return conversionEurosToFrancs(am);
    } else if (cho == 2) {
        return conversionFrancsToEuros(am);
    }
    //return cho == 1 ? conversionEurosToFrancs(am) : conversionFrancsToEuros(am); ternaire
}

double conversionEurosToFrancs(double euros) {
    return euros * 6.55957;
}

double conversionFrancsToEuros(double francs) {
    return francs / 6.55957;
}

void printAmountAfterConvert(double amoutAfterConvert) {
    printf("La conversion = %lf\n", amoutAfterConvert);
}

