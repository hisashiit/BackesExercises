/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três
provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior
nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o
número de alunos cuja pior nota foi na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float matrix[10][3];
    int i = 0; int j = 0;
    while (i<10){
        while (j<3){
            printf("Digite o numero no index '%d', '%d': ", i, j);
            scanf("%f",&matrix[i][j]);
            j++;
        }
    j = 0;
    i++;
    }

    i = 0;
    float menorNota;
    int countMenorId[10];
    while (i<10){
        countMenorId[i] = 0;
        i++;
    }
    i = 0;
    j = 1;
    int countMenor[3];

    while (i<10){
        menorNota = matrix[i][0]; //coloca-se a menor nota como o primeiro elemento de nota
        while (j<3){
            if (menorNota == matrix[i][j]){ // se duas notas forem iguais, nao existe menor nota
                countMenorId[i] = 100; //erro - eu quero que nao seja contado essa nota como menor nota
                break;
            }
            if (menorNota > matrix[i][j]){ //compara primeira nota com segunda
                menorNota = matrix[i][j];
                countMenorId[i] = j;
            }
            j++;
        }
        j = 1; //segundo elemento de nota
        i++;
    }

    int countPiorNota[3];
    i = j = 0;
    while (i<3){
        countPiorNota[i] = 0;
        i++;
    }

    i = j = 0;
    while (i<10){
        if (countMenorId[i]==0){
            countPiorNota[0] = countPiorNota[0] + 1;
        }
        if (countMenorId[i]==1){
            countPiorNota[1] = countPiorNota[1] + 1;
        }
        if (countMenorId[i]==2){
            countPiorNota[2] = countPiorNota[2] + 1;
        }
        i++;
    }
    i = j = 0;

    while (i<10){
        while (j<3){
            printf("%.2f\t",matrix[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    i = 0;
    while (i<3){
    printf("\nA quantidade de alunos cuja pior nota foi na prova '%d' foi '%d'",i+1,countPiorNota[i]);
    i++;
    }
    return 0;
}