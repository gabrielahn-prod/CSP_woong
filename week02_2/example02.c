#include <stdio.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a, b;

    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Your numbers were %d %d\n", a, b);

    printf("After swaption...\n");
    swap(&a, &b);
    printf("Your numbers are %d %d\n", a, b);
    
    return 0;
}