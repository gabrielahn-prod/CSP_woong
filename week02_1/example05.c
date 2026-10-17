#include <stdio.h>

// call-by-value
void make_2x_int(int a) {
    a = a * 2;
}

// call-by-reference
void make_2x_arr(int arr[], int len) {
    for (int i = 0; i < len; i++){
        arr[i] = arr[i] * 2;
    }
}

int main(void) {
    int i = 0, val = 10, arr[5] = {1, 2, 3, 4, 5};

    // Original
    printf("Original Value\n");
    for (i = 0; i < 5; i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    printf("\n");

    // Call-by-value
    make_2x_int(val);
    printf("Call by Value\n");
    printf("val: %d\n", val);
    for (i = 0; i < 5; i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    printf("\n");

    // Call-by-reference
    make_2x_arr(arr, 5);
    printf("Call by Reference\n");
    printf("val: %d\n", val);
    for (i = 0; i < 5; i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}