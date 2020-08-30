#include <string>
#include <stdio.h>
#include <iostream>

#include <yaml-cpp/yaml.h>

class Config : public YAML::Node
{
public:
    Config(std::string file_path) : YAML::Node(YAML::LoadFile(file_path)) {}
};

int main(int argc, char *argv[])
{
    std::cout << "Hello World!" << std::endl;

    return 0;
}