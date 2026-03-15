#include <iostream>

int main() {
    const std::string email = "mymail@mail.com"; // If we add const the normal string is transformed into a constant
    std::cout << email << std::endl;
    // email = "fasfda"

}