/*10) Escreva um programa que leia uma string do teclado e converta todos os
seus caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código
ASCII está entre 97 e 122.
11) Escreva um programa que leia uma string do teclado e converta todos os
seus caracteres em minúscula. Dica: some 32 dos caracteres cujo código
ASCII está entre 65 e 90.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    printf("Escreva um texto: ");
    fgets(str,100,stdin);
    int i = 0;
    int a = 1;
    int size = 0;
    char ch = 'a';
    while (a==1){
        ch = str[i];
        if (ch == '\n'){
            break;
        }
        if (ch>=97 && ch<=122){
            ch = ch-32;
        }
        str[i] = ch;
        size++;
        i++;
    }
    printf("%s",str);
    i = 0;
    while (a==1){
        ch = str[i];
        if (ch == '\n'){
            break;
        }
        if (ch>=65 && ch<=90){
            ch = ch+32;
        }
        str[i] = ch;
        size++;
        i++;
    }
    printf("%s",str);
    return 0;
}