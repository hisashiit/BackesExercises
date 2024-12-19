/*12) Escreva um programa que leia o nome e o valor de determinada
mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é
de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o
nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago
à vista.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    float preco;
    printf("Nome da mercadoria: ");
    scanf("%s",str);
    printf("Valor da mercadoria: ");
    scanf("%f",&preco);
    printf("Nome da mercadoria '%s'\nValor total: '%.2f'\nValor do desconto '10 por cento'\nValor a ser pago a vista: '%.2f'",str,preco,preco*0.9);

    return 0;
}