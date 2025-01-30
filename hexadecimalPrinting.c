#include <stdio.h>

int main() {
    printf("Hexadecimal\tDecimal\n");
    printf("-----------------------\n");

    // Loop through 0 to 15 (decimal), which corresponds to 0x0 to 0xF
    for (int i = 0; i < 16; i++) {
        printf("0x%X\t\t%d\n", i, i);
    }

    return 0;
}
