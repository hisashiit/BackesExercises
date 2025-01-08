/*1) Escreva uma função que, dado um número real passado como parâmetro,
retorne a parte inteira e a parte fracionária desse número por referência.*/

#include <stdio.h>
#include <stdlib.h>
void numReal(double *number){
    printf("Parte inteira: '%d'\n",((int)*number));
    printf("Parte fracionaria: '%lf'\n",*number-((int)*number));
    printf("Pointer: %p\n",(void *)number);
    printf("Pointer: %p\n",number);
};
int main (){
    double number1; //numero real
    scanf("%lf",&number1);
    numReal(&number1);
    return 0;
}