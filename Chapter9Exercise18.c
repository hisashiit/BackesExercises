/*18) Faça uma função que receba como parâmetro o valor de um
ângulo em graus e calcule o valor do seno desse ângulo
usando a sua respectiva série de Taylor:*/

#include <stdio.h>
#include <stdlib.h>
int fatorial (int number){
    int i = 1;
    int resultado = 1;
    while (i<=number){
        resultado = resultado*i; 
        i++;
    }
    //printf("Fatorial: '%d'\n",resultado); --> usado para debug
    return resultado;
};
float expoente (float angulo, int n){
    float constante = angulo;
    int i = 1;
    while (i<n){
    angulo = angulo*constante;
    i++;
    }
    //printf("Exponencial: %.2f\n",angulo); --> usado para debug
    return angulo;
};
float sen(float angulo){
    while (angulo>2*3.14){
    angulo = angulo - 2*3.14;
    }
    int i = 1;
    float resultado = angulo;
    while (i<=5){
        resultado = resultado + (expoente(-1,i))*expoente(angulo,2*i+1)/(fatorial(2*i+1));
        i++;
    }
    return resultado;

};
int main(){
    float angulo = (3.14*5/2+1.5)-1;
    printf("O seno do angulo '%.3f' = '%.3f'",angulo,sen(angulo));


    return 0;
}