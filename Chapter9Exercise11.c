/*11) Escreva uma função que receba por parâmetros dois valores
inteiros x e y e calcule e retorne o resultado de x elevado a y para o
programa principal. Não use nenhuma função pronta para
isso.*/

#include <stdio.h>
#include <stdlib.h>
int elevado(int x, int y){
    int i = 1;
    int resultado=x;
    while (i<y){
    resultado = resultado*x;
    i++;
    }
    return resultado;
};
int main(){
    int x,y;
    printf("Escreva o numero 'x' elevado a 'y': ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("O resultado de 'x' elevado a 'y': '%d'",elevado(x,y));

    return 0;
}