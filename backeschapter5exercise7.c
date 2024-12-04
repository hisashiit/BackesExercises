/*7) Elabore um programa que peça ao usuário para digitar 10
valores. Some esses valores e apresente o resultado na tela.
8) Faça um programa que leia 10 inteiros e imprima sua média.
9) Escreva um programa que leia 10 números e escreva o menor
valor lido e o maior valor lido. --> Isso é ARRAY PORRA - Topico mais adiante
10) Faça um programa que leia 10 inteiros positivos, ignorando
não positivos, e imprima sua média.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int i = 0;
    int number, total=0;
    while (i<10){
        numeronegativo:
        printf("Digite o numero [%d]: ",i+1);
        scanf("%d", &number);
        if (number<0){
            printf("Numero negativo nao pode, boy\n");
            goto numeronegativo;
        }
        total = total + number;
        i++;
    }
    printf("\nA soma do conjunto numerico: %d",total);
    printf("\nA media do conjunto numerico: '%.2f'",total/10.0);

    return 0;
}