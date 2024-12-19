/*8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de
uma pessoa. Agora, escreva um programa que leia os dados de seis
pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dataNascimento{
    int dia;
    int mes;
    int ano;
};
struct pessoa{
    struct dataNascimento data;
    char nome[50];
};
struct pessoatroca{
    struct dataNascimento data;
    char nome[50];
};
int main(){
    struct pessoa p[6];
    struct pessoatroca pt;
    int i = 0;
    char c;
    while (i<6){
    printf("Nome da pessoa: ");
    fgets(p[i].nome,50,stdin);
    printf("Digite o dia de nascimento: ");
    scanf("%d",&p[i].data.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d",&p[i].data.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d",&p[i].data.ano);
    while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
    i++;
    } 
    i =0;
    int j = 1;
    while (i<6){
        while(j<6){
        if (p[i].data.ano==p[j].data.ano){
            if (p[i].data.mes==p[j].data.mes){
                if (p[i].data.dia<p[j].data.dia){
                //armazena no pt
                pt.data.ano=p[i].data.ano;
                pt.data.dia=p[i].data.dia;
                pt.data.mes=p[i].data.mes;
                strcpy(pt.nome,p[i].nome);
                //mudando o p[i]
                p[i].data.ano=p[j].data.ano;
                p[i].data.dia=p[j].data.dia;
                p[i].data.mes=p[j].data.mes;
                strcpy(p[i].nome,p[j].nome);
                //mudando o p[j]
                p[j].data.ano=pt.data.ano;
                p[j].data.dia=pt.data.dia;
                p[j].data.mes=pt.data.mes;
                strcpy(p[j].nome,pt.nome);
                }
            }
            if (p[i].data.mes<p[j].data.mes){
            //armazena no pt
            pt.data.ano=p[i].data.ano;
            pt.data.dia=p[i].data.dia;
            pt.data.mes=p[i].data.mes;
            strcpy(pt.nome,p[i].nome);
            //mudando o p[i]
            p[i].data.ano=p[j].data.ano;
            p[i].data.dia=p[j].data.dia;
            p[i].data.mes=p[j].data.mes;
            strcpy(p[i].nome,p[j].nome);
            //mudando o p[j]
            p[j].data.ano=pt.data.ano;
            p[j].data.dia=pt.data.dia;
            p[j].data.mes=pt.data.mes;
            strcpy(p[j].nome,pt.nome);
            }
        }
        if (p[i].data.ano<p[j].data.ano){
            //armazena no pt
            pt.data.ano=p[i].data.ano;
            pt.data.dia=p[i].data.dia;
            pt.data.mes=p[i].data.mes;
            strcpy(pt.nome,p[i].nome);
            //mudando o p[i]
            p[i].data.ano=p[j].data.ano;
            p[i].data.dia=p[j].data.dia;
            p[i].data.mes=p[j].data.mes;
            strcpy(p[i].nome,p[j].nome);
            //mudando o p[j]
            p[j].data.ano=pt.data.ano;
            p[j].data.dia=pt.data.dia;
            p[j].data.mes=pt.data.mes;
            strcpy(p[j].nome,pt.nome);
        }
        j++;
        }
        i++;
        j=i+1;
    }

    i = j = 0;
    while (i<6){
        printf("Nome: %sDataNascimento: %d/%d/%d\n",p[i].nome,p[i].data.dia,p[i].data.mes,p[i].data.ano);
        i++;
    }

    printf("A pessoa mais nova:\nNome: %sDataNascimento: %d/%d/%d\n",p[0].nome,p[0].data.dia,p[0].data.mes,p[0].data.ano);
    printf("A pessoa mais velha:\nNome: %sDataNascimento: %d/%d/%d\n",p[5].nome,p[5].data.dia,p[5].data.mes,p[5].data.ano);



    /*bubble sort de 11 elementos
    while (i<11){
        while (j<11){
            if (valor[i]<valor[j])
                troca=valor[i];
                valor[i] = valor[j];
                valor[j] = troca;
            }    
            j++;
        }
        i++;
        j=i+1;
    }*/
}