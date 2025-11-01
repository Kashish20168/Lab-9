#include <stdio.h>


void convertToBinary(int num, int *binary, int *size);

int main() {
    int decimal;
    int binary[32];
    int size = 0;

    printf("Enter the decimal access code: ");
    scanf("%d", &decimal);

    convertToBinary(decimal, binary, &size);

    printf("Binary equivalent: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
void convertToBinary(int num, int *binary, int *size) {
    if (num == 0) {
        binary[(*size)++] = 0;
        return;
    }

    while (num > 0) {
        binary[(*size)++] = num % 2;
        num = num / 2;
    }
}
