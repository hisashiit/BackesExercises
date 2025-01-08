#include <stdio.h>
#include <stdlib.h>
int fiboncciHisashi(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    else{
        return fiboncciHisashi(n-1) + fiboncciHisashi(n-2);
    }
}

int main(){
    int b = 10;
    printf("O valor de B %d",fiboncciHisashi(b));
    return 0;
}