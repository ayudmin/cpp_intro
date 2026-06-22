#include <iostream>

// iterating using for loops

int main(){
    int sum = 0; // sum value from 1 through 10
    for (int val = 1; val <= 10; ++val)
        sum += val;
        std::cout << "sum of 1 through 10 is: " << sum << std::endl;
    return 0;
}


