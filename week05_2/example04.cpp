#include <iostream>
#include <cstdlib>

int main(int argc, char** argv){
    std::string msg;
    int idx[argc-2];
    msg = argv[1];

    for(int i = 2; i < argc; i++){
        idx[i-2] = atoi(argv[i]);
    }

    for(int i = 0; i < (sizeof(idx) / sizeof(idx[0])); i++){
        msg[idx[i]] = '*';
    }
    std::cout << msg << std::endl;

    return 0;
}