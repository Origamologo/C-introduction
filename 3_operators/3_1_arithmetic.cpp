#include <iostream>

int main() {
    // + - * / %

    int age = 28;
    int newAge = age + 1;

    std::cout << age << std::endl;
    std::cout << newAge << std::endl;

    int age1 = 29;
    age1 = age1 + 1;

    std::cout << age1 << std::endl;

    int age2 = 30;
    double incrementer = 1.0;
    age2 = age2 + incrementer;

    std::cout << age2 << std::endl;

    int modulusAge = newAge % 5; // This gives the reminder of the division
    std::cout << modulusAge << std::endl;

    int modulusAge2 = (age + 3) % 5;
    std::cout << modulusAge2 << std::endl;

    std::string name = "Miguel";
    std::cout << name +" Tuda" << std::endl; // We can use + with strings
}