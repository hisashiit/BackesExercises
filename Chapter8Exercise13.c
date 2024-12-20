/*13) Crie uma enumeração representando os meses do ano. Agora, escreva um
programa que leia um valor inteiro do teclado e exiba o nome do mês
correspondente e quantos dias ele possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    enum meses{Janeiro=1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, 
    Novembro, Dezembro};
int main(){
    int valorDoTeclado=13;
    while (valorDoTeclado<1 || valorDoTeclado>12){
        printf("Escreva o numero do mes: ");
        scanf("%d",&valorDoTeclado);
        if (valorDoTeclado<1 || valorDoTeclado>12){
            printf("Numero incorreto");
        }
    }

    if (valorDoTeclado == Janeiro){
        printf("Janeiro");
    }
    if (valorDoTeclado==Fevereiro){
        printf("Fevereiro");
    }
    if (valorDoTeclado==Marco){
        printf("Marco");
    }
    if (valorDoTeclado==Abril){
        printf("Abril");
    }
    if (valorDoTeclado==Maio){
        printf("Maio");
    }
    if (valorDoTeclado==Junho){
        printf("Junho");
    }
    if (valorDoTeclado==Julho){
        printf("Julho");
    }
    if (valorDoTeclado==Agosto){
        printf("Agosto");
    }
    if (valorDoTeclado==Setembro){
        printf("Setembro");
    }
    if (valorDoTeclado==Outubro){
        printf("Outubro");
    }
    if (valorDoTeclado==Novembro){
        printf("Novembro");
    }
    if (valorDoTeclado==Dezembro){
        printf("Dezembro");
    }


    return 0;
}