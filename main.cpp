#include <iostream>

/*
* reading an unknown number of inputs
* from user supplied data
*/

int main(){
    int sum = 0, value = 0;
    while (std::cin >> sum){
        sum += value;
        std::cout << "sum is: " << sum << std::endl;
    }
    return 0;
}
