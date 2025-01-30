//Mostrando que um inteiro ocupa 4 bytes de memoria
#include <stdio.h>
int main(void)
{
int urn[5] = {100,200,300,400,500};
int * ptr1, * ptr2, *ptr3;
ptr1 = urn; // assign an address to a pointer
printf("'%p'\n",&urn[0]);
printf("'%p'\n",&urn[1]);
printf("'%p'\n",&urn[2]);
return 0;
}