/*15) Em matemática, o número harmônico designado por Hn
define-se como o enésimo termo da série harmônica. Ou seja:*/
#include <stdio.h>
#include <stdlib.h>
double Hn(int n){
    if (n == 0){
        return 0;
    }
    else{
        return 1.0/n + Hn(n-1);
    }
}

int main(){
    int n;
    printf("Qual o valor de 'n': ");
    scanf("%d",&n);
    printf("O valor da funcao Hn: '%lf'",Hn(n));
    return 0;
}