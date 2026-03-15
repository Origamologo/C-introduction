#include <iostream>
#include <ostream>


int main() {

    int ageNextYear;
    ageNextYear = 43;

    int health; // Default value is 0
    std::cout << health << std::endl;
    health = 50;
    std::cout << health << std::endl;
    health = -50;
    std::cout << health << std::endl;

    uint age = 42; // Only hold a possitive value
    std::cout << age << std::endl;

    uint nage = -42; // If we assing a negative value to uint we'll get a hughe number due to binary transformation behind the scenes
    std::cout << nage << std::endl;

    short shortInt = 50; //small range of numbers
    std::cout << shortInt << std::endl;
    long longInt = 5000; //long range
    std::cout << longInt <<std::endl;
    long long longLongInt = 5000000000000;
    std::cout << longLongInt<< std::endl; //very large numbers
}