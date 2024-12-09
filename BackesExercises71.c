#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Leia uma string e imprima na tela:
    char str[100];
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    printf("A string digitada foi %s",str);
    int i = 0;
    int count = 0;
    char ca[1]="c";
    while (ca[0]!='\0'){
    ca[0] = str[i];
    if (ca[0] == '\n'){
        break;
    }
    count++;
    i++;
    }

    printf("Numero de letras na string: %d",count);



    return 0;
}