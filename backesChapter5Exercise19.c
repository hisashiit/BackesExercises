#include <stdio.h>

int main() {
    float S = 0;
    float i = 1.0;
    float j = 1.0;
    while (i<=55){
        S = j/i + S;
        //printf("O valor de S '%.2f'",S);
        j = j+2;
        i++;
    }

    printf("O valor de S '%.2f'",S);

    return 0;
}