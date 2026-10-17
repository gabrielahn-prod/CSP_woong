#include <stdio.h>

unsigned long get_capacity(int arr[], int length){
    return sizeof(arr[0]) * length;
}

int main(void) {
    int a[3] = {10, 20, 30};
    int b[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("%lu, %lu\n", sizeof(a), sizeof(b));
    printf("%lu, %lu\n", get_capacity(a, sizeof(a)), get_capacity(b, sizeof(b)));

    return 0;
}