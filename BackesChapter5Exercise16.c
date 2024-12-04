#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int dimension;
    float Hn = 0.0;
    printf("What is the dimension of Hn");
    scanf("%d",&dimension);
    while (i<dimension){
        if (i==0){
            Hn = 1;
        }
        if (i>0){
        Hn = Hn + (1.0/(1.0+i));
        }

        i++;
    }

    printf("Hn is equal to '%.4f'",Hn);
    return 0;
}