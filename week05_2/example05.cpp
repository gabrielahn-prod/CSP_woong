#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
    fstream fin;
    string fileName = argv[1], line;

    fin.open(fileName);
    while(getline(fin, line)){
        std::cout << line;
    }

}