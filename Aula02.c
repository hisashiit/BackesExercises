#include <stdio.h>
#include <stdlib.h>

int main() {
    //tipo nome;
    char banana;
    int numeroInt;
    float numeroReal;
    double numeroRealDoublePrecision;

    int Soma;
    int SoMa;
    int SOMA;

    Soma = 2 + 5;
    SoMa = 9 + 11;
    SOMA = 12 + 90;
    printf("Primeiro programa em C \n");
    printf("%d \n", Soma);
    printf("%d \n", SoMa);
    printf("%d \n", SOMA);

    banana = 'a';
    numeroInt = 29;
    printf("Letra %c tem inteiro %d", banana, numeroInt);
    return 0;
}