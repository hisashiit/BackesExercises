/*12) Usando o comando switch, escreva um programa que leia um
inteiro entre 1 e 7 e imprima o dia da semana correspondente a
esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim
por diante.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int input;
    int i=1;
    while (i == 1){
    printf("Digite um numero: ");
    scanf("%d", &input);
    switch(input) {
        case 1: {
            printf("domingo");}
            break;
        case 2:{
            printf("segunda-feira");}
            break;
        case 3:{
            printf("terca-feira");}
            break;
        case 4:{
            printf("quarta-feira");}
            break;
        case 5: {
            printf("quinta-feira");}
            break;
        case 6:{
            printf("sexta-feira");}
            break;
        case 7:{
            printf("sabado");}
            break;
        default: printf("Digito errado da semana.\n");
    }
    printf("Digite 1 para continuar: ");
    scanf("%d", &i);
    }
    return 0;
}