#include <string>
#include <fstream>
#include <iostream>

struct fileInfo
{
    std::string path = "";
    int offset = 0;
    std::fstream file;
};


class FileHandler{
private:
    fileInfo fi;
public:
    FileHandler(std::string path);
    std::string readLine();
    void writeLine(std::string data);
    void resetOffset();
    ~FileHandler();
};