/*12) Escreva uma função recursiva que receba um valor inteiro em
base decimal e o imprima em base binária.*/

#include <stdio.h>
#include <stdlib.h>
int baseBinaria(int baseDecimal){
    if (baseDecimal==0){
        return 0;
    }
    else{
        return baseDecimal%2 + baseBinaria(baseDecimal/2)*10;
    }
}
int main(){

    int a = 21;
    printf("A base binaria do numero '%d' = '%d'",a,baseBinaria(a));

    return 0;
}