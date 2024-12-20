/*8) Elabore uma função para verificar se um número é um
quadrado perfeito. Um quadrado perfeito é um número inteiro
não negativo que pode ser expresso como o quadrado de outro
número inteiro. Exemplos: 1, 4, 9.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void quadradoPerfeito(int x){
    if (x<0){
        printf("O numero informado eh negativo");
    }
    else{
        if (sqrt(x)*sqrt(x)==x){
            printf("'%d' eh um quadrado perfeito %.2f",x,sqrt(x));
        }
        else{
            printf("'%d' nao eh um quadrado perfeito %.2f", x, sqrt(x));
        }
    }
};
int main(){
    int number;
    printf("Escreva um numero: ");
    scanf("%d",&number);
    quadradoPerfeito(number);


    return 0;
}