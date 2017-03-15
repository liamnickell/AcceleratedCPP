// Exercise 1-0
#include <iostream>
#include <string>

int main() {
    // First code example
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Hello, " + name + "!" << std::endl;

    // Second code example
    std::cout << "Please enter your first name: ";
    std::string newName;
    std::cin >> newName;

    const std::string greeting = "Hello, " + newName + "!";

    std::string spaces(greeting.size(), ' ');
    std::string second = "* " + spaces + " *";
    std::string first(second.size(), '*');

    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;  
}
