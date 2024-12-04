/*13) Faça um programa que exiba a soma de todos os números
naturais abaixo de 1.000 que são múltiplos de 3 ou 5.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int soma=0;
    int number = 1000;
    int i = 1;
    int count = 0;

    while (i<=number){
        if (i%3 == 0 || i%5 == 0)
        {
            if (count%20==0){printf("\n");}
            printf("%d\t",i);
            soma = i + soma;
            count = count + 1;
        }
    i++;
    }
    printf("\nSoma dos termos: '%d'", soma);

    return 0;
}