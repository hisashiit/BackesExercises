#include <stdio.h>

union exemplo {
    int inteiro;
    float flutuante;
};

int main() {
    union exemplo u;

    u.inteiro = 42; // Inicializa o valor de 'inteiro'
    printf("Valor de 'inteiro': %d\n", u.inteiro);
    printf("Valor de 'flutuante': %f\n", u.flutuante);

    u.flutuante = 3.14; // Altera o valor de 'flutuante'
    printf("Valor de 'inteiro' (apos alterar 'flutuante'): %d\n", u.inteiro);
    printf("Valor de 'flutuante': %f\n", u.flutuante);

    return 0;
}
