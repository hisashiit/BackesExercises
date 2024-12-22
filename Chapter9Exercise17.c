/*17) Faça uma função que receba um inteiro N como parâmetro.
Calcule e retorne o resultado da seguinte série S:*/

#include <stdio.h>
#include <stdlib.h>
float resultadoSerio(int N){
    int i = 1;
    float soma = 0.0;
    while (i<=N){
        soma = soma+(i*i+1.0)/(i+3.0);
        i++;
    }
    return soma;
}
int main(){
    int number;
    printf("Informe um numero para calculo da serie: ");
    scanf("%d",&number);
    printf("O resultado da soma da serie eh '%.4f'",resultadoSerio(number));
    return 0;
}