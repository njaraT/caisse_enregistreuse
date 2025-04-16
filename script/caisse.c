#include <stdio.h>
#include <stdbool.h>

int stocks[] = {10,10,10,10,10,10,10,10,10,10,10,10,10,10};

bool rendre_avec_stock(double montant) {
    int coupures[] = {2000,1000,500,200,100,50,25,20,10,5,1,50,20,5};
    
    for(int i = 0; i < 14; i++) {
        while(montant >= coupures[i] && stocks[i] > 0) {
            printf("1 x Rs%d\n", coupures[i]);
            montant -= coupures[i];
            stocks[i]--;
        }
    }
    return montant < 0.01;
}

int main() {
    double a_payer = 115.50;
    double donne = 200;
    
    if(!rendre_avec_stock(donne - a_payer)) {
        printf("Stock insuffisant!\n");
    }
    return 0;
}
