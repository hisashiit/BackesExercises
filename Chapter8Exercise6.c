/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas
de três provas. Agora, escreva um programa que leia os dados de cinco
alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas
do aluno que possui a maior média geral dentre os cinco.*/

#include <stdio.h>
#include <stdlib.h>
struct aluno {
    char matricula[50];
    char nome[50];
    float p1, p2, p3;
};
int main(){
    float media[5];
    struct aluno a[5];
    int i = 0;
    while (i<5){
        char c;
        printf("Matricula: ");
        fgets(a[i].matricula,50,stdin);
        printf("Nome: ");
        fgets(a[i].nome,50,stdin);
        printf("Prova 1: ");
        scanf("%f",&a[i].p1);
        printf("Prova 2: ");
        scanf("%f",&a[i].p2);
        printf("Prova 3: ");
        scanf("%f",&a[i].p3);
        while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
        media[i] = (a[i].p1 + a[i].p2 + a[i].p3)/3;
        i++;
    }
    i = 0;
    int j = 0;
    float maior = media[0];
    int index=0;
    while (i<5){
        if (maior<media[i]){
            index = i;
            maior = media[i];
        }
        i++;
    }

    i = 0;
    printf("O aluno que possui a maior nota\n");
    printf("Nome: %s\nNota 1: '%.2f'\nNota 2: '%.2f'\nNota 3: '%.2f'",a[index].nome,a[index].p1,a[index].p2,a[index].p3);


    return 0;
}