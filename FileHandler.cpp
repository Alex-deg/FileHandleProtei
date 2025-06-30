#include "FileHandler.h"

FileHandler::FileHandler(){
    fi.path = checkPath();
    fi.file.open(fi.path, std::ios::in | std::ios::out);
}

std::string FileHandler::readLine()
{
    std::string result = "";
    std::getline(fi.file, result);
    if(fi.file.eof()){
        std::cout << "You have reached the end of the file" << std::endl;
    }
    return result;
}

FileHandler::~FileHandler(){
    fi.file.close();
}

void FileHandler::writeLine(std::string data){
    fi.file.seekp(0, std::ios::end);
    fi.file << '\n' + data;
}

void FileHandler::resetOffset(){
    fi.file.clear();
    fi.file.seekg(0, std::ios::beg);
    fi.file.seekp(0, std::ios::beg);
}