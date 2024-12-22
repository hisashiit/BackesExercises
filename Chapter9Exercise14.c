/*14) Escreva uma função que receba um número inteiro positivo n.
Calcule e retorne o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/

#include <stdio.h>
#include <stdlib.h>
int fatorial (int n){
    int resultado = 1;
    int i = 1;
    while (i<=n){
        resultado = i*resultado;
        i++;    
    }
    return resultado;
}

int main(){
    int number;
    printf("Escreva um numero positivo: ");
    scanf("%d",&number);
    printf("O resultado do fatorial de '%d' eh igual a '%d'",number,fatorial(number));

    return 0;
}