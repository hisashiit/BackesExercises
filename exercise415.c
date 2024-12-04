/*15) Faça um programa que leia os coeficientes de uma equação
do segundo grau. Em seguida, calcule e mostre as raízes dessa
equação, lembrando que as raízes são calculadas como 
em que Δ = b2 – 4 * a * c e ax2 + bx + c = 0
representa uma equação do segundo grau. A
variável a tem de ser diferente de zero. Caso
seja igual, imprima a mensagem “Não é
equação de segundo grau”. Do contrário,
imprima:
• Se Δ < 0, não existe real. Imprima a
mensagem “Não existe raiz”.
• Se Δ = 0, existe uma raiz real. Imprima a
raiz e a mensagem “Raiz única”.
• Se Δ > 0, existem duas raízes reais.
Imprima as raízes.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Escreva o coeficiente 'a': ");
    scanf(" %f", &a);
    printf("Escreva o coeficiente 'b': ");
    scanf(" %f", &b);
    printf("Escreva o coeficiente 'c': ");
    scanf(" %f", &c);
    delta = b*b - 4*a*c;
    if (delta < 0){
        printf("Nao existem raizes reais");
    }
    if (delta==0){
        printf("Existe apenas uma raiz real\n");
        x1 = (-b + sqrt(delta))/(2*a);
        printf("Raiz unica: '%f' ", x1);
    }
    if (delta>0){
        printf("Existem duas raizes reais\n");
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b -sqrt(delta))/(2*a);
        printf("As raizes reais '%f' e '%f' ", x1, x2);
    }
    return 0;
}