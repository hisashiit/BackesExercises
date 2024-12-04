#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    int leitor;
    float media;
    printf("Digite:\t(1) Geometrica\t(2) Ponderada\t(3) Harmonica\t(4) Aritmetica ");
    scanf("%d",&leitor);
    printf("Escreva tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (leitor == 1){
    media = a*b*c;
    printf("A media geometrica: %f",media);
    }
    if (leitor == 2){
    media = (a+2*b+3*c)/6.0;
    printf("A media ponderada: %f",media);
    }
    if (leitor == 3){
    media = 1/((1.0/a)+(1.0/b)+(1.0/c));
    printf("A media harmonica: %f",media);
    }
    if (leitor == 4){
    media = (a+b+c)/3.0;
    printf("A media aritmetica: %f",media);
    }
    return 0;
}