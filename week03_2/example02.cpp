#include <iostream>
#include <string>

bool find(std::string* arr, std::string word, int length, int* idx){
    for(int i = 0; i < length; i++){
        if(arr[i] == word){
            *idx = i;
            return true;
        }
    }
    return false;
}

int main() {
    std::string word;
    std::string words[200];
    int word_count[200];
    int length = 0, max_idx = 0;

    while (std::cin >> word) {
        int found_idx = 0;

        // Word found 
        if (find(words, word, length, &found_idx)){
            word_count[found_idx] += 1;
        }
        // Word not found
        else{
            word_count[length] = 1;
            words[length] = word;
            length++;
        }
    }

    // Find Max
    for(int i = 0; i < length; i++){
        if(word_count[max_idx] < word_count[i]){
            max_idx = i;
        }
    }
    
    std::cout << "Max frequency is " << word_count[max_idx] << " and the word is \"" << words[max_idx] << "\". " << std::endl;
    return 0;
}