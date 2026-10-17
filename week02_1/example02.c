#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int idx = 0;

    while(1){
        printf("Index %d: %d\n", idx, arr[idx]);
        idx++;
    }

    return 0;
}