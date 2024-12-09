/*6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
palavra dada por esse caractere. Ao final, imprima a nova string e o
número de vogais que ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char digitado;
    printf("Escreva uma string: ");
    fgets(str,100,stdin);
    printf("A string digitada foi: %s",str);
    printf("Entre com um caracter para substituir todas as vogais: ");
    scanf("%c",&digitado);

    int a = 1;
    int i = 0;
    int count = 0;
    char ca[1]="c";
    while (a==1){
        ca[0] = str[i];
        if (ca[0] == '\n'){
            break;
        }
        if (ca[0] == 'a' || ca[0] == 'e' || ca[0] == 'i' || ca[0] == 'o' || ca[0] == 'u'){
        str[i] = digitado;
        count++;
        }
        i++;
    } 
    printf("\n");
    printf("Numero de vogais na string: %d\n",count);
    printf("String com as letras trocadas: \n%s",str);
    return 0;
}
