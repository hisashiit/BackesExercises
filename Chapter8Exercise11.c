/*11) Escreva um programa que contenha uma estrutura representando uma
data válida. Essa estrutura deve conter os campos dia, mês e ano. Em
seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
número de dias que decorreram entre as duas datas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    struct Data{
        int dia;
        int mes;
        int ano;
    };
int main(){

    struct Data d1, d2,dref;
    //LEITURA DAS DATAS D1 (DATA INICIAL), D2 (DATA FINAL)
    printf("Dia: ");
    scanf("%d",&d1.dia);
    printf("Mes: ");
    scanf("%d",&d1.mes);
    printf("Ano: ");
    scanf("%d",&d1.ano);
    printf("Dia: ");scanf("%d",&d2.dia);
    printf("Mes: ");scanf("%d",&d2.mes);
    printf("Ano: ");scanf("%d",&d2.ano);
    dref.ano = d1.ano;
    dref.mes = d1.mes;
    dref.dia = d1.dia;
    int mesFinal = d2.mes;
    int diaDoMes;
    int countdia = 0;
    //LOOP QUE PERCORRE O SEGUINTE:
    //SE EU COLOQUEI 05/07/2020 e 05/03/2021, O LOOP PERCORRERA 05/07 06/07 07/07 08/07 09/07 10/07 ATE CHEGAR A 30/03/2021 (ELE VAI ATE O FINAL DO MES EM QUE SE ENCONTRA O ULTIMO DIA, POR ISSO
    // DEVE-SE DESCONTAR ESSE PERIODO QUE ELE FOI ALEM DO CALCULO FINAL, PELA VARIAVEL 'DIFERENCA')
    while (dref.ano<=d2.ano){
        if (dref.ano==d2.ano){
            d2.mes = mesFinal;
        }
        else{
            d2.mes = 12;
        }
        while(dref.mes<=d2.mes){
            if (dref.mes == 1 || dref.mes == 3 || dref.mes == 5 || dref.mes == 7 || dref.mes == 8 || dref.mes==10 || dref.mes == 12){
                diaDoMes = 31;
            }
            if (dref.mes == 2) {
                diaDoMes = 28;
            }
            if (dref.mes==4 || dref.mes==6 || dref.mes ==9 || dref.mes==11){
                diaDoMes=30;
            }
            while(dref.dia<=diaDoMes){
                dref.dia = dref.dia+1;
                countdia = countdia+1; 
            }
            dref.dia=1;
            dref.mes=1+dref.mes;
        }
        d2.mes=12;
        dref.mes=1;
        dref.dia=1;
        dref.ano=dref.ano+1;
        printf("%d\n",countdia);
    } 
    int diferenca = d2.dia-diaDoMes;
    if (diferenca<0){
        diferenca = -1*diferenca;
    }
    printf("Quantidade de dia: '%d'",countdia-diferenca);
    return 0;
}