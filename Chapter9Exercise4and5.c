#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float volumeCilindro (float r, float alt){
float volume = 3.1414592*r*r*alt;
return volume;
};

float volumeEsfera (float r){
    float volume = (4.0/3.0)*3.1414592*r*r*r;
    return volume;
};
int main(){
    float raio, altura;
    printf("Qual o raio: ");
    scanf("%f",&raio);
    printf("Qual a altura: ");
    scanf("%f",&altura);

    printf("Volume do cilindro cujo raio: '%.2f' e altura: '%.2f' eh igual a: '%.2f'\n",raio, altura,volumeCilindro(raio, altura));
    printf("Volume esfera cujo raio: '%.2f' eh igual a: '%.2f'",raio,volumeEsfera(raio));
    //system("pause");
    return 0;
}