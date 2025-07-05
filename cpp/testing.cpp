// Compiler: g++ version 9.3.0
// This is a simple program designed just to test basic programming
// on the tablet using codespaces.
// DO  NOT ENABLE VIM MODE FOR XIAOMI PAD 7, IT DONT WORK WELL!s

#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    if (name.empty()) {
        std::cout << "No name entered." << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }  
    return 0;
}