//13) Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, deverá
//ser impresso “A”.
//14) Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.
//15) Escreva um programa que leia três variáveis: char, int e float. 
//Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. 
//Use um único comando printf() para cada operação de escrita das três variáveis.

#include <stdio.h>
#include <stdlib.h>
int main(){
    char c1;
    char c2, c3, c4;
    printf("escreva um caractere: ");
    scanf("%c", &c1);
    printf("'%c'",c1);

    printf("\nescreva tres caracteres: ");
    scanf(" %c %c %c", &c2, &c3, &c4);
    printf("%c\n%c\n%c", c2, c3, c4);

    char c5;
    int i1;
    float f1;
    printf("\nescreva tres tipos de variaveis char, int e float \n");
    scanf(" %c %d %f", &c5, &i1, &f1);
    printf("%c %d %f",c5,i1,f1); //separado por espacos
    printf("\n%c\n%d\n%f",c5,i1,f1); //uma em cada linha

    
    return 0;
}