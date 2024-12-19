/*9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o
nome do atleta, seu esporte, idade e altura. Agora, escreva um programa
que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais
alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};



int main(){
    struct atleta atletas[5];
    struct atleta atletatroca;
    int i,j;
    int trocaIdade;
    i = 0;
    char c;
    while (i<5){
    printf("Digite nome: ");
    fgets(atletas[i].nome,50,stdin);
    printf("Digite esporte: ");
    fgets(atletas[i].esporte,50,stdin);
    printf("Digite idade: ");
    scanf("%d",&atletas[i].idade);
    printf("Digite altura: ");
    scanf("%f",&atletas[i].altura);
    while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
    i++;
    }
    i=0;
    j = 1;
    while (i<5){
        while (j<5){
            if (atletas[i].idade < atletas[j].idade){
                strcpy(atletatroca.nome,atletas[i].nome);
                strcpy(atletatroca.esporte,atletas[i].esporte);
                atletatroca.idade = atletas[i].idade;
                atletatroca.altura = atletas[i].altura;

                strcpy(atletas[i].nome,atletas[j].nome);
                strcpy(atletas[i].esporte,atletas[j].esporte);
                atletas[i].idade = atletas[j].idade;
                atletas[i].altura = atletas[j].altura;

                strcpy(atletas[j].nome,atletatroca.nome);
                strcpy(atletas[j].esporte,atletatroca.esporte);
                atletas[j].idade = atletatroca.idade;
                atletas[j].altura = atletatroca.altura;
            }
            j++;
        }
        i++;
        j=i+1;
    }
    printf("----------------Atleta mais velho:\nNomeAtleta: %sEsporteAtleta: %sAtletaIdade: %d\nAtletaAltura: '%.2f'",atletas[0].nome,atletas[0].esporte,atletas[0].idade,atletas[0].altura);
    i = 0;
    j = 1;
    while (i<5){
        while (j<5){
            if (atletas[i].altura < atletas[j].altura){
                strcpy(atletatroca.nome,atletas[i].nome);
                strcpy(atletatroca.esporte,atletas[i].esporte);
                atletatroca.idade = atletas[i].idade;
                atletatroca.altura = atletas[i].altura;

                strcpy(atletas[i].nome,atletas[j].nome);
                strcpy(atletas[i].esporte,atletas[j].esporte);
                atletas[i].idade = atletas[j].idade;
                atletas[i].altura = atletas[j].altura;

                strcpy(atletas[j].nome,atletatroca.nome);
                strcpy(atletas[j].esporte,atletatroca.esporte);
                atletas[j].idade = atletatroca.idade;
                atletas[j].altura = atletatroca.altura;
            }
            j++;
        }
        i++;
        j=i+1;
    }
    printf("\n-----------Atleta com maior altura:\nNomeAtleta: %sEsporteAtleta: %sAtletaIdade: %d\nAtletaAltura: '%.2f'",atletas[0].nome,atletas[0].esporte,atletas[0].idade,atletas[0].altura);

    return 0;
}