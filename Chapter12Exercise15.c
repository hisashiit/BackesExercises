/*15) Escreva uma função que receba como parâmetro dois vetores, A e B, de
tamanho N cada. A função deve retornar o ponteiro para um vetor C de
tamanho N alocado dinamicamente, em que C[i] = A[i] * B[i].*/
#include <stdio.h>
#include <stdlib.h>
int *pointauro(int *v, int *u, int N){
    int *p = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        p[i] = v[i]*u[i];
    }
    return p;
}
int main(){
    int N, *u, *v, *p;
    printf("Entre com o valor de 'N': ");
    scanf("%d",&N);
    u = malloc(N*sizeof(int));
    v = malloc(N*sizeof(int));
    p = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        u[i] = i;
    }
    for (int i=0;i<N;i++){
        v[i] = i;
    }
    p = pointauro(v,u,N);
    for (int i=0;i<N;i++){
        printf("%d\t",p[i]);
    }

    return 0;
}