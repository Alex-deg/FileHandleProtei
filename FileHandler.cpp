#include "FileHandler.h"

std::string FileHandler::readLine(){
    std::ifstream file;
    std::string result = "";
    file.open(path);
    file.seekg(offset, std::ios::beg);
    getline(file, result);
    offset += result.size() + 1;
    file.close();
    return result;
}

void FileHandler::setPath(std::string path){
    this->path = path;
}
