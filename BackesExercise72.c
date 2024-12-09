#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Leia uma stirng e imprima as 4 primeiras letras dela
    char str[100];
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    int i = 0;
    while (i<4){
    printf("%c",str[i]);
    i++;
    }




    return 0;
}