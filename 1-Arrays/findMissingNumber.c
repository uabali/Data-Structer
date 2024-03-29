// Created by Umut Abalı on 29.03.2024.
// How do you find the missing number in a given integer array of 1 to 10?

#include <stdio.h>

int findMissingNumber(int array[], int n) {
    // Calculate the sum of numbers from 1 to 10
    int Toplam = 10 * (10 + 1) / 2;

    // Calculate the sum of elements in the array
    int Toplam2 = 0;
    for (int i = 0; i < n; i++) {
        Toplam2 += array[i];
    }

    return Toplam - Toplam2;
}

int main() {
    int array[] = {8, 2, 7, 4, 5, 10, 3, 1, 9, /*10,*/ };
    int n = sizeof(array) / sizeof(array[0]);

    int missingNumber = findMissingNumber(array, n);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

