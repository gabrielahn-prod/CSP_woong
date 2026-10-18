#include <iostream>
#include <string>

int main() {
    std::string word;
    int word_count = 0;

    while (std::cin >> word) {
        word_count++;
    }

    std::cout << "The number of words is " << word_count << std::endl;

    return 0;
}