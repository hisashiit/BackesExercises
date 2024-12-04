#include <stdio.h>

int main(){
    char name[10];
    printf("Qual o seu nome: ");
    scanf(" %s", &name);
    printf("O seu nome eh %s", name);

    return 0;
}