#include <stdio.h>
#include <stdlib.h>
void esvaziarVaso(int *flores) {
    if (*flores > 0) {
        *flores = *flores-1;
        esvaziarVaso(flores);
    }
}

int main() {
    int numeroDeFlores = 5; // Número de flores no vaso
    esvaziarVaso(&numeroDeFlores); // Chama a função para esvaziar o vaso com 5 flores
    printf("Numero de flores '%d'",numeroDeFlores);
    return 0;
}
