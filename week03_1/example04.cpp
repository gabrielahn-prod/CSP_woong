#include <iostream>
#include <string>

int main(void){
    std::string message;
    std::string upper_message;
    bool is_upper = false;

    std::cout << "ITE1015 ChatBot" << std::endl;
    std::cout << "To quit the messenger, type \"bye\"!!" << std::endl;

    while(true){
        std::cout << "You> ";
        std::getline(std::cin, message);

        // Bye check
        if (message == "bye") break;

        // upper check
        if(message == "upper") {
            is_upper = true;
            continue;
        }

        // Upper
        if(is_upper){
            upper_message = message;
            for (int i = 0; i < upper_message.length(); i++) {
                if (upper_message[i] >= 'a' && upper_message[i] <= 'z') {
                    upper_message[i] = upper_message[i] - 'a' + 'A';
                }
            }
            std::cout << "Bot> " << upper_message << std::endl;
        }

        // Not upper
        else{
            std::cout << "Bot> " << message << std::endl;
        } 
            
    }
    return 0;
}