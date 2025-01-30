/*11) Escreva uma função que receba uma string e converta todos
os seus caracteres em maiúscula. Dica: subtraia 32 dos
caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>
#include <stdlib.h>
int count(char *array, int n){
    int counting=0;
    int i = 0;
    while (i<n){
        if (array[i]=='\0'){
            break;
        }
        i++;
        counting++;
    }
    return counting;
}
void maiuscula(char *array, int count){
    int i = 0;
    while (i<count){
        if (array[i]>=97 && array[i]<=122){
        array[i] = array[i] - 32;
        }
        i++;
    }
}
int main(){
    char str[50] = "Sem medo de cara FeiA";
    int n = count(str,50);
    printf("a quantidade de caracteres: '%d'\n",n);
    maiuscula(str,n);
    int i = 0;
    while (i<n){
        printf("%c",str[i]);
        i++;
    }

    return 0;
}