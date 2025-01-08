/*5) Escreva uma função que calcule o desvio-padrão d de um
vetor V contendo n números
em que m é a média desse vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void desvPadraoC (double *V, int N, double *desvPadrao){
    int i = 0;
    double soma=0;
    //soma todos os numeros
    while (i<N){
        soma = V[i] + soma;
        i++;
    }
    //faz a media e atribui a media
    double media = soma/N;
    //zera o iterativo
    i = 0;
    //zera soma
    soma = 0;
    while (i<N){
        soma = (V[i] - media)*(V[i] - media) + soma;
        i++;
    }

    soma = soma/(N-1);
    //atribui a variavel 'desvPadrao' o resultado final
    *desvPadrao = sqrt(soma);

}
int main(){
    double V[10] = {50, 60, 50, 41, 100, 31, 91, 40, 10, 50};
    int N = 10;
    double desvPadrao;
    desvPadraoC (V,N,&desvPadrao);
    printf("O valor do desvio padrao: '%.3lf'",desvPadrao);



    return 0;
}