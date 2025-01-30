/*Pegar um horario XX:XX:XX e converte-lo em segundos*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//charToInt - converte o char em seu respectivo numero em inteiro -> seguindo a tabela ASCII
int charToInt(char a){
    int b = (int) a;
    int i = 0;
    if (b>=48 && b<=57){
        b = b - 48;
    }
    return b;
}
int hoursToSec(char v[], int n){
    int sec = 0;
    int aba = 0;
    int hours = 0;
    int i = 0;
    while (i<n){
        aba = charToInt(v[i]);
        
        if (i==0){
        sec = ( (aba*3600*10)) + sec;
        }
        if (i==1){
            sec = ( (aba*3600)) + sec;
        }
        if (i==3){
        sec = (aba*60*10) + sec;
        }
        if (i==4){
            sec = ( aba*60) + sec;
        }
        if (i==6){
        sec = ( aba*10) + sec;
        }
        if (i==7){
            sec = ( aba) + sec;
        }
        i++;
    }
    return sec;
}
int main(){
    char horario[50];
    int a = 0;
    while (a==0){
    printf("Escreva um horario no formato 'XX:XX:XX': ");
    scanf("%s",&horario);
    a = strlen(horario);
    if (a!=8){
        a=0;
        printf("Voce nao seguiu a formatacao!\n");
    }
    }
    int leng = strlen(horario);
    printf("As horas de %s em segundos %d",horario,hoursToSec(horario,leng));
    return 0;
}