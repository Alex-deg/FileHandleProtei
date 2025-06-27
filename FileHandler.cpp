#include "FileHandler.h"

FileHandler::FileHandler(std::string path){
    fi.path = path;
    try{
        fi.file.open(fi.path, std::ios::in | std::ios::out);
    }
    catch (const std::exception &e){
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}

std::string FileHandler::readLine()
{
    std::string result = "";
    fi.file.seekg(fi.offset, std::ios::beg);
    std::getline(fi.file, result);
    fi.offset += result.size() + 1;
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
    fi.offset = 0;
}
