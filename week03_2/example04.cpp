#include <iostream>

void repeat_msg(std::string msg, int freq = 2){
    for (int i = 0; i < freq; i++){
        std::cout << msg << std::endl;
    }
}

int main()
{
    repeat_msg("hi");
    repeat_msg("hello", 10);

    return 0;
}