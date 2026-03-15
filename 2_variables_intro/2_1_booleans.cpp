#include <iostream>

int main() {
    bool isOn = true;
    bool isGameOver;
    isGameOver = false;

    std::cout << isOn << "\n";
    std::cout << isGameOver << std::endl; // std::endl end line command is a better way to jump lines using variables than \n

    isGameOver = true;
    std::cout << isGameOver << std::endl;

}