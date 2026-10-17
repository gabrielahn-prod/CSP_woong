#include <iostream>

int main(void){
    int budget = 300000;
    int spend;
    char cmd;
    bool is_running = true;

    while(is_running){
        // Input
        std::cout << "Your Budget: " << budget << std::endl;
        std::cout << "e: expense, q: quit > ";
        std::cin >> cmd;

        // cmd for switch
        switch(cmd){
            // Quit
            case 'q':
                is_running = false;
                break;
            
            case 'e':
                std::cout << "New expense: ";
                std::cin  >> spend;

                // Negative spend
                if (spend < 0){
                    std::cout << "Spend is not negative. Please enter another value." << std::endl;
                    break;
                }

                // Possitive spend
                if ((budget - spend) < 0){
                    std::cout << "Are you going to be broke?" << std::endl;
                }
                else{
                    budget -= spend;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Processing........" << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                }
                break;
        }
    }

    return 0;
}