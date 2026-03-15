#include <iostream>

int main() {
    std::string name ="Zenva";

    std::string mixedString = "1n.";
    std::cout << mixedString << std::endl;

    std::string defaultSting;
    std::cout << defaultSting << std::endl;

    // The following are three complety different types of information with the same representation in the console
    int numberOne = 1; // Literal numerical value
    char one = '1'; // Unicode for the character
    std::string stringOne = "1"; // String representation, which is like creating a list of characters with only one member in this case
}