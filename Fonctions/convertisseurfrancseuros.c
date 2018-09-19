#include <stdio.h>
#include <stdlib.h>

double conversionEurosToFrancs(double euros);
double conversionFrancsToEuros(double francs);
void choiceOfConversionType(); 
void printAmountAfterConvert(double amontAfterConvert);
/*void printAmountAfterConvertEurosToFrancs(double amount, double amountAfterConvert);
void printAmountAfterConvertFrancsToEuros(double amountAfterConvert);*/

int main(int ac, char **av) {

   choiceOfConversionType();

    return 0;
}
double conversionEurosToFrancs(double euros) {      
    return euros * 6.55957;
}
double conversionFrancsToEuros(double francs) {        
    return francs / 6.55957;
}
void choiceOfConversionType () {     

    int choice = 0;
    double amount = 0;
    double amontAfterConvert = 0;

    while (choice != 1 || choice != 2){ // BUG SI LETTRES BOUCLE INFINI

    printf("\nVeuillez choisir votre conversion\n\n 1. Euros en Francs\n 2. Francs en Euros\n");
    scanf("%d", &choice);
       
    if (choice != 1 && choice != 2){
        printf ("Choix incorrect, veuillez reessayer\n");        
    }
            
    else {
    printf("Entrer le montant\n");
    scanf("%lf", &amount);
            
        if (choice == 1){
            amontAfterConvert = conversionEurosToFrancs(amount); 
            //printAmountAfterConvertEurosToFrancs();
        }                  
        else if (choice == 2){ 
             amontAfterConvert = conversionFrancsToEuros(amount);
             //printAmountAfterConvertFrancsToEuros();
        }

        printAmountAfterConvert(amontAfterConvert);
        }
    } 
}      
    
void printAmountAfterConvert(double amoutAfterConvert) { 
    printf("conversion = %0.2lf\n", amoutAfterConvert);
}

/*void printAmountAfterConvertEurosToFrancs(double amount, double amountAfterConvert) {
    printf("%0.2lf Euros = %0.2lf Francs", amount, amountAfterConvert);
}
void printAmountAfterConvertFrancsToEuros(double amount, double amountAfterConvert) {
    printf("%0.2lf Francs = %0.2lf Euros", amount, amountAfterConvert);
}*/