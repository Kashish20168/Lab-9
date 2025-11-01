#include <stdio.h>

int factorial(int n); 

int main() {
    int N;
    printf("Enter a non-negative integer: ");
    scanf("%d", &N);

    if (N < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %d\n", N, factorial(N));

    return 0;
}

int factorial(int n) {
    if (n == 0)        
        return 1;
    else             
        return n * factorial(n - 1);
}
