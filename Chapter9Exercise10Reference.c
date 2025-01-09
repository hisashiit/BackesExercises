/*10) Escreva uma função que receba uma string e retorne se ela é
um palíndromo (1) ou não (0). Um palíndromo é uma palavra
que tem a propriedade de poder ser lida tanto da direita para a
esquerda como da esquerda para a direita. Exemplos: ovo,
arara, rever, asa, osso etc.*/
#include <stdio.h>
#include <stdlib.h>
int countString(char *v, int n){
    int count = 0;
    char c = 'a';
    int i =0;
    while (i<n){
        c = v[i];
        if (c=='\0'){
            break;
        }
        i++;
        count++;
    }
    return count;
}
void palindromo(char *v, int count, int *resultado){
    *resultado = 1;
    int i = 0;
    int j = count-1;
    if (count%2==0){
    while (i<count/2){
    if (v[i] != v[j]) {
        *resultado = 0;
        break;
        }
    i++;
    j--;
    }
    }
    else{
       while (i<count/2){
    if (i==j){
        break;
    }
    if (v[i]!=v[j]){
        *resultado = 0;
        break;
    }
    i++;
    j--;
    }
    }
}

int main(){
    char array[50] = "Agioa";
    char arrayB[100] = "SemMedo";
    char arrayC[100] = "arara";
    char arrayD[100] = "rever";
    char arrayE[100] = "assa";
    char arrayF[100] = "apapai";
    int count = countString(array,50);
    printf("count 1: '%d'\n",count);
    int resultado = 1;
    int resultadoB = 1;
    int resultadoC = 1;
    int resultadoD = 1;
    int resultadoE = 1;
    int resultadoF = 1;
    palindromo(array,4,&resultado);
    palindromo(arrayB,7,&resultadoB);
    palindromo(arrayC,5,&resultadoC);
    palindromo(arrayD,5,&resultadoD);
    palindromo(arrayE,4,&resultadoE);
    palindromo(arrayF,6,&resultadoF);
    printf("Os resultados de 1: '%d' '%d' '%d' '%d' '%d' %d'",resultado,resultadoB,resultadoC,resultadoD, resultadoE, resultadoF);
    char arrayTeste[50];
    printf("Digite uma palavra: ");
    scanf("%s",&arrayTeste);
    count = countString(arrayTeste,50);
    printf("count da palavra '%d'",count);
    palindromo(arrayTeste,count,&resultado);
    printf("Essa palavra eh '%d'", resultado);
    return 0;
}