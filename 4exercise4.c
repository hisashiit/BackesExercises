/*4) Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”*/




#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;
    float prestacaoEmprestimo;
    printf("Escreva seu 'salario' e 'valor da prestacao': ");
    scanf("%f %f", &salario,&prestacaoEmprestimo);
    if (prestacaoEmprestimo>0.2*salario)
    {
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo aprovado");
    }
    return 0;
}