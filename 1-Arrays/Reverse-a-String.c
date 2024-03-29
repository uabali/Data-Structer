//Write a program to reverse the array
// Created by Umut Abalı on 28.03.2024.
#include <stdio.h>
#include <string.h>

int main(){

    char array1[] = "Merhaba Umut";
    int array_size = strlen(array1);
    char array2[array_size];

    // array1 dizisinin tersini array2 dizisine kopyalama
    for (int i = 0; i < array_size; i++) {
        array2[i] = array1[array_size - 1 - i];
    }
    array2[array_size] = '\0'; // array2 dizisine null karakter ekleme

    printf("%s\n", array2);

    return 0;
}