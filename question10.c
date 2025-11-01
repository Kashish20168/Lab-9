#include <stdio.h>

int findHCF(int a, int b);
int findLCM(int a, int b);

int main() {
    int num1, num2, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nPress 1 for HCF\n");
    printf("Press 2 for LCM\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = findHCF(num1, num2);
        printf("HCF of %d and %d = %d\n", num1, num2, result);
    }
    else if (choice == 2) {
        result = findLCM(num1, num2);
        printf("LCM of %d and %d = %d\n", num1, num2, result);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

int findHCF(int a, int b) {
    int hcf;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}

int findLCM(int a, int b) {
    int lcm;
    lcm = (a * b) / findHCF(a, b);  
    
    return lcm;
}
