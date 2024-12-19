/*13) Escreva um programa que recebe uma string S e dois valores inteiros não
negativos i e j. Em seguida, imprima os caracteres contidos no segmento
que vai de i a j da string S.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    int n1, n2;
    int i = 0;
    int j = 0;
    printf("Escreva uma String: ");
    fgets(str,100,stdin);
    printf("Escreva o numero inicial: ");
    scanf("%d",&i);
    printf("Escreva o numero final: ");
    scanf("%d",&j);
    while (i<j){
    printf("%c",str[i]);
    i++;
    }
    return 0;
}