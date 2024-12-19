#include <stdio.h>
#include <stdlib.h>
/*1) Implemente um programa que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na
tela os dados da estrutura lida.*/
struct pessoa{
    char nome[50];
    int idade;
    char endereco[50];
};
int main(){
    struct pessoa p[5];
    int i = 0;
    int d;
    while (i<5){
    printf("Nome: ");
    fgets(p[i].nome,100,stdin);
    printf("Idade: ");
    scanf("%d",&p[i].idade);
    while ((d = getchar()) != '\n' && d != EOF);
    printf("Endereco: ");
    fgets(p[i].endereco,100,stdin);
    i++;
    }
    i = 0;
    while (i<5){
    printf("Nome: %s",p[i].nome);
    printf("Idade: '%d'\nEndereco: %s",p[i].idade,p[i].endereco);
    printf("\n");
    i++;
    }

    return 0;
}