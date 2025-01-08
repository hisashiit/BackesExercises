#include <stdio.h>

int inverter(int n) {
    static int invertido = 0;

    if (n == 0) {
        int resultado = invertido;
        invertido = 0;  // Redefine para futuras chamadas
        return resultado;
    }

    invertido = invertido * 10 + (n % 10);
    printf("Invertido: '%d'\n",invertido);
    return inverter(n / 10);
}

int main() {
    int n;
    printf("Escreva um numero: ");
    scanf("%d", &n);
    printf("O numero invertido: '%d'\n", inverter(n));

    return 0;
}
