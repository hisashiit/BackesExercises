#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Leia uma string e imprima na tela:
    char str[100];
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    printf("A string digitada foi '%s'",str);





    return 0;
}