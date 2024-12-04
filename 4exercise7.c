/*7) Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o 'valor' e o 'estado de destino do produto' e o programa
retorne o 'preço final do produto acrescido do imposto do
estado em que ele será vendido'. Se o estado digitado não for
válido, mostrará uma mensagem de erro.*/
//MG 7, SP 12, RJ 15, MS 8
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor;
    char estado[2];
    printf("Digite o 'valor do produto' e o 'estado de destino do produto': ");
    scanf("%f",&valor);
    scanf("%s",estado);
    if (estado[0] =='M' && estado[1] == 'G'){
        valor = valor*1.07;
    }
    if (estado[0]=='S' && estado[1]=='P'){
        valor = valor*1.12;
    }
    if (estado[0]=='R' && estado[1]=='J'){
        valor = valor*1.15;
    }
    if (estado[0]=='M' && estado[1]=='S'){
        valor = valor*1.08;
    }
    printf("\nO valor do produto eh: %f", valor);

    return 0;
}
