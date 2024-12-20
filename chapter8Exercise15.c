/*15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um
programa que inicialize um dos tipos dessa união e exiba em tela o valor
do outro tipo.*/
#include <stdio.h>
#include <stdlib.h>

union pessoa{
    int idade;
    float altura;
};

int main(){
    union pessoa p1;
    printf("Inicialize a idade da pessoa: ");
    scanf("%d",&p1.idade);

    printf("Idade: '%.2f'",p1.altura);

union exemplo {
    int a;
    float b;
    double c;
};


    union exemplo u;
    printf("\nTamanho da uniao: %zu bytes\n", sizeof(u));



    return 0;
}