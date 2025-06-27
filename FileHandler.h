#include <string>
#include <fstream>

class FileHandler{

private:
    std::string path = "";
    int offset = 0;
public:

    std::string readLine();
    void writeLine();

    void setPath(std::string path);

};