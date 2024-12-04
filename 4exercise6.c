/*6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float altura;
    char sexo;
    float pesoIdeal;
    printf("Digite 'altura' e 'sexo' (M/F)");
    scanf(" %f %c",&altura,&sexo);
    if (sexo=='M'){
        pesoIdeal = 72.7*altura - 58;
    }
    if (sexo == 'M'){
        pesoIdeal = 62.1*altura - 44.7;
    }
    printf("\nO seu IMC: '%2.f'", pesoIdeal);

    return 0;
}