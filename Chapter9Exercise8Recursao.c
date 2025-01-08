/*8) A multiplicação de dois números inteiros pode ser feita
através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2).
Crie uma função recursiva que calcule a multiplicação por
somas sucessivas de dois inteiros.*/

#include <stdio.h>
#include <stdlib.h>
int somaSucessiva(int x, int y, int i){
    if (i==y-1){
        return x;
    }
    else{
        return x+somaSucessiva(x,y,i+1);
    }
}
int main(){
    int x, y;
    printf("Escolha o numero 'x' que sera multiplicado por 'y': ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Resultado de '%d' multiplicado por '%d': '%d'",x,y,somaSucessiva(x,y,0));
    return 0;
}