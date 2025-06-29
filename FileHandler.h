#include "functions.h"

struct fileInfo
{
    std::string path = "";
    std::fstream file;
};


class FileHandler{
private:
    fileInfo fi;
public:
    FileHandler();
    std::string readLine();
    void writeLine(std::string data);
    void resetOffset();
    ~FileHandler();
};