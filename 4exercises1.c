/*1) Faça um programa que leia dois números e mostre qual deles
é o maior.
2) Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais”.
3) Faça um programa que leia um número inteiro e verifique se
esse número é par ou ímpar.
4) Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
5) Faça um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float f1, f2;
    printf("Digite dois numeros: ");
    scanf("%f %f",&f1,&f2);
    if (f1==f2)
    {
        printf("%.2f = %.2f", f1, f2);
        printf("\nNumeros iguais");
    }
    else {
        if (f1<f2)
        {
            printf("O maior numero eh o %.2f\n", f2);
            printf("%.2f < %.2f", f1, f2);   
        }
        else {
            printf("O maior numero eh o %.2f\n", f1);
            printf("%.2f > %.2f", f1, f2);
        }
    }

    return 0;
}