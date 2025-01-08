//Esvaziar um vaso contendo N flores
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void removeFlowers (int *n){
    if (*n == 0){
    }
    else{
        *n = *n - 1;  // Decrement the value pointed by n
        removeFlowers(n);
    }
}

int main(){
    int flores;
    flores = 10;
    removeFlowers(&flores);
    printf("Qtd de flores: '%d'",flores);

    return 0;
}

