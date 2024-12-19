/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a
distância entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto {
    float px;
    float py;
};
int main(){
    struct ponto p[2];
    float distancia;
    int i = 0;
    while (i<2){
    printf("Digite a coordenada do ponto '%d' x: ", i);
    scanf("%f",&p[i].px);
    printf("Digite a coordenada do ponto '%d' y: ", i);
    scanf("%f",&p[i].py);
    i++;
    }
    distancia = sqrt( (p[0].px-p[1].px)*(p[0].px-p[1].px) + (p[0].py-p[1].py)*(p[0].py-p[1].py));
    printf("A distancia do ponto '%.2f','%.2f' ao ponto '%.2f','%.2f' = '%.2f'",p[0].px,p[0].py,p[1].px,p[1].py,distancia);

}