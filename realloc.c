#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *p = malloc(5*sizeof(int));
    for (i=0; i<5; i++){
        p[i] = i+1;

    }
    printf("Alocacao de memoria feita pelo MALLOC e inicializada: \n");
    for (i=0;i<5; i++){
        printf("%d\n",p[i]);
    }
    printf("\n");
    //Diminui o tamanho do array no realloc()
    p = realloc(p,3*sizeof(int));
    printf("Realocacao de memoria para 3 elementos \n");
    for (i=0; i<3; i++){
        printf("%d\n",p[i]);
    }
    printf("\n");
    //Aumenta o tamanho do array
    p = realloc(p,10*sizeof(int));
    printf("Realocacao de memoria para 10 elementos \n");
    for (i=0;i<10;i++){
        printf("%d\n",p[i]);
    }
    
    //Boas praticas de programacao, sempre use free() quando alocar dinamicamente a memoria
    free(p);
    printf("Tentar printar depois do free \n");
    for (i=0;i<10;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}