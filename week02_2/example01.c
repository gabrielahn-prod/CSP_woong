#include <stdio.h>

int global_sum = 0;


int add_with_return_value(int x, int y){
    return x + y;
}

void add_with_pointer(int* sum, int x, int y){
    *sum = x + y;
}

void add_with_global_variable(int x, int y){
    global_sum = x + y;
}

int main(void) {
    int a = 10, b = 20, sum = 0;
    int* ptr = &sum;

    // Using Returning Value
    printf("Using Returning Value\n");
    printf("%d + %d = %d\n", a, b, add_with_return_value(a, b));
    printf("\n");

    // Using Pointer
    printf("Using Pointer\n");
    add_with_pointer(ptr, a, b);
    printf("%d + %d = %d\n", a, b, *ptr);
    printf("\n");

    // Using Global Variable
    printf("Using Global Variable\n");
    add_with_global_variable(a, b);
    printf("%d + %d = %d\n", a, b, global_sum);

    return 0;
}