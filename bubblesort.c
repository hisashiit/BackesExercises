#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor[] = {2,1,5,3,1,10,31,1,100,31,100}; //11 elementos
    int i = 0;
    int j = 1;
    int troca;
    while (i<11){
        while (j<11){
            if (valor[i]<valor[j]){
                troca=valor[i];
                valor[i] = valor[j];
                valor[j] = troca;
            }    
            j++;
        }
        i++;
        j=i+1;
    }
    i = j = 0;
    while (i<11){
        printf("%d\t",valor[i]);
        i++;
    }

    return 0;
}