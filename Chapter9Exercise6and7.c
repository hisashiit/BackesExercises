#include <stdio.h>
#include <stdlib.h>
/*6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma
pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:*/
float calculaIMC(float peso, float altura){
    float IMC = peso/(altura*altura);
    return IMC;
};

/*7) Elabore uma função que receba três números inteiros como
parâmetro, representando horas, minutos e segundos. A
função deve retornar esse horário convertido em segundos.*/
int transformaSegundos(int horas, int minutos, int segundos){
    int seconds = horas*3600+minutos*60+segundos;
    return seconds;
};

int main(){
    float peso, altura;
    printf("Escreva o seu peso: ");
    scanf("%f",&peso);
    printf("Escreva a sua altura: ");
    scanf("%f",&altura);
    printf("O seu IMC: '%.2f'\n",calculaIMC(peso,altura));
    int horas, minutos, segundos;
    printf("Escreva horas: ");
    scanf("%d",&horas);
    printf("Escreva minutos: ");
    scanf("%d",&minutos);
    printf("Escreva segundos: ");
    scanf("%d",&segundos);
    printf("O tempo em segundos '%d'\n",transformaSegundos(horas,minutos,segundos));
    return 0;
}