/*14) O código de César é uma das técnicas de criptografia mais simples e
conhecidas. É um tipo de substituição no qual cada letra do texto é
substituída por outra, que se apresenta n posições após ela no alfabeto. Por
exemplo, com uma troca de três posições, a letra A seria substituída por D,
B se tornaria E e assim por diante. Escreva um programa que faça uso
desse código de César para três posições. Entre com uma string e imprima
a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro
cansado. Nova string: d oljhlud udsrvd pduurp vdowrx
vreuh r fdfkruur fdqvdgr*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char str2[100];
    printf("Digite uma string: ");
    fgets(str,100,stdin);
    int i = 0;
    int a = 1;
    int length = 0;
    char ch = 'a';
    while (a==1){
        ch = str[i];
        if (ch == '\n'){
            break;
        }
        if (ch+3 == '#'){
            ch = ch - 3;
        }
        str2[i] = ch+3;
        length = length + 1;
        i++;
    }
    printf("A quantidade de letras: '%d'\n", length);
    printf("String cifrada em Cesar\n");
    printf("%s",str2);
    return 0;
}