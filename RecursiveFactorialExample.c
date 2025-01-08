#include <stdio.h>
#include <stdlib.h>
int factorialHisashi(int n){
    if (n == 0){
        return 1;
    }
    else{
        return factorialHisashi(n-1)*(n);
    }
}

int main(){
    int b = 5;
    printf("O valor de B %d",factorialHisashi(b));
    return 0;
}