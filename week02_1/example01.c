#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    for (int idx = 0; idx < 5; idx++){
        printf("Index %d: %d\n", idx, *(ptr+idx));
    }

    return 0;
}