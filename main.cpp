#include <iostream>
#include "FileHandler.h"

int main(){

    FileHandler f("tests/test1.txt");
    std::cout << f.readLine() << std::endl;
    std::cout << f.readLine() << std::endl;
    f.writeLine("23");
    return 0;
}