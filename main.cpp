#include <iostream>
#include "FileHandler.h"

int main(){

    FileHandler f;
    f.setPath("tests/test1.txt");
    std::cout << f.readLine() << std::endl;
    std::cout << f.readLine() << std::endl;
    return 0;
}