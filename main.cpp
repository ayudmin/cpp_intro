// writing a program that multiplies two numbers
// with user passed data
#include <iostream>

int main(){
    std::cout << "enter first number: ";
    int number_1;
    std::cin >> number_1;
    std::cout << "enter second number: ";
    int number_2;
    std::cin >> number_2;
    std::cout << "the product of " << number_1 << "*" << number_2 << " is: " << number_1 * number_2 << std::endl;
    return 0;
}
