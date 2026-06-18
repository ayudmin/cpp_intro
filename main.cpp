#include <iostream>

int main (){
    std::cout << "enter first number: ";
    int v1;
    std::cin >> v1;
    int v2;
    std::cout << "enter second number: ";
    std::cin >> v2,
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}
