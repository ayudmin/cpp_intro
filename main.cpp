#include <iostream>

/*
* while statement
*/

int main(){
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to sum
    while (val <= 10){
        std::cout << "starting loop" << std::endl;
        std::cout << "sum is: " << sum << std::endl;
        std::cout << "val is: " << val << std::endl;
        sum += val;
        std::cout << "sum is: " << sum << std::endl;
        std::cout << "val is: " << val << std::endl;
        ++val;
        std::cout << "sum is: " << sum << std::endl;
        std::cout << "val is: " << val << std::endl;
    }
    std::cout << "sum of 1 to 10 inclusive is: " << sum << std::endl;
    return 0;
}
