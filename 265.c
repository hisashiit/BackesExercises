//8) Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
//9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
//Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.
//10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
//11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.
//12) 12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando const. Imprima essa constante.
#include <stdio.h>
#include <stdlib.h>
#define episilon 2.71
const int k1 = 25;
int main(){
    int a, b;
    float c1, c2;
    int dia, mes, ano;
    printf("escreva dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("o primeiro numero: '%d' e o segundo: '%d' ", b, a);

    printf("\nescreva dois numeros do tipo float: ");
    scanf("%f %f", &c1, &c2);
    printf("o primeiro numero: '%f' o segundo numero: '%f'", c2, c1);
 
    printf("\nValor do 'dia', 'mes' e 'ano': \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%d/%d/%d", dia, mes, ano);

    printf("\n%f", episilon);
    printf("\n%d", k1);
    return 0;
}