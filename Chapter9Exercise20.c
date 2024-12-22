/*Faça uma função que calcule e retorne o número neperiano e,
e = 2,71828183, usando a série a seguir:
A função deve ter como parâmetro o número de
termos que serão somados, N. Note que quanto
maior esse número, mais próxima do valor e
estará a resposta.*/

#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){
    int i = 1;
    int resultado = 1;
    while (i<=n){
        resultado = resultado*i;
        i++;    
    }
    return resultado;
};

float neperiano(int n){
    int i = 1;
    float resultado = 1;
    while(i<=n){
        resultado = resultado + 1.0/(fatorial(i));
        //printf("Resultado: %.2f \n",resultado);
        i++;
    }
    return resultado;
}

int main(){

    int n = 10;
    printf("O valor de N = '%d' em neperiano: '%.2f'",n,neperiano(n));

    return 0;
}