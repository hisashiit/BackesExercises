/*9) Crie uma função que receba uma string e retorne o ponteiro para essa
string invertida.*/

#include <stdio.h>
#include <stdlib.h>
char *stringa(char strga[]){

    char b = 'a';
    int count =0;
    int j=0;
    while (b != '\0'){
        b = strga[j];
        j++;
        count++;
    }
    count = count-2;
    printf("valor do count: '%d'\n",count);
    char *stringa = malloc((count+1)*sizeof(char));
    for (int i=0;i<count;i++){
        stringa[count-i-1] = strga[i];
    }
    stringa[count] = '\0';
    return stringa;
}
int main(){
    char saca[100];
    printf("Escreva uma palavra");
    fgets(saca,100,stdin);
    printf("a palavra %s",saca);
    char *a = stringa(saca);
    printf("\n%s",a);

    return 0;
}