#include <iostream>

typedef struct{
    int xpos;
    int ypos;
}Point;


// int
int multiply(int x, int y){
    return x * y;
}

// double
double multiply(double x, double y){
    return x * y;
}

// struct Point
Point multiply(Point p1, Point p2){
    Point temp;
    temp.xpos = p1.xpos * p2.xpos;
    temp.ypos = p1.ypos * p2.ypos;
    return temp;
}

// 2D - array
void multiply(int array1[3][2], int array2[3][2], int temp[3][2]){
    for (int i = 0; i < 3; i++){
        temp[i][0] = array1[i][0] * array2[i][0];
        temp[i][1] = array1[i][1] * array2[i][1];
    }
}

void printArray(int arr[3][2]){
    std::cout << "{";
    for(int i = 0; i < 3; i++){
        std::cout << "{";
        for(int j = 0; j < 2; j++){
            std::cout << arr[i][j];
            if (j != 1){
                std::cout << ", ";
            }
            
        }
        std::cout << "}";
        if (i != 2){
            std::cout << ", ";
        }
    }
    std::cout << "}";
}

int main(void){
    int    intA = 2, intB = 5, intResult;
    double doubleA = 2.0, doubleB = 5.0, doubleResult;
    Point  p1 = {2, 3}, p2 = {3, 4}, PointResult;
    int    array1[3][2] = {{2, 3}, {3, 4}, {5, 6}};
    int    array2[3][2] = {{2, 3}, {3, 4}, {5, 6}};
    int    arrayResult[3][2];

    intResult    = multiply(intA, intB);
    doubleResult = multiply(doubleA, doubleB);
    PointResult  = multiply(p1, p2);
    multiply(array1, array2, arrayResult);

    std::cout << "Int type multiple" << std::endl;
    std::cout << intA << " * " << intB << " = " << intResult << std::endl;
    std::cout << "Double type multiple" <<std::endl;
    std::cout << doubleA << " * " << doubleB << " = " << doubleResult << std::endl;
    std::cout << "Point type multiple"<< std::endl;
    std::cout << "(" << p1.xpos << ", " << p1.ypos << ") * (" << p2.xpos << ", " << p2.ypos << ") " << " = (" <<  PointResult.xpos << ", " << PointResult.ypos << ")" << std::endl;
    
    std::cout << "Array type multiple" << std::endl;
    printArray(array1);
    std::cout << " * ";
    printArray(array2);
    std::cout << " = ";
    printArray(arrayResult);
    std::cout << std::endl;

}