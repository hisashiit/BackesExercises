/*7) Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o 'valor' e o 'estado de destino do produto' e o programa
retorne o 'preço final do produto acrescido do imposto do
estado em que ele será vendido'. Se o estado digitado não for
válido, mostrará uma mensagem de erro.*/
//MG 7, SP 12, RJ 15, MS 8
#include <stdio.h>
#include <stdlib.h>

int main(){
    int estado;
    int a,b;
    float valor;
    printf("Digite:\t(1)MG\t(2)SP\t(3)RJ\t(4)MS\n");
    scanf("%d",&estado);
    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    switch(estado) {
        case 1: {
            valor = valor*1.07;
            printf("Valor: '%.2f'\n",valor);}
            break;
        case 2:{
            valor = valor*1.12;
            printf("Valor: '%.2f'\n",valor);}
            break;
        case 3:{
            valor = valor*1.15;
            printf("Valor: '%.2f'\n",valor);}
            break;
        case 4:{
            valor = valor*1.08;
            printf("Valor: '%.2f'\n",valor);}
            break;
        default: printf("Digito errado do estado.\n");
    }
    return 0;
}
