#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    int idx = 0;

    while(1){
        printf("Index %d: %d\n", idx, *(ptr+idx));
        idx++;
    }

    return 0;
}