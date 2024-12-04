#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int k = 5;

    printf("Resultado: %d\n", k>x);

    if (k > x || k == x)
    {
        printf("k > x");
    }
    return 0;
}