#include <stdio.h> //ler e escrever
#include <stdlib.h>
int main() {
    char letra;
    int nro;
    float n;
    double d;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero: ");
    scanf("%d", &nro);
    scanf("%f", &n);
    scanf("%lf", &d);
    int bou, bau;
    printf("Digite dois numeros: ");
    //scanf("%d%d", &bou, &bau);
    printf("%c %d %f %f \n", letra, nro, n, d);
    printf("o primeiro numero eh %d, o segundo numero eh %d\n", bou, bau);
    return 0;
}