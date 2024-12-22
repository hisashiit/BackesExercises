/*Capitulo 9 Funcoes:- Questao 19 da pagina 305 no livro do Andre Backes 
19) Faça uma função que receba como parâmetro o valor de um
ângulo em graus e calcule o valor do cosseno desse ângulo
usando a sua respectiva série de Taylor: cos(x)
em que x é o valor do ângulo em radianos.*/


#include <stdio.h>
#include <stdlib.h>
float exponencial(float x,int n){
    int i = 0;
    float resultado=1;
    while (i<n){
        resultado = resultado*x;
        i++;
    }
    printf("Exponencial: %.2f\n",resultado);
    return resultado;
};

int fatorial(int n){
    int i = 1;
    int resultado = 1;
    while (i<=n){
        resultado = resultado*i;
        i++;    
    }
    printf("Fatorial: %d\n",resultado);
    return resultado;
};

float cosseno(float angulo){
    float resultado=1;
    int n = 1;
    while (n<=5){
        resultado = resultado + exponencial(-1,n)*exponencial(angulo,2*n)/(fatorial(2*n));
        printf("Resultado: '%.2f'\n",resultado);
        n++;
    }
    return resultado;
};
int main(){
    float angulo = 3.14;
    printf("O cosseno do angulo: '%.3f' = '%.3f'",angulo,cosseno(angulo));
    return 0;
}