#include <iostream>
#include <iomanip>

int main(void){
    int budget = 300000, idx = 0, spend;
    int history[5];
    char cmd;
    bool is_running = true;

    while(is_running){
        // Input
        std::cout << "Your Budget: " << budget << std::endl;
        std::cout << "h: history, e: expense, q: quit > ";
        std::cin >> cmd;

        // cmd for switch
        switch(cmd){
            // Case e
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
                    history[idx] = spend;
                    idx++;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Processing........" << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                }
                break;

            // History
            case 'h':
                for (int i = 0; i < idx; i++){
                    std::cout << "[" << i + 1 << "] " << std::right << std::setw(7) << history[i] << std::endl;
                }
                break;

            // Quit
            case 'q':
                is_running = false;
                break;
        }

        // idx >= 5
        if (idx >= 5){
            std::cout << "Your Budget: " << budget << std::endl;
            std::cout << "idx is 5. Program killing" << std::endl;
            is_running = false;
        }
        std::cout << std::endl;
    }

    return 0;
}