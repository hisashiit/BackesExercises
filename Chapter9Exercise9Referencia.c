/*9) Crie uma estrutura representando um aluno de uma
disciplina. Essa estrutura deve conter o número de matrícula
do aluno, seu nome e as notas de três provas. Agora, escreva
uma função que receba um vetor de tamanho N dessa
estrutura. Essa função deve retornar o índice do aluno que
possui a maior média geral entre todos os alunos.*/

#include <stdio.h>
#include <stdlib.h>


struct aluno {
    char matricula[50];
    char nome[50];
    double nota[3];
};

void maiorIndiceAluno(struct aluno *a, int n, int *ind, double *media){
    int i, j;
    i = j = 0;
    while (i<n){
    while (j<3){
        media[i] = media[i] + a[i].nota[j];
        j++;
    }
    media[i] = media[i]/3.0;
    j = 0;
    i++;
    }
    i=0;
    double maiorMedia = media[0];
    j = 1;
    while (i<n){
    while (j<n){
        if (maiorMedia<media[j]){
            maiorMedia = media[j];
            *ind = j;
        }
        j++;
    }
    i++;
    j = i +1;
    }
}
int main(){
    int indice=0;
    double media[10];
    struct aluno alunos[10];
    int i, j;
    int n = 10;
    i = j = 0;
    while (i<10){
    printf("Escreva a matricula do aluno '%d':",i+1);
    scanf("%s",alunos[i].matricula);
    printf("Escreva o nome do aluno '%d':",i+1);
    scanf("%s",alunos[i].nome);
    //fgets(alunos[i].matricula,100,stdin);
    printf("Escreva a nota da P1 do aluno '%d':",i+1);
    scanf("%lf",&alunos[i].nota[0]);
    printf("Escreva a nota da P2 do aluno '%d':",i+1);
    scanf("%lf",&alunos[i].nota[1]);
    printf("Escreva a nota da P3 do aluno '%d':",i+1);
    scanf("%lf",&alunos[i].nota[2]);
    i++;
    }
    i = 0;
    maiorIndiceAluno(alunos,n,&indice,media);
    printf("\n%-20s %-20s %-10s %-10s %-10s %-10s\n", "Nome do aluno", "Matricula", "P1", "P2", "P3", "Media");
    printf("-----------------------------------------------------------------------------\n");
    while (i < 10) {
        printf("%-20s %-20s %-10.2lf %-10.2lf %-10.2lf %-10.2lf\n", alunos[i].nome, alunos[i].matricula, alunos[i].nota[0], alunos[i].nota[1], alunos[i].nota[2], media[i]);
        i++;
    }

    printf("O indice que contem a maior media: '%d'", indice+1);
    return 0;
}