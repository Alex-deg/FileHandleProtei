#include "FileHandler.h"

int main(){

    FileHandler f;
    char menu;
    std::string message;
    do{
        system("clear");
        std::cout << "1. FileHandler::readLine()" << std::endl;
        std::cout << "2. FileHandler::writeLine()" << std::endl;
        std::cout << "3. FileHandler::resetOffset()" << std::endl;
        std::cout << "4. Exit" << std::endl;
        try{
            std::cin >> message;
            if(message.size() > 1)
                throw std::runtime_error("Argument is too long");
            menu = message[0];
            if(menu < 49 || menu > 52)
                throw std::invalid_argument("Input is not valide number");
        }
        catch(const std::exception&e){
            std::cerr << e.what() << std::endl;
        }
        switch (menu)
        {
        case '1':{ std::cout << f.readLine() << std::endl; break; }
        case '2':{ 
            system("clear");
            std::cout << "Enter a message to write to file" << std::endl;
            cinFlush();
            std::getline(std::cin, message);
            f.writeLine(message);
            break;
        }
        case '3':{ f.resetOffset(); }
        }
        system("read -p 'Press Enter to continue...' var");
    } while(menu != '4');
    return 0;
}