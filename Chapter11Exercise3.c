/*3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome,
a idade e o endereço de uma pessoa. Agora, escreva uma função que receba
um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N,
alocado dinamicamente, dessa estrutura. Solicite também que o usuário
digite os dados desse vetor dentro da função.*/

#include <stdio.h>
#include <stdlib.h>
int *funcaoP(int N){
    int *v;
    v = malloc(N*sizeof(int));
    for (int i=0;i<N;i++){
    printf("Digite os dados do vetor: ");
    scanf("%d",&v[i]);
    }
    return v;
}
struct Cadastro{
    char nome[50];
    int idade;
    char endereco[70];


};
int main(){
    int N;
    printf("Escreva um numero inteiro 'N': ");
    scanf("%d",&N);
    int *p = funcaoP(N);
    printf("O endereco do 'vetor criado': %p",p);
    printf("\n");
    for (int j=0;j<N;j++){
        printf("%d\t",p[j]);
    }

    return 0;
}