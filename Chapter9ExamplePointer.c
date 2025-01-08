
/*1) Escreva uma função que, dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária desse número por referência.*/


#include <stdio.h>
#include <stdlib.h>

void separarPartes(double number, int *parteInteira, double *parteFracionaria) {
    *parteInteira = (int) number;
    *parteFracionaria = number - *parteInteira;
} 

int main() {
    double numero; // número real
    int parteInteira;
    double parteFracionaria;

    printf("Digite um número real: ");
    scanf("%lf", &numero);

    separarPartes(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %.10lf\n", parteFracionaria);

    return 0;
}
