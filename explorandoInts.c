#include <stdio.h>
#include <stdlib.h>

int main() {

    float a = 1000000.0f; // A large number
    float b = 0.0001f;    // A very small number
    float c = a + b;      // Add the small number to the large number

    int x = 1000000;      // The same number as an integer
    int y = 1;            // An integer small enough to see the difference
    int z = x + y;        // Add the small number to the large number

    printf("Using floats:\n");
    printf("a = %.10f, b = %.10f, c = %.10f\n", a, b, c);

    printf("\nUsing integers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}