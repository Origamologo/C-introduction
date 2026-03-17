/*
1. Prompt user for name
2. Take in and store user name
3. Print some welcome message
*/ 

#include <iostream>

int main() {
    std::string userName;
    std::cout << "Enter your name: ";
    std::cin >> userName;
    std::cout << std::endl << "Welcome to C++ " << userName << std::endl;
}