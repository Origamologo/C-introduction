#include <iostream>

int main() {

    // We can create several variables to store input when there are spaces
    std::string input1;
    std::string input2;
    std::cin >> input1 >> input2;
    std::cout << input1 << std::endl;
    std::cout << input2 << std::endl;
    std::cout << input1 << input2 << std::endl;

    std::string input;
    std::cin >> input; // As soon as there is a space is assumed that is a new input
    std::cout << input << std::endl; // so from "Hello, World!" it will print "Hello,"
    // but it will keep "Wold!" in the Input Buffer and that will be the the catch for the next input
    std::string input3;
    std::string input4;
    std::cin >> input3 >> input4;

    std::cout << "1: " << input3 << '\n';
    std::cout << "2: " << input4 << '\n';
    std::cout << "3: " << input3 << input4 << '\n';

    int input5; // To have an integer as input
    std::cin >> input5;
    std::cout << input5 << std::endl; // If the input is not an integer the outpu will 0
}