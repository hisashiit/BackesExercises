#include <stdio.h>

int main(){
    float E = 0;
    int i = 1;
    int N = -1;
    while (N<1){
        printf("Digite um numero maior ou igual a 1: ");
        scanf("%d",&N);
        if (N<1){
            printf("\nNumero digitado menor que 1\n");
        }
    }
    int fatorial = 1;
    while (i<=N){
        fatorial = i*fatorial;
        E = E + 1.0/(fatorial);

        i++;
    }
    printf("E = '%.2f'",E);
    return 0;
}