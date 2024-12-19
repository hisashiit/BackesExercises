/*15) Escreva um programa que leia duas strings e as imprima em ordem
alfabética, a ordem em que elas apareceriam em um dicionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char str2[100];
    printf("Digite string 1: ");
    fgets(str,100,stdin);
    printf("Digite string 2: ");
    fgets(str2,100,stdin);
    if (str[0]<str2[0]){
        printf("%s%s",str,str2);
    }
    else {
        printf("%s%s",str2,str);
    }
    return 0;
}