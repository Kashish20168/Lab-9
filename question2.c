#include <stdio.h>


void swapArrays(int *a, int *b, int size);

int main() {
    int lahore[]  = {11, 22, 33, 44, 55};
    int karachi[] = {66, 77, 88, 99, 100};
    int size = 5;


    printf("Before swapping:\n");
    printf("Lahore branch IDs: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", lahore[i]);
    }

    printf("\nKarachi branch IDs: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", karachi[i]);
    }

   
    swapArrays(lahore, karachi, size);

  
    printf("\n\nAfter swapping:\n");
    printf("Lahore branch IDs: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", lahore[i]);
    }

    printf("\nKarachi branch IDs: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", karachi[i]);
    }

    printf("\n");
    return 0;
}


void swapArrays(int *a, int *b, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}
