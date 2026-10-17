#include <iostream>

int main(void){
    std::string message;

    std::cout << "ITE1015 ChatBot" << std::endl;
    std::cout << "To quit the messenger, type \"bye\"!!" << std::endl;

    while(true){
        std::cout << "You> ";
        std::getline(std::cin, message);
        if (message == "bye") break;
        else{
            std::cout << "Bot> " << message << std::endl;
        }
    }
    return 0;
}