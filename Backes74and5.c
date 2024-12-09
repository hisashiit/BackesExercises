/*4) Faça um programa que leia uma string e a imprima de trás para a frente.
5) Faça um programa que leia uma string e a inverta. A string invertida deve
ser armazenada na mesma variável. Em seguida, imprima a string
invertida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    printf("A string digitada foi: %s",str);
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
    char str2[100];
    printf("\n");
    printf("A string digitada ao contrario: ");
    i = 0;
    while(i<count+1){
        printf("%c",str[count-i]);
        str2[i] = str[count-i];
        i++;
    }
    str2[i] = '\0';
    printf("\n");
    printf("Numero de letras na string: %d",count);
    printf("\nA string invertida: %s",str2);
    return 0;
}