/*13) Escreva uma função que receba um número inteiro positivo n.
Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.*/

#include <stdio.h>
#include <stdlib.h>

int progressaoAritmetica(int n){
    int i = 1;
    int soma = 0;
    while (i<=n){
        soma = i+soma;
        i++;
    }
    return soma;
}
int main(){
    int number;
    printf("Qual o valor de n: ");
    scanf("%d",&number);
    printf("A soma de '1' ate '%d' eh igual a '%d'",number,progressaoAritmetica(number));

    return 0;
}