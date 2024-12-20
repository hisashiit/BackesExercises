/*12) Crie uma enumeração representando os dias da semana. Agora, escreva
um programa que leia um valor inteiro do teclado e exiba o dia da semana
correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum diasDaSemana {Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};
int main (){
    int numero;
    enum diasDaSemana s1;
    s1 = 9;
    while (s1<0 || s1>7){
    printf("Escreva um valor inteiro entre 1 e 7: ");
    scanf("%d",&s1);
    if (s1<1 || s1>7){
        printf("O valor escolhido eh invalido\n");
    }
    }
    if (s1==Domingo){
        printf("Domingo");
    }
    if (s1==Segunda){
        printf("Segunda");
    }
    if (s1==Terca){
        printf("Terca");
    }
    if (s1==Quarta){
        printf("Quarta");
    }
    if (s1==Quinta){
        printf("Quinta");
    }
    if (s1==Sexta){
        printf("Sexta");
    }
    if (s1==Sabado){
        printf("Sabado");
    }
    return 0;
}