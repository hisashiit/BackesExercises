//4) Faça um programa que leia um número inteiro e depois o imprima usando o operador “%f”. Veja o que aconteceu.

//5) Faça um programa que leia um valor do tipo float e depois o imprima usando o operador “%d”. Veja o que aconteceu.

//6) Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.

//7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>
int main() {
    int a;
    float b;
    double c;
    char d;
    printf("Escreva um inteiro: ");
    scanf("%d", &a);
    printf("\nValor lido: %f\n", a);

    printf("\nEscreva um float: ");
    scanf("%f", &b);
    printf("\nValor lido: %d", b);

    printf("\nEscreva um double: ");
    scanf("%lf", &c);
    printf("\nValor lido: %e", c);

    printf("\nEscreva um caractere: ");
    scanf(" %c", &d);
    d = getchar();
    printf("\nValor lido: %d\n", d);
    return 0;
}
