#include <stdio.h>
#include <stdlib.h>

int sum(const int ar[], int n) /* definition */
{
int i;
int total = 0;
for( i = 0; i < n; i++)
total += ar[i];
return total;
}

int main(){
    int i;
    int array[5] = {1, 5, 2, 1, 3};
    printf("The array's sum is: '%d'\n", sum(array,5));
    for (i=0; i<5; i++){
    printf("%d\t",array[i]);
    }
    return 0;
}