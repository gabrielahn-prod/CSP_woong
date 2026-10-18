#include "point_sum.h"

void point_sum(Point* p, int len, Point& out){
    out.x = 0;
    out.y = 0;

    for(int i = 0; i < len; i++){
        out.x += p[i].x;
        out.y += p[i].y;
    }
}