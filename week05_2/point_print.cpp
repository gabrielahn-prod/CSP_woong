#include <iostream>
#include "point_print.h"
#include "point_sum.h"

void print_center_of_points(Point* p, int len){
    Point out;
    point_sum(p, len, out);

    std::cout << "The center of Points is: (" << out.x << ", " << out.y << ")" << std::endl;
}