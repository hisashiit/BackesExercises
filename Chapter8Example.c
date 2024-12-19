#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(){
    struct cadastro c;
    printf("Qual o nome: ");
    fgets(c.nome,100,stdin);
    printf("Qual a sua idade: ");
    scanf("%d",&c.idade);
    int d;
    while ((d = getchar()) != '\n' && d != EOF); //limpando buffer
    printf("Qual o nome da rua: ");
    fgets(c.rua,100,stdin);
    printf("Qual o numero: ");
    scanf("%d", &c.numero);
    struct cadastro ca = {"Carlos",18,"Avenida Brasil",1082};
    struct cadastro c1 = {"Carlos",18};
    struct cadastro k1,k2,k3,k4;
    struct cadastro k[4];
    int i = 0;
    while (i<4){
        printf("Nome: ");
        scanf("%s",&k[i].nome);
        printf("Idade: ");
        scanf("%d",&k[i].idade);
        i++;
    }
    i = 0;
    while (i<4){
    printf("Nome: '%s'\t",k[i].nome);
    printf("Idade: '%d'\n",k[i].idade);
    i++;
    }
    return 0;
}