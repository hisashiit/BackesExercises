#include <stdio.h>
#include <stdlib.h>

int sum(int const ar[], int n) // faulty code
{
int i;
int total = 0;
for( i = 0; i < n; i++)
total += ar[i]; // error increments each element
return total;
}

int main(){
    int i;
    int ar[3] = {1,2,3};
    printf("a soma eh '%d'\n",sum(ar,3));
    for (i = 0; i < 3; i++)
    printf("%d\t",ar[i]);
    return 0;
}