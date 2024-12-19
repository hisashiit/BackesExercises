/*5) Usando a estrutura Retângulo do exercício anterior, faça um programa que
declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto
está ou não dentro do retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto{
    float px;
    float py;
};
struct retangulo{
    struct ponto esquerdo;
    struct ponto direito;
    float area;
    float diagonal;
    float perimetro;
};
int main(){
    struct retangulo ret;
    printf("Escreva as coordenadas do ponto superior esquerdo: \nCoordenada x:");
    scanf("%f",&ret.esquerdo.px);
    printf("Coordenada y:");
    scanf("%f",&ret.esquerdo.py);
    printf("Escreva as coordenadas do ponto inferior direito: \nCoordenada x:");
    scanf("%f",&ret.direito.px);
    printf("Coordenada y:");
    scanf("%f",&ret.direito.py);
    ret.area = (ret.esquerdo.px-ret.direito.px)*(ret.direito.py-ret.esquerdo.py);
    if (ret.area < 0){
        ret.area = ret.area*-1;
    }
    ret.diagonal = sqrt((ret.esquerdo.px-ret.direito.px)*(ret.esquerdo.px-ret.direito.px)+(ret.direito.py-ret.esquerdo.py)*(ret.direito.py-ret.esquerdo.py));
    //Calculo do perimetro sendo modulo (x_1-x_2)*2 + mod(y_1-y_2)*2
    if ((ret.esquerdo.px-ret.direito.px) < 0){
        ret.perimetro = (ret.esquerdo.px-ret.direito.px)*-1+(ret.esquerdo.px-ret.direito.px)*-1;
        if ((ret.direito.py-ret.esquerdo.py)<0){
            ret.perimetro = ret.perimetro + (ret.direito.py-ret.esquerdo.py)*2*-1;
        }
        else{
            ret.perimetro = ret.perimetro + (ret.direito.py-ret.esquerdo.py)*2;
        }
    }
    else{
        ret.perimetro = (ret.esquerdo.px-ret.direito.px)+(ret.esquerdo.px-ret.direito.px);
        if ((ret.direito.py-ret.esquerdo.py)<0){
            ret.perimetro = ret.perimetro + (ret.direito.py-ret.esquerdo.py)*2*-1;
        }
        else{
            ret.perimetro = ret.perimetro + (ret.direito.py-ret.esquerdo.py)*2;
        }
    }

    printf("A area calculada: '%.2f'\n",ret.area);
    printf("A diagonal calculada: '%.2f'\n",ret.diagonal);
    printf("Perimetro '%.2f'\n",ret.perimetro);

    return 0;
}