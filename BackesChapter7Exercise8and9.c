/*8) Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da
primeira.
9) Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando quantas vezes a segunda string lida está contida
dentro da primeira.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    char digitado;
    printf("Escreva uma string 1: ");
    fgets(str1,100,stdin);
    printf("Escreva uma string 2: ");
    fgets(str2,100,stdin);
    printf("A string 1 digitada foi: %s",str1); //palavra grande
    printf("A string 2 digitada foi: %s",str2); //palavra menor (contida)
    int a = 1;
    int i = 0;
    int size = 0;
    char ba[1] = "f";
    while (a==1){
        ba[0] = str2[i];
        if (ba[0] == '\n'){
            break;
        }
        size++;
        i++;
    }
    printf("Size: %d\n",size);
    int count = 0;
    i = 0;
    int counpalavrainteira = 0;
    char ca[1]="c";
    int j = 0;
    while (a==1){
        ca[0]=str1[i];
        if (ca[0] == '\n'){
            break;
        }
        if (ca[0] == str2[j]){
            while (ca[0] == str2[j] && count < size){
                count++;
                i++;
                j++;
                ca[0] = str1[i];
            }
            j=0;
            if (count == size){
                counpalavrainteira = counpalavrainteira + 1;
                count = 0;
            }
            ca[0] = str1[i];
            count = 0;
            continue;
        }
        j=0;
        i++;
    }
    i=0;
    printf("A quantidade de palavras iguais: %d",counpalavrainteira);

    return 0;
}