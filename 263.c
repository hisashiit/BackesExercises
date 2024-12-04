//3) Escreva um programa que leia um número
//inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    printf("Valor lido: %d", a);
    return 0;
}