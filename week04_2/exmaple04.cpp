#include <iostream>

struct _point {
 int x;
 int y;
};


void find_center(_point points[], double& xResult, double& yResult, int length){
    int xSum = 0, ySum = 0;
    for (int i = 0; i < length; i++){
        xResult += points[i].x;
        yResult += points[i].y;
    }

    xResult /= length;
    yResult /= length;
}


int main(void){
    double center_x = 0, center_y = 0;
    struct _point points[4] = {{8, 3}, {7, 5}, {5, 1}, {4, 9}};

    find_center(points, center_x, center_y, 4);
    std::cout << "The center of point is: (" << center_x << ", " << center_y << ")" << std::endl;
    
    return 0;
}