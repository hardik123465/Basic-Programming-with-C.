#include <stdio.h>

void main() {
    
    int int_arr[3] = {10, 20, 30};
    float float_arr[3] = {1.5, 2.7, 3.9};
    char char_arr[3] = {'A', 'B','c'};
    
    printf("Integer Array: ");
    for( int i = 0; i < 3; i++) {
        printf("%d ", int_arr[i]); 
    }
    printf("\n");

    printf("Float Array: ");
    for(int i = 0; i < 3; i++) {
        printf("%.2f ", float_arr[i]); 
    }
    printf("\n");


    printf("Character Array: ");
    for(int i = 0; i < 3; i++) {
        printf("%c ", char_arr[i]); 
    }
    printf("\n");

    
};