/*3) Faça um programa que leia um número inteiro e verifique se
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
    int number;
    int i = 1;
    while (i==1){
    printf("\nType a number: ");
    scanf("%d",&number);
    if (number%2 == 0)
    {
        printf("%d is an even number", number);
    }
    else{
        printf("%d is an odd number", number);
    }
    }
    return 0;
}