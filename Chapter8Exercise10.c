/*10) Usando a estrutura “atleta” do exercício anterior, escreva um programa
que leia os dados de cinco atletas e os exiba por ordem de idade, do mais
velho para o mais novo.*/

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
    i = 0;
    while (i<5){
    printf("NomeAtleta: %sEsporteAtleta: %sAtletaIdade: %d\nAtletaAltura: '%.2f'",atletas[i].nome,atletas[i].esporte,atletas[i].idade,atletas[i].altura);
    i++;
    }
    return 0;
}