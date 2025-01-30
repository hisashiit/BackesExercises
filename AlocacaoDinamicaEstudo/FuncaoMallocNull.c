#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int *) malloc (100000*sizeof(int));
    int i;
    if (p==NULL){
        printf("Erro: Memoria insuficiente");
        exit(1);
    }
    for (i=0;i<5;i++){
        printf("Digite o valor da posicao %d: ",i);
        scanf("%d",&p[i]);
        
    }
    return 0;
}