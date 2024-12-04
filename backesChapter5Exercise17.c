#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Digite um inteiro: ");
    scanf("%d",&N);
    float i = 1.0;
    int j = 1;
    while (i<=N){
        printf("%.0f\t",i);
        if (i==(1.0/2.0)*j*j*1.0 + (1.0/2.0)*j*1.0){
            printf("\n");
            j++;
        }
        i = i + 1.0;
    }

    return 0;
}