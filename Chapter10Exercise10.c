/*10) Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa
que leia a variável 'a' e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado
para calcular o dobro, c, o triplo, e d, o quádruplo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("Digite a variavel 'a': ");
    scanf("%d",&a);
    printf("O dobro de 'a': %d\n",*b*2);
    printf("O triplo de 'a': %d\n",**c*3);
    printf("O quadruplo de 'a': %d\n",***d*4);
    return 0;
}