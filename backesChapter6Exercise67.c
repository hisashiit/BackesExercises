#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int vetor[10];
    while (i<10){
    printf("Digite o elemento na posicao '%d': ", i);
    scanf("%d", &vetor[i]);
    i++;
    }

    i = 0;
    int count=0;
    while (i<10){
        if (vetor[i]%2 == 0){
            printf("%d: numero par\n",vetor[i]);
            count = count + 1;
        }
    i++;
    }
    printf("A quantidade de pares = %d",count);

    int maior=vetor[0];
    int menor = vetor[0];
    i = 1;
    while (i<10){
        if (maior<vetor[i]){
            maior = vetor[i];
        }
        if (menor>vetor[i]){
            menor = vetor[i];
        }
        i++;
    }

    printf("\nO maior numero: '%d'\nO menor numero: '%d'",maior,menor);

    return 0;
}

