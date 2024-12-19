/*7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os
campos hora, minuto e segundo. Agora, escreva um programa que leia um
vetor de cinco posições dessa estrutura e imprima a maior hora.*/

#include <stdio.h>
#include <stdlib.h>
struct hora{
    int hora;
    int minuto;
    int segundo;
};
int main(){
    struct hora h[5];
    int i = 0;
    while (i<5){
        printf("Digite horas: ");
        scanf("%d",&h[i].hora);
        printf("Digite minutos: ");
        scanf("%d",&h[i].minuto);
        printf("Digite segundos: ");
        scanf("%d",&h[i].segundo);
        i++;
    }
    i = 0;
    int j = 0;
    int z = 1;
    int index = 0;
    int maiorhora=h[0].hora;
    int maiorminuto=h[0].minuto;
    int maiorsegundo=h[0].segundo;
    while (z<5){
        if (maiorhora==h[z].hora){
            int var = z;
            maiorminuto = h[var-1].minuto;
            while (var<5){
                if (maiorminuto==h[var].minuto){
                    int var2 = var;
                    maiorsegundo = h[var2-1].segundo;
                    while (var2<5){
                        if (maiorsegundo<h[var2].segundo){
                            index = var2;
                            maiorsegundo = h[var2].segundo;
                        }
                        var2++;
                    }
                }
                if (maiorminuto<h[var].minuto){
                    maiorminuto = h[var].minuto;
                    index = var;
                }
                var++;
            }
        }
        if (maiorhora<h[z].hora){
            maiorhora = h[z].hora;
            index = z;
        }
    z++;
    }

    printf("A maior hora eh: \n");
    printf("%d:%d:%d",h[index].hora,h[index].minuto,h[index].segundo);

    return 0;
}