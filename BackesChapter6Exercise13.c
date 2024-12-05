/*13) Faça um programa para ler 10 números diferentes a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem em
que forem lidos, sendo que, caso o usuário digite um número que já foi
digitado, o programa deverá pedir a ele para digitar outro número. Note
que cada valor digitado pelo usuário deve ser pesquisado no vetor,
verificando se ele existe entre os números que já foram fornecidos. Exiba na
tela o vetor final que foi digitado.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float vetor[10];
    float compara;
    int i = 0;
    int j = 0;
    int alerta = 0; //se o alerta for 1, significa que o compara existe.

    while (i<10){
    alerta = 0;
    printf("Digite um numero do indice '%d': ",i);
    scanf("%f",&compara);
        while (j<i){
            if (compara==vetor[j]){
                alerta = 1;
                break;
            }
            j++;
        }
        j = 0;

        if (alerta == 1){
            printf("O valor '%.2f' existe\n",compara);
        }
        if (alerta == 0) {
            vetor[i] = compara;
            i++;
        }
    }

    printf("O vetor criado: ");
    i = 0;
    while (i<10){
        printf("%.2f\t",vetor[i]);
        i++;
    }

    return 0;
}