/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
distância dele até a origem das coordenadas, isto é, a posição (0,0).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct plano {
    float px;
    float py;
    float distancia;
};
int main(){
    struct plano alfa;
    printf("Digite a coordenada x: ");
    scanf("%f",&alfa.px);
    printf("Digite a coordenada y: ");
    scanf("%f",&alfa.py);
    alfa.distancia = sqrt(alfa.py*alfa.py + alfa.px*alfa.px);
    printf("A distancia da origem ate a posicao (%.2f,%.2f) = '%.2f'",alfa.px,alfa.py,alfa.distancia);

}