#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    float b;

    //1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    printf("antecessor :'%d' e sucessor: '%d'", a-1,a+1);

    //2) Faça um programa que leia um número real e imprima a quinta parte desse número.
    printf("\nDigite um numero real: ");
    scanf("%f", &b);
    printf("A quinta parte de b = '%f'", b/5);

    //3) Faça um programa que leia três valores inteiros e mostre sua soma.
    int i1, i2, i3;
    printf("\nDigite tres numeros inteiros: ");
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("A soma dos tres numeros inteiros: '%d'", i1+i2+i3);

    //4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
    float f1, f2, f3, f4;
    printf("\nDigite quatro valores reais: ");
    scanf("%f %f %f %f", &f1, &f2, &f3, &f4);
    printf("\nMedia aritmetica: '%f'", (f1+f2+f3+f4)/4);

    //5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
    int idade;
    int anoAtual;
    int anoDeNascimento;
    printf("\nQual sua idade: ");
    scanf("%d", &idade);
    printf("\nQual o ano atual: ");
    scanf("%d", &anoAtual);
    anoDeNascimento = anoAtual - idade;
    printf("\no ano em que voce nasceu eh '%d'",anoDeNascimento);

    //6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula
    //de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.

    float velocidadeKm;
    float velocidadeMs;
    printf("\nDigite a velocidade em km/h: ");
    scanf("%f",&velocidadeKm);
    velocidadeMs = velocidadeKm/36;
    printf("\nVelocidade em m/s eh '%f'", velocidadeMs);

    //7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
    float valorReais;
    printf("\nDigite uma quantia em reais");
    scanf("%f", &valorReais);
    printf("\nO valor em dolares eh '%f'",valorReais/5.8);

    //8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
    //fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
    float temperaturaCelsius;
    printf("\nDigite o valor da temperatura em Celsius: ");
    scanf("%f",&temperaturaCelsius);
    printf("\nTemperatura em Fahrenheit: '%f'",temperaturaCelsius*9.0/5.0+32.0);

    //9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * π/180, 
    //sendo G o ângulo em graus e R em radianos e π = 3.141592.
    const float PI = 3.141592;
    float anguloGraus;
    printf("\nValor do angulo em graus: ");
    scanf("%f", &anguloGraus);
    printf("\nValor do angulo em radianos '%f'",anguloGraus*PI/180.0);

    //10) A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
    //i. O primeiro ganhador receberá 46% do total.
    //ii. O segundo receberá 32% do total.
    //iii. O terceiro receberá o restante.
    //Calcule e imprima a quantia recebida por cada um dos ganhadores.
    float valorPremio = 780000;
    printf("\nValor recebido pelo jogador 1 eh '%f'",valorPremio*46/100);
    printf("\nValor recebido pelo jogador 2 eh '%f'",valorPremio*32/100);
    printf("\nValor recebido pelo jogador 3 eh '%f'",valorPremio*(1-78/100));


    //11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π* raio2,
    //sendo π = 3.141592.
    float raio;
    printf("\nValor do raio: ");
    scanf("%f", &raio);
    printf("\nArea do circulo: %f",PI*raio*raio);


    //12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é
    //calculado por meio da seguinte fórmula: PI*raio*raio*altura
    //em que π = 3.141592
    float altura;
    printf("\nEscreva valor da 'altura' e valor do 'raio': ");
    scanf("%f %f", &altura, &raio);
    printf("\nVolume do cilindro: %f", PI*raio*raio*altura);



    //13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
    //Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado.
    float a1, b1;
    printf("\nDigite os valores dos catetos 'a' e 'b': ");
    scanf("%f %f", &a1, &b1);
    printf("\nO valor da hipotenusa: '%f'", sqrt(a1*a1+b1*b1));


    //14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
    char c1;
    printf("\nDigite um character: ");
    scanf(" %c", &c1);
    printf("%c",c1+32);
    //15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado
    //pelos dígitos invertidos do número lido. Exemplo: Número lido = 123 Número gerado = 321
    
    //16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois (utilize os
    //operadores de deslocamento de bits).
    
    //17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.
    
    //18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro número pelo segundo.
    
    //19) Elabore um programa que leia dois números inteiros e exiba o resultado das operações de “ou exclusivo”, “ou bit a bit” e “e
    //bit a bit” entre eles.
    
    return 0;
}