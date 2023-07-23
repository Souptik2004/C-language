#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int major_sum = 0, minor_sum = 0;

    // Calculate the sum of major and minor diagonal elements
    for(int i=0; i<3; i++) {
        major_sum += matrix[i][i];
        minor_sum += matrix[i][2-i];
    }

    // Display the sum of major and minor diagonal elements
    printf("Sum of major diagonal elements: %d\n", major_sum);
    printf("Sum of minor diagonal elements: %d\n", minor_sum);

    return 0;
}