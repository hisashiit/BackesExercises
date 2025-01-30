/*7) Faça uma função que retorne o ponteiro para um vetor de N elementos
inteiros alocados dinamicamente. O array deve ser preenchido com valores
de 0 a N − 1.*/

#include <stdio.h>
#include <stdlib.h>
int *retornePonteiro(int N){
    int *p= malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
        p[i] = i*2;
    }
    return p;
}
int main(){
    int N;
    printf("Quantos elementos vc quer alocar? ");
    scanf("%d",&N);
    int *p = retornePonteiro(N);
    for (int i=0;i<N;i++){
        printf("%d\t",p[i]);
    }
    
    free(p);
    return 0;
}