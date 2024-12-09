/*7) Faça um programa que leia uma string e imprima uma mensagem dizendo
se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a
propriedade de poder ser lida tanto da direita para a esquerda como da
esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char str2[100];
    char digitado;
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    printf("A string digitada foi: %s",str);

    int a = 1;
    int i = 0;
    int count = 0;
    int countpalindromo = 0;
    char ca[1]="c";
    while (a==1){
        ca[0] = str[i];
        if (ca[0] == '\n'){
            break;
        }
        str2[i]=ca[0];
        count++;
        i++;
    }
    i=0;
    while (a==1){
        ca[0] = str[count-1-i];
        if (ca[0] == '\n'){
            break;
        }
        str2[i]=ca[0];
        i++;
    }
    str2[i] = '\0';
    i = 0;
    while (i<count){
    if (str2[i]==str[i]){ //esse metodo so deu certo porque ambas strings possuiam a mesma dimensao e se comparou index iguais de cada uma.
        countpalindromo = countpalindromo + 1;
    }
    i++;
    }
    if (countpalindromo==count){
        printf("%s eh palindromo da string digitada",str2);
    }
    printf("\n");
    printf("Numero de letras na string: %d\n",count);
    return 0;
}
