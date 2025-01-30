#include <stdio.h>
#include <stdlib.h>

int main(){
    char a = 'a';
    int b = 4294967293;
    int c = 4294967295;
    printf("b: '%d'\nc:'%d'",sizeof(b),sizeof(c));
    return 0;
}