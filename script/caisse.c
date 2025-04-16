#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    double APayer = (rand() % 10000) / 100.0;
    double ADonne;

    printf("Montant à payer: Rs%.2f\n", APayer);

    do {
        printf("Entrez le montant donné: Rs");
        scanf("%lf", &ADonne);

        if(ADonne < APayer) {
            printf("Montant insuffisant! Veuillez donner au moins Rs%.2f\n", APayer);
        }
    } while(ADonne < APayer);

    printf("Votre Monnaie : Rs%.2f\n", ADonne - APayer);
    return 0;
}
