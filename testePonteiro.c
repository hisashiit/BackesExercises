#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(){
    int a = 2;
    int *p = (int *)0x3F8;  // Explicitly cast the address to an int pointer
    void *p2;
    p2 = &p;
    int p1 = 0x5DC;
    printf("Endereco em p: %p \n",p);
    printf("Endereco em p1: %p \n",p1);
    printf("Endereco em p2: %p \n",*(int*)p2);
    printf("5*PI = '%.2lf'",PI*5);


    return 0;
}