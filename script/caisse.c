#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rendre_monnaie(double montant) 
{
    int coupures[] = {2000, 1000, 500, 200, 100, 50, 25, 20, 10, 5, 1, 50, 20, 5};
    int n = sizeof(coupures)/sizeof(coupures[0]);
    
    for(int i = 0; i < n; i++) 
    {
        if(montant <= 0) break;
        int valeur = coupures[i];
        if(montant >= valeur) {
            int nb = montant / valeur;
            printf("%d x Rs%d\n", nb, valeur);
            montant -= nb * valeur;
        }
    }
}

int main() 
{
    srand(time(NULL));
    double a_payer = (rand() % 10000) / 100.0;
    double donne;
    
    printf("À payer: Rs%.2f\n", a_payer);
    do {
        printf("Montant donné: Rs");
        scanf("%lf", &donne);
    } while(donne < a_payer);
    
    rendre_monnaie(donne - a_payer);
    return 0;
}
