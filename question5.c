#include <stdio.h>
#include <stdlib.h> 
#include <time.h>     

#define SIZE 8

void generateImage(int img[SIZE][SIZE]);
void brightenImage(int img[SIZE][SIZE], int bright[SIZE][SIZE]);
void displayImage(int img[SIZE][SIZE]);

int main() {
    int image[SIZE][SIZE];
    int brightImage[SIZE][SIZE];


    generateImage(image);

    brightenImage(image, brightImage);

   
    printf("Original Image (8x8):\n");
    displayImage(image);

    printf("\nBrightened Image (+20):\n");
    displayImage(brightImage);

    return 0;
}

void generateImage(int img[SIZE][SIZE]) {
    srand(time(0));  
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            img[i][j] = rand() % 256; 
        }
    }
}

void brightenImage(int img[SIZE][SIZE], int bright[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            bright[i][j] = img[i][j] + 20;
            if (bright[i][j] > 255)
                bright[i][j] = 255; 
        }
    }
}

void displayImage(int img[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d", img[i][j]);
        }
        printf("\n");
    }
}
