#include <iostream>
#include <fstream>
#include <set>
#include <string>

int main(){

    std::ifstream textFile("text.txt");
    if(!textFile.is_open()){
        std::cout << "The file is not open" << std::endl;
    }

    std::set<std::string> lines;
    std:: string line;
    while(std::getline(textFile, line)){
        lines.insert(line);
    }

    textFile.close();

    for(const std::string& line : lines){
        std::cout << line << std::endl;
    }

}