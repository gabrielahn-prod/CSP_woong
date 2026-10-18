#include <iostream>

using namespace std;

void swap_by_pointers(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_by_references(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(void) {
    int a, b;

    a = 10, b = 20;
    swap_by_pointers(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;

    a = 10, b = 20;
    swap_by_references(a, b);
    cout << "a: " << a << ", b: " << b << endl;
    
    return 0;
}