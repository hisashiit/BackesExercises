/*11) Escreva uma função recursiva que receba um valor inteiro e o
retorne invertido. Exemplo:
Número lido = 123.
Número retornado = 321.*/

//resolucao com caracteres e sem utilizar int -- nao é muito boa
// tambem nao se utilizou funcao

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[50] = "53252363474558374";
    char c[50];
    int i = 0;
    int count = 0;
    char b = '\0';
    while (a[i]!=b){
        count = count + 1;
        i++;
    }
    printf("Numero de letras: '%d'",count);
    i = 0;
    int j = count-1;
    printf("\n");
    while (i<count){
        c[i] = a[j];
        i++;
        j--;
    }
    i = 0;
    while (i<count){
    printf("%c",c[i]);
    i++;
    }
    return 0;
}