#include <stdio.h> //ler e escrever
#include <stdlib.h>
int main() {
    int x = 97;
    int a, b, c, d, e, f, g;
    a = b = c = d = e = f = g = 10;
    float h;
    char ch1, ch2 = 'A';
    ch1 = x;
    printf("ch1 = %c \n ", x);
    x = ch2;
    printf("x = %d \n", x);
    char y;
    int i = 0;
    //Verificaçao da tabela ASCI
    while (i<127) {
        y = i;
        printf("%c = %d / ", y, i);
        i = i + 1;
    }
    //Verificacao da sintaxe a = b = c = d = e = f = g
    printf("\n %d %d %d %d %d %d %d", a, b, c, d, e, f, g);
    h = 3.14;
    printf("\n %f", h);
    return 0;
}