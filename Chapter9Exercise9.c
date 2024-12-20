/*9) Elabore uma função que receba três notas de um aluno como
parâmetros e uma letra. Se a letra for “A”, a função deverá
calcular a média aritmética das notas do aluno; se for “P”,
deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.*/

#include <stdio.h>
#include <stdlib.h>
float media(float n1, float n2, float n3, char letra){
    float media;
    if (letra =='A'){
        media=(n1+n2+n3)/3.0;
    }
    if (letra == 'P'){
        media=(n1*2+n2*3+n3*5)/10;
    }
    return media;
}
int main(){
    float n1,n2,n3;
    char letra;
    char c;
    printf("Escreva a nota 1: ");
    scanf("%f",&n1);
    printf("Escreva a nota 2: ");
    scanf("%f",&n2);
    printf("Escreva a nota 3: ");
    scanf("%f",&n3);
    while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
    printf("Escolha uma letra: ");
    scanf("%c",&letra);
    printf("A media sera: %.2f",media(n1,n2,n3,letra));
    return 0;
}