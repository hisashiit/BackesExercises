/*3) Escreva uma função que receba por parâmetro uma
temperatura em graus Fahrenheit e a retorne convertida em
graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>
float converter(float Fahrenheit){
    float Celsius = (Fahrenheit-32.0)*(5.0/9.0);

    return Celsius;
}
int main(){
    float FahrTemperature;
    printf("Escreva a temperatura em Fahrenheit: ");
    scanf("%f",&FahrTemperature);
    printf("A temperatura '%.2f' em Celsius eh '%.2f'",FahrTemperature,converter(FahrTemperature));


    return 0;
}