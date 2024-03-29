// Created by Umut Abalı on 29.03.2024.
//Program to find the minimum (or maximum) element of an array
#include <stdio.h>

void FindMinMax(int arrayf[], int n){

    int max=arrayf[0];
    int min=arrayf[0];

    for (int i = 1; i < n; i++) {
        if (arrayf[i] < min)
            min = arrayf[i];
        else if (arrayf[i] > max)
            max = arrayf[i];
    }

    printf("Min number: %d\nMax number: %d",min,max);

}

int main(){

    int array[] = {21,37,74,51,96,43,20};
    int array_n = sizeof(array) / sizeof(array[0]);

    FindMinMax(array,array_n);

    return 0;
}