/*Exercicio a partir de uma lista, ordene a lista, e.g., 84031 vira 0,3,1,4,8*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ordenacao(char v[], int n){
    int i = 0;
    int j = 1;
    int troca;
    while (i<n){
        while (j<n){
            if ( (int) v[i] > (int) v[j]){
                troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
            j++;
        }
    i++;
    j =1+i;
    }
}
int main(){
    char str[100] = "45617894";
    int a = strlen(str);
    printf("%s\nNumeroDeElementos: %d\n",str,a);
    ordenacao(str,a);
    int i = 0;
    printf("{");
    while (i<a){
        printf("[%c]", str[i]);
        if (i==a-1){
        break;
        }
        printf(",");
        i++;
    }
    printf("}");
    return 0;
}