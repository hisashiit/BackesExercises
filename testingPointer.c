#include <stdio.h>
#include <stdlib.h>
int main(){


//Pointers to constants can’t be used to change values. Consider the following code:
double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
double * pd = rates; // pd points to beginning of the array
//The second line of code declares that the type double value to which pd points is a const .
//That means you can’t use pd to change pointed-to values:
int i = 0;
while (i<5){
    printf("%.2lf\t",rates[i]);
    i++;
}
printf("\n");
    //*pd = 29.89; // not allowed
pd[2] = 222.22; // not allowed
i = 0;
while (i<5){
    printf("%.2lf\t",rates[i]);
    i++;
}
    rates[0] = 99.99; // allowed because rates is not const
return 0;
}