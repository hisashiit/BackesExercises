/*14) Crie uma enumeração representando os itens de uma lista de compras.
Agora, escreva um programa que leia um valor inteiro do teclado e exiba o
nome do item comprado e o seu preço.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum listaDeCompras {tomate=1, batata, feijao, arroz, cenoura, abacate, abacaxi, salmao, tilapia};
int main(){
    int valorLido;
    while (valorLido<1 || valorLido>9){
        printf("Escreva o valor de 1 a 9: ");
        scanf("%d",&valorLido);
        if (valorLido<1 || valorLido>9){
            printf("Valor fora do intervalo permitido\n");
        }
    }

    if (valorLido == tomate){
        printf("Tomate");
    }
    if (valorLido == batata){
        printf("batata");
    }
    if (valorLido == feijao){
        printf("feijao");
    }
    if (valorLido == arroz){
        printf("arroz");
    }
    if (valorLido == cenoura){
        printf("cenoura");
    }
    if (valorLido == abacate){
        printf("abacate");
    }
    if (valorLido == abacaxi){
        printf("abacaxi");
    }
    if (valorLido == salmao){
        printf("salmao");
    }
    if (valorLido == tilapia){
        printf("tilapia");
    }
    return 0;
}