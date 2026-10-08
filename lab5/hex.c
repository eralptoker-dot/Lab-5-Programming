#include <stdio.h>

int main() {
    int num;

    printf("Enter Hex Number in 0x00 format: ");
    scanf("%x", &num);

    printf("Binary: ");

    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    return 0;
}