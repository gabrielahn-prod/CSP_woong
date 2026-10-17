#include <stdio.h>

void find_min_max(int* arr, int length, int* min, int* max){
    *min = arr[0];
    *max = arr[0];
    for(int i = 1; i < length; i++){
        if (*min > arr[i]){
            *min = arr[i];
        }
        if (*max < arr[i]){
            *max = arr[i];
        }
    }
}

int main(void) {
    int arr[5], min, max;

    printf("Let's fill an array of size 5\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    find_min_max(arr, 5, &min, &max);
    printf("Min: %d, Max: %d in the array\n", min, max);

    return 0;
}