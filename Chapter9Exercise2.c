/*2) Faça uma função que receba um número inteiro de 1 a 12 e
imprima em tela o mês e a sua quantidade de dias de acordo
com o número digitado pelo usuário. Exemplo: Entrada = 4.
Saída = abril.*/

#include <stdio.h>
#include <stdlib.h>
void mes(int num){
    if (num==1){
        printf("Janeiro 31");
    }
    if (num==2){
        printf("Fevereiro 28");
    }
    if (num==3){
        printf("Marco 31");
    }
    if (num==4){
        printf("Abril 30");
    }
    if (num==5){
        printf("Maio 31");
    }
    if (num==6){
        printf("Junho 30");
    }
    if (num==7){
        printf("Julho 30");
    }
    if (num==8){
        printf("Agosto 31");
    }
    if (num==9){
        printf("Setembro 30");
    }
    if (num==10){
        printf("Outubro 31");
    }
    if (num==11){
        printf("Novembro 30");
    }
    if (num==12){
        printf("Dezembro 31");
    }
}
int main(){
    int number;
    while (number<1 || number>12){
    printf("Digite um numero do mes entre 1 e 12: ");
    scanf("%d",&number);
    if (number<1 || number>12){
        printf("Numero esta fora do intervalo\n");
    }
    }
    mes(number);

    return 0;
}