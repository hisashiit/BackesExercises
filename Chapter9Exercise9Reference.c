/*9) Crie uma estrutura representando um aluno de uma
disciplina. Essa estrutura deve conter o número de matrícula
do aluno, seu nome e as notas de três provas. Agora, 'escreva
uma função que receba um vetor de tamanho N dessa
estrutura'. Essa função deve retornar o índice do aluno que
possui a maior média geral entre todos os alunos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno{
    char numeroMatricula[50];
    char nome[50];
    int nota[3];
};

int maiorMediaGeral(struct aluno *a, int n){
    int i = 0;
    int j = 0;
    int index = 0;
    double media[5];
    // Calculo das medias
    while (i<5){
        media[i] = 0;
        i++;
    }
    i = j = 0;
    while (i<5){
        while (j<3){
        media[i] = a[i].nota[j] + media[i];
        j=j+1;
        }
        media[i] = media[i]/3.0;
        j = 0;
        i++;
    }
    j = 1;
    i = 0;
    double maior = media[0];
    //Ache a maior media
    while (j<5){
        if (maior<media[j]){
            maior = media[j];
            index = j;
            }
        j++;
        }
    return index;
}
int main(){
    struct aluno alunos[5];
    strcpy(alunos[0].nome, "Paulo");
    strcpy(alunos[0].numeroMatricula, "11921EAR019");
    alunos[0].nota[0] = 52;
    alunos[0].nota[1] = 61;
    alunos[0].nota[2] = 91;
    strcpy(alunos[1].nome, "Amando");
    strcpy(alunos[1].numeroMatricula, "11921EAR012");
    alunos[1].nota[0] = 71;
    alunos[1].nota[1] = 81;
    alunos[1].nota[2] = 74;
    strcpy(alunos[2].nome, "Bonifacio");
    strcpy(alunos[2].numeroMatricula, "11921EAR014");
    alunos[2].nota[0] = 91;
    alunos[2].nota[1] = 51;
    alunos[2].nota[2] = 80;
    strcpy(alunos[3].nome, "Carlos");
    strcpy(alunos[3].numeroMatricula, "11921EAR002");
    alunos[3].nota[0] = 20;
    alunos[3].nota[1] = 91;
    alunos[3].nota[2] = 87;
    strcpy(alunos[4].nome, "Dado");
    strcpy(alunos[4].numeroMatricula, "11921EAR008");
    alunos[4].nota[0] = 91;
    alunos[4].nota[1] = 100;
    alunos[4].nota[2] = 60;

    printf("A maior media geral eh do aluno de indice '%d'",maiorMediaGeral(alunos,5));
    return 0;
}