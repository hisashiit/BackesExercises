/*7) Elabore uma função que receba duas strings como parâmetros e verifique
se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros
para acessar os caracteres das strings*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// funcao que verifica se a stranga2 se encontra dentro da stranga1
char* isThatIn(char stranga1[], char stranga2[], int n1, int n2){
    char *p = stranga1;
    char *u = stranga2;
    int i = 0;
    int a = 0;
    int j = 0;
    int count = 0;
    while (i<n1){
        if (*p == *u){
            while (count<n2){
                if (*p == *u){
                    p++;
                    u++;
                    count++;
                }
                else{
                    u=stranga2;
                    count=0;
                    break;
                }
            }
            if (count == n2){
                a = 1;
            }
        }
        p++;
        i++;
    }
    if (a==1){
        return "esta contido";
        }
    else{
        return "nao esta contido";
    }
}
int main(){
    char stranga1[100] = "dsdsdagarta2323ds";
    char stranga2[20] = "arata";
    int n1 = strlen(stranga1);
    int n2 = strlen(stranga2);
    printf("%s",isThatIn(stranga1,stranga2,n1,n2));
    return 0;
}