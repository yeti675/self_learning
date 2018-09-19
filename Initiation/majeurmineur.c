#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    int age = 0;

     printf("Quelle age avez vous ");
     scanf ("%d", &age);

    if(age >= 18)
    {
        printf("Vous etes majeur");
    }
    else if (age < 5)
    {
        printf("Vous etes un gamin pas touche au PC");
    }
    else
    {
        printf("Vous etes mineur");
    }

    return 0;
}
