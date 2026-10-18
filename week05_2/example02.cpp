#include <iostream>
#include "point_print.h"

int main(void) {
    Point p[] = {{8, 3}, {7, 5}, {5, 1}, {4, 9}};
    print_center_of_points(p, sizeof(p) / sizeof(p[0]));
    
    return 0;
}