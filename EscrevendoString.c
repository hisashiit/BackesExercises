#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str1[20] = "Banana Bucket";
    char str2[30];
    printf("%s\n",str1);

   scanf("%s",str2);
   printf("%s\n",str2);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); //limpando o buffer 

    printf("Escreva outra coisa: ");
    fgets(str2,30,stdin);
    printf("%s",str2);
    char ca;
    printf("Escreva um caracter: ");
    ca = getchar();  // Le apenas um caracter do teclado
    printf("You entered: %c\n", ca);

    //Utilizacao da biblioteca string.h
    //Encontre o tamanho de uma string
    char str4[15] = "teste";
    printf("Str4 possui: '%d' caracteres \n",strlen(str4)); //a funcao strlen - retorna a quantidade de caracteres
    // que existem em uma string
    
    //Copiando uma string para outra string pela biblioteca string.h
    while ((c = getchar()) != '\n' && c != EOF); //limpando buffer
    char str5[100], str6[100];
    printf("Entre com uma string: ");
    fgets(str5,100,stdin);
    strcpy(str6,str5); //funcao strcpy faz a copia da variavel str5 para str6
    printf("String 5: %s\n",str5);
    printf("String 6: %s\n",str6);

    //Concatenando strings - strcat(destino, origem);
    //Essa funcao 'strcat' joga a variavel origem para o final da variavel destino
    char str7[15] = "bom ";
    char str8[15] = "dia\n";
    strcat(str7, str8);
    printf("%s",str7);

    //Comparando duas strings - "strcmp"
    //A funcao strcmp() compara duas strings e retorna:
    //0 - se forem iguais
    //diferente de zero - se forem diferentes

    char str9[100], str10[100];
    printf("Entre com a string 9: ");
    fgets(str9,100,stdin);
    printf("Entre com a string 10: ");
    fgets(str10,100,stdin);
    if (strcmp(str10,str9) == 0){
        printf("Strings iguais\n");
    }
    else{
        printf("Strings diferentes\n");
    }

return 0;
}