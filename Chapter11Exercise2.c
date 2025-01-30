/*2) Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas
de três provas. Escreva um programa que mostre o tamanho em byte dessa
estrutura*/

#include <stdio.h>
#include <stdlib.h>
struct aluno{
    int num;
    char nome[50];
    double notas[3];
};
int main(){
    struct aluno aluno1;
    printf("%d\n",sizeof(aluno1));
    printf("%d",sizeof(int)+50*sizeof(char)+3*sizeof(double));
    return 0;
}