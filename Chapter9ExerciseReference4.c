/*4) Escreva uma função que receba um array contendo a nota de
10 alunos e retorne a média dos alunos.*/

#include <stdio.h>
#include <stdlib.h>
void mediaA (double *nota,double *media){
    int i = 0;
    double soma = 0;
    while (i<10){
        soma = nota[i] + soma;
        i++;
    }
    *media = soma/10.0;
    
}
int main(){
    double nota[10] = {21,10,41,23,31,100,90,42,60,80};
    double media = 0;
    mediaA(nota,&media);
    printf("A media: '%lf'",media);
    return 0;
}