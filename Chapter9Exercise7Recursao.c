/*7) Escreva uma função recursiva que receba por parâmetro dois
valores inteiros x e y e calcule e retorne o resultado de x**y para
o programa principal.*/

#include <stdio.h>
#include <stdlib.h>
int fatoracaoDe(int x, int y, int i){
    if (i==y-1){
        return x;
    }
    else{
        return x*fatoracaoDe(x,y,i+1);
    }
}
int main(){
    int x, y;
    printf("Qual o numero de 'x' que vc deseja elevar a 'y'?\nDigite 'x': ");
    scanf("%d",&x);
    printf("Digite 'y': ");
    scanf("%d",&y);
    printf("O resultado de x elevado a y: '%d'",fatoracaoDe(x,y,0));
    return 0;
}